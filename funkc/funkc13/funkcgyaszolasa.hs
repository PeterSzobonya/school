--data Maybe a = Just a | Nothing

-- safeDiv :: Int -> Int -> Maybe Int
-- safeDiv a 0 = Nothing
-- safeDiv a b = Just (a `div` b)

-- showMaybeInt :: Maybe Int -> String
-- showMaybeInt Nothing = "Itt nincs semmi"
-- showMaybeInt (Just n) = "Az eredmeny: " ++ show n

-- safeHead :: [a] -> Maybe a
-- safeHead (x:_) = Just x
-- safeHead [] = Nothing



data Privilege = Unprivileged | Admin 
    deriving (Show,Eq)

data Cookie = LoggedOut | LoggedIn String Privilege deriving (Show,Eq)
    
db = [("dumbledore","abracadabra",Unprivileged)
    , ("root", "secret", Admin)
    , ("bela", "korte", Unprivileged)]

register :: String -> String -> [(String,String,Privilege)] -> [(String,String,Privilege)]
register user pswd db
    | alreadyTaken == True = registeredDb
    | otherwise = db
        where
            alreadyTaken =  and (map ( /=user ) [ a | (a,b,c) <- db])
            registeredDb = (user,pswd,Unprivileged):db

getUser :: String -> [(String,String,Privilege)] -> Maybe (String,Privilege)
getUser user [] = Nothing
getUser user ((x,y,z):rest)
    | user == x = Just (y,z)
    | otherwise = getUser user rest

login :: String -> String -> [(String,String,Privilege)] -> Cookie
login user pswd [] = LoggedOut
login user pswd ((x,y,z):rest)
    | user==x && pswd==y = LoggedIn user z
    | otherwise = login user pswd rest
