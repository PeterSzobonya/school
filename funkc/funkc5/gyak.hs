import Data.Char

nullInt :: [Int] -> Bool
nullInt [] = True
nullInt _ = False 

toUpperFirst :: [Char] -> [Char]
toUpperFirst [] = []
toUpperFirst (x:[]) = (toUpper x:[])
toUpperFirst (x:xs) = ((toUpper x) : xs)

isLetter' :: Char -> Bool
isLetter' x = elem x (['a'..'z']++['A'..'Z'])

isDigit' :: Char -> Bool
isDigit' x = elem x ['0'..'9']

mountain ::Int -> [Int]
mountain x = ([1..x] ++ [x,x-1..1])

divisors :: Int -> [Int]
divisors n = [x | x <- [1..n], n `mod` x == 0]

powersOfTwo = [2^x | x <- [0..]]