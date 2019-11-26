headInt :: [Int] -> Int
headInt (x:xs) = x

tailInt :: [Int] -> [Int]
tailInt (x:xs) = xs

isSingleton :: [Int] -> Bool
isSingleton (x:[]) = True
isSingleton _ = False
isSingleton [] = False

hasTwoElements :: [Int] -> Bool
hasTwoElements [] = False
hasTwoElements (x:[]) = False
hasTwoElements (x:y:[]) = True
hasTwoElements (x:xs) = False











--nice af boiii
alma :: a -> String
alma _ = "alma"