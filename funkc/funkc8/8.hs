take' :: Int ->[a] -> [a]
take' 0 tomb = []
take' a [] = []
take' a (x:xs) = x:(take' (a-1) xs)

drop' :: Int -> [a] -> [a]
drop' a [] = []
drop' 0 list = list
drop' a (x:xs)
    | a>0 = drop' (a-1) xs
    | otherwise = xs

langAndRegion :: [Char] -> ([Char],[Char])
langAndRegion (x:xs) = (take' 2 (x:xs), drop' 3 (x:xs))

zip' :: [a] -> [b] -> [(a,b)]
zip' [] list = []
zip' list [] = []
zip' (x:xs) (y:ys) = (x,y):zip' xs ys

unzip' :: [(a,b)] -> ([a],[b])
unzip' [] = ([],[])
unzip' ((x,y):xs) = (x : fst(unzip' xs),y : snd(unzip' xs))

empty :: [Char] -> [Int]
empty "" = []
empty list = [ a | (a,b) <- zip' [1..] (lines list), b == ""]

splitAt' :: Int -> [a] -> ([a],[a])
splitAt' 0 list = ([],list)
splitAt' _ [] = ([],[])
splitAt' a list = (take' a list, drop' a list)

splitAt' a (x:xs)
    | a > 0 = (x:(splitAt' (a-1) xs),[])
    | otherwise = ()