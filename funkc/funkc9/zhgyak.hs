import Data.Char
f:: [(Int,Int)] -> Int
f ((x,y):(z,s):xs) = x+y+z+s

timeAdd :: (Int,Int) -> (Int,Int) -> (Int,Int)
timeAdd (x,y) (z,s) 
    | x+z >= 23 && y+s > 60 = (x+z-23,y+s-60)
    | x+z > 23 = (x+z-24,y+s)
    | y+s > 60 = (x+z+1,y+s-60)
    | otherwise = (x+z,y+s)

isSmile :: [Char] -> Bool
isSmile [] = False
isSmile (a:[]) = False
isSmile (x:y:[])
    | (x==':'||x==';')&&(y==')'||y==']'||y=='}') = True
    | otherwise = False
isSmile (x:y:xs) = False

bimBam :: Int -> [Char]
bimBam a
    | a`mod`3==0 && a`mod`5==0 = "BimBam"
    | a`mod`3==0 = "Bim"
    | a`mod`5==0 = "Bam" 
    | otherwise = ""

minList :: [Int] -> [Int] -> [Int]
minList list1 list2 = zipWith (min) list1 list2

wordNumWithCapital :: [Char] -> Int
wordNumWithCapital "" = 0
wordNumWithCapital list = sum [ 1 | a <- words list, isUpper (a!!0) ]

oneMatrix :: Int -> [[Int]]
oneMatrix 0 = []
oneMatrix a = take a (repeat (take a (repeat 1)))