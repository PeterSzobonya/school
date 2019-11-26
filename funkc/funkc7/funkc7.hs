
--Orai kozos
fact' :: Integer -> Integer
fact' 0 = 1
fact' n = n * fact' (n-1)

fib :: Integer -> Integer
fib 0 = 0
fib 1 = 1
fib n = fib (n-1) + fib (n-2)

fib' :: Integer -> Integer
fib' n
    | n<= 1     = n
    | otherwise = fib' (n - 1) + fib' (n - 2)

--Orai feladatok lol ez a hetes
sum' :: [Int] -> Int
sum' [] = 0
sum' (x:xs) = x + sum' (xs)



last' :: [a] -> a
last' [x] = x 
last' (x:xs)  = last' (xs)

and' :: [Bool] -> Bool
and' [] = True
and' lista = not(elem False lista)

or' :: [Bool] -> Bool
or' [] = False
or' list = elem True list

replicate' :: Int -> Char -> [Char]
replicate' num char = [ char | a <- [1..num] ]

--Orai feladatok 6
pow :: Integer -> Integer -> Integer
pow _ 0 = 1
pow a b = a * pow a (b-1)

range :: Int -> Int -> [Int]
range a b 
    | a==b = [a]
    | a<b = [a] ++ range (a+1) b
    | a>b = [a] ++ range (a-1) b

length' :: [Int] -> Int
length' [] = 0
length' (x:xs) = 1 + length' (xs)

minimum' :: [Int] -> Int
minimum' (x:xs)
    | xs == [] = x
    | x < minimum (xs) = x
    | otherwise = minimum' (xs)

everySecond :: [Char] -> [Char]
everySecond [] = []
everySecond (x:[]) = [] 
everySecond (x:y:xs) = y : everySecond (xs)

elem' :: Char -> [Char] -> Bool
elem' _ [] = False
elem' char (x:xs) = char == x || elem' char (xs)

value :: Int -> [(Int,[Char])] -> [Char]
value a ((x,(xs)):list)
    | [] = error "nincs ilyen"
    | a == x = xs
    | otherwise = value a (list) 