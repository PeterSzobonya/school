sum' :: [Int] -> Int
sum' [] = 0
sum' (x:xs) = x + sum' xs

last' :: [Int] -> Int
last' [] = error("nemjo haha")
last'(x:[]) = x
last' (x:xs) = last' xs

and' :: [Bool] -> Bool
and' [] = True
and' (x:xs)
    | x == False = False
    | otherwise = and' xs

or' :: [Bool] -> Bool
or' [] = False
or' (x:xs)
    | x == True = True
    | otherwise = or' xs

replicate' :: Int -> Char -> [Char]
replicate' 0 char = []
replicate' times char = char : (replicate (times-1) char)

format :: Int -> [Char] -> [Char]
format a char
    | a > length char = ' ' : (format (a-1) char)
    | otherwise = char

insert :: Int -> [Int] -> [Int]
insert a [] = [a]
insert a (b:[])
    | a<b = (a:b:[])
    | otherwise = (b:a:[])
insert a (x:xs)
    | a<x = a:x:xs
    | otherwise = x: insert a xs

sort :: [Int] -> [Int]
sort [] = []
sort (x:[]) = [x]
sort (x:y:xs) = insert x (sort (y:xs))

merge :: [Int] -> [Int] -> [Int]
merge list [] = list
merge [] list = list
merge list1 list2 = sort (list1++list2)

mergeSort :: [Int] -> [Int]
mergeSort [] = []
mergeSort (x:[]) = [x]
mergeSort (x:y:[])
    | x<y = x:y:[]
    | otherwise = y:x:[]
mergeSort list = sort(mergeSort a ++ mergeSort b)
    where 
        (a,b) = splitAt 2 list

breakOn :: Char -> [Char] -> ([Char],[Char])
breakOn _ "" = ([],[])
breakOn char (x:xs)
    | x /= char = (x:a,b)
    | otherwise = ([],x:xs)
        where
            (a,b) = breakOn char (xs)