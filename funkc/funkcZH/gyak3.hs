import Data.List

assocLR :: ((a, b), c) -> (a, (b, c))
assocLR ((a, b), c) = (a, (b, c))

nonTrivialDivisors :: Int -> [Int]
nonTrivialDivisors a = [ x | x <- [2..(a-1)],a `mod` x == 0]

mirrorLast :: [a] -> [a]
mirrorLast [] = []
mirrorLast list = list ++ (tail (reverse list))

minMax :: Ord a => [a] -> (a,a)
minMax (a:[]) = (a,a)
minMax list = (head (sort list),last (sort list))

isPalindrome :: Eq a => [a] -> Bool
isPalindrome list = and [ a == b | (a,b) <- zip list (reverse list)]

countNonEmpties :: [[a]] -> Int
countNonEmpties list = length list - (sum [ 1 | a <- list, null a])

combine :: [a] -> [(a,a)]
combine [] = []
combine (a:[]) = []
combine list = [(list!!a,list!!b) | a <- [0..((length list)-1)], b <- [(a+1)..((length list)-1)]]

ap2Maybe :: (a -> b -> c) -> Maybe a -> Maybe b -> Maybe c
ap2Maybe f Nothing _ = Nothing
ap2Maybe f _ Nothing = Nothing
ap2Maybe f (Just a) (Just b) = Just (a `f` b)

someSatisfying :: Int -> (a -> Bool) -> [a] -> [a]
someSatisfying a f list = take a (filter f list)

pipeline :: [a -> a] -> a -> a
pipeline [] a = a
pipeline f a = foldr (\x y -> x y) a f

lookupPred :: (k -> Bool) -> [(k,v)] -> Maybe v
lookupPred f list
    | length a > 0 = Just (head a)
    | otherwise = Nothing
        where
            a = [ b | (a,b) <- list, f a]

allSatisfying :: (a -> Bool) -> [[a]] -> [a]
allSatisfying f [] = []
allSatisfying f list = concat [ a | a <- list, and(map f a)]

data NonEmpty a = NE a [a] 
    deriving(Show,Eq)

mapNE :: (a -> b) -> NonEmpty a -> NonEmpty b
mapNE f (NE a list) = NE (f a) (map f list)

filterNE :: (a -> Bool) -> NonEmpty a -> Maybe (NonEmpty a)
filterNE f (NE a list)
    | length x == 0 = Nothing
    | otherwise = Just (NE (head x) (tail x))
        where
            x = filter f (a:list)