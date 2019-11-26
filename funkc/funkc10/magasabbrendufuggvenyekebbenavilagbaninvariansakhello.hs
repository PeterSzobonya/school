import Data.Char

map' :: (a -> b) -> [a] -> [b]
map' f [] = []
map' f (a:as) = f a : map' f as

map'' :: (a -> b) -> [a] -> [b]
map'' f list = [ f a | a <- list]

square :: Int -> Int
square x = x ^ 2

filter' :: (a -> Bool) -> [a] -> [a]
filter' f list = [ a | a <- list, f (a) ]

upperToLower :: [Char] -> [Char]
upperToLower [] = []
upperToLower list = map toLower (filter isUpper list)

all' :: (a->Bool) -> [a] -> Bool
all' f [] = True
all' f list = and [ f a | a <- list ]

any' :: (a -> Bool) -> [a] -> Bool
any' f [] = False
any' f list = or [ f a | a <- list ]

hasLongLines :: [Char] -> Bool
hasLongLines [] = False
hasLongLines list = any' (>=3) (map (length) (map words (lines list)))

elem' :: Eq a => a -> [a] -> Bool
elem' a list = any' (==a) list

hasAny :: Eq a => [a] -> [a] -> Bool
hasAny [] [] = True
hasAny _ [] = False
hasAny [] _ = False
hasAny list1 list2 = any' (`elem'` list1) list2

takeWhile' :: (a -> Bool) -> [a] -> [a]
takeWhile' f [] = []
takeWhile' f list = take (f==True) list