--- minta
not' :: Bool -> Bool
not' True = False
not' False = True

f :: Int -> Int
f 0 = 1
f 1 = 3
f n = n

isFruit :: String -> Bool
isFruit "paradicsom" = True
isFruit "pancake" = True
isFruit "csemege" = True
isFruit _ = False

---Feladatooooooook :)
and' :: Bool -> Bool -> Bool
and' True True = True
and' _ _ = False

or' :: Bool -> Bool -> Bool
or' False False = False
or' _ _ = True

xor :: Bool -> Bool -> Bool
xor True True = False
xor False False = False
xor _ _ = True

add2 :: Int -> Int -> (Int,Int)
add2 0 0 = (0,0)
add2 1 1 = (0,1)
add2 _ _ = (1,0)

parent :: Char ->  Char -> Bool
parent '(' ')' = True
parent '[' ']' = True
parent '{' '}' = True
parent _ _ = False

calc :: (Int, Char, Int) -> Int
calc (a, '+', c) = a+c  
calc (a, '*', c) = a*c
calc (a, '-', c) = a-c
calc (a, '/', c) = div a c

isSpace :: Char -> Bool
isSpace ' ' = True
isSpace _ = False

isSpace2 a
 | a == ' ' = True
 | otherwise = False