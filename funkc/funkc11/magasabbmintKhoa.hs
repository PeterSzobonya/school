import Data.Char
import Data.List


takeWhile' :: (a -> Bool) -> [a] -> [a]
takeWhile' f list = foldr (\x acc -> if f x then x:acc else []) [] list

dropWhile' :: (a -> Bool) -> [a] -> [a]
dropWhile' f list = foldl (\acc x -> if f x then acc++ [x] else []) [] list

dropWord :: String -> String
dropWord  = dropWhile (/=' ')

dropSpaces :: String -> String
dropSpaces = dropWhile (==' ')

trim :: String -> String
trim string = reverse (dropWhile (==' ') (reverse (dropWhile (==' ') string)))

monogram :: String -> String
monogram string = unwords (map(\x -> (take 1 x)++['.'])(words string))

uniq :: Ord a => [a] -> [a]
uniq list = map (head) (group (sort list))

repeated :: Ord a => [a] -> [a]
repeated list = map head (filter (\x -> length x > 1) (group(sort list)))

zipWith' :: (a -> b -> c) -> [a] -> [b] -> [c]
zipWith' f list1 list2 = [ f a b | (a,b) <- zip list1 list2]

dotProduct :: [Int] -> [Int] -> Int
dotProduct list1 list2 = foldl (+) 0 (zipWith (*) list1 list2)

isPrime :: Int -> Bool
isPrime num = length [ a | a <- [1..num], num `mod` a == 0 ] == 2 

primes = [ a | a <- [1..], isPrime a]

iterate'' :: (a -> a) -> a -> [a]
iterate'' f start = start:iterate'' f (f start)
