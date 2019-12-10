import Data.String

data Day = Monday | Tuesday | Wednesday | Thursday | Friday | Saturday | Sunday
--         ^^^^^^   ^^^^^^^   ^^^^^^^^^   ^^^^^^^^   ^^^^^^   ^^^^^^^^   ^^^^^^   <- data constructors
--   ^                                                                            <- first letter capital
 deriving (Show,Eq)


isFirstDayOfWeek :: Day -> Bool 
isFirstDayOfWeek day = day == Monday

-- hááá ví kend?

isWeekend :: Day -> Bool
isWeekend Saturday = True
isWeekend Sunday = True
isWeekend _ = False

type Hour = Int
type Minute = Int

data Time = T Hour Minute
    deriving (Show,Eq)

showTime :: Time -> String
showTime (T h m) = (show h)++ ":" ++ (show m)

eqTime :: Time -> Time -> Bool
eqTime t t2 = t == t2

isEarlier :: Time -> Time -> Bool
isEarlier (T h m) (T h2 m2) = h<h2 || (h==h2 && m < m2)

isBetween :: Time -> Time -> Time -> Bool
isBetween (T h m) (T h2 m2) (T h3 m3) = isEarlier (T h m) (T h2 m2) && isEarlier (T h2 m2) (T h3 m3) || not(isEarlier (T h m) (T h2 m2)) && not(isEarlier (T h2 m2) (T h3 m3))

time :: Int -> Int -> Time
time h m
    | h < 0 || h > 23 = error "time: invalid hour: " h
    | m < 0 || m > 59 = error "time: invalid minute: " m
    | otherwise = (T h m)


data USTime = AM Hour Minute | PM Hour Minute
    deriving (Show,Eq)

showUSTime :: USTime -> String
showUSTime (AM h m) = show h ++ "." ++ show m ++ " am"
showUSTime (PM h m) = show h ++ "." ++ show m ++ " pm"

usTimeToTime :: USTime -> Time
usTimeToTime (AM h m)
    | h == 12  = (T 0 m)
    | otherwise = (T h m)
usTimeToTime (PM h m)
    | h == 12 = (T h m)
    | otherwise = ( T (h+12) m)


timeToUSTime :: Time -> USTime
timeToUSTime (T h m)
    | h /= 0 && h<12 = (AM h m)
    | h == 0 = (AM 12 m)
    | h == 12 = (PM h m)
    | h > 12 = (PM (h-12) m)