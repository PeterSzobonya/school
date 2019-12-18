--Feladatsor A csoport

import Data.List

toBack :: [a] -> [a]
toBack [] = []
toBack (a:[]) = [a]
toBack (a:b) = b++[a]

assocRL :: (a,(b,c)) -> ((a,b),c)
assocRL (a,(b,c)) = ((a,b),c)

mirrorFirst :: [a] -> [a]
mirrorFirst [] = []
mirrorFirst list = reverse(tail(list))++list

isSorted :: Ord a => [a] -> Bool
isSorted [] = True
isSorted (a:[]) = True
isSorted list = and [ a==b | (a,b) <- zip list (reverse (sort list)) ]

countEmpties :: [[a]] -> Int
countEmpties list = sum [ 1 | a <- list,  null a ]

takeLast :: Int -> [a] -> [a]
takeLast _ [] = []
takeLast 0 _ = []
takeLast a list = reverse ( take a (reverse list))

apMaybe :: Maybe (a -> b) -> Maybe a -> Maybe b
apMaybe (Just f) (Just a) = Just (f a)
apMaybe _ _ = Nothing 

reverseWords :: String -> String
reverseWords string = unwords (map (reverse) (words (string)))

pipeline :: [a -> a] -> a -> a 
pipeline [] a = a
pipeline f a = foldr (\x y -> x y) a f

lookupPair :: (k -> v -> Bool) -> [(k,v)] -> Maybe (k,v)
lookupPair f [] = Nothing
lookupPair f ((k1,v1):xs)
    | (f k1 v1) = Just (k1,v1)
    | otherwise = lookupPair f xs

onlyNonEmptySatisfying :: (a -> Bool) -> [[a]] -> [[a]]
onlyNonEmptySatisfying f list = [ filter f a | a <- list, length (filter f a) /= 0 ]

data Result a = Error String | Ok a
    deriving(Show,Eq)

safeHead :: [a] -> Result a
safeHead [] = Error "empty list"
safeHead (a:_) = Ok a

safeIndex :: [a] -> Int -> Result a
safeIndex [] _ = Error "index out of bounds"
safeIndex list a
    | length possible == a = Ok (list!!a)
    | otherwise = Error "index out of bounds"
        where
            possible = zip [1..a] list