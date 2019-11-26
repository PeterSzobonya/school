import Data.Char

both :: Char -> (Char,Char)
both a = (a,a)

diffCube :: Int -> Int -> Int
diffCube num1 num2 = (num1-num2)*(num1-num2)*(num1-num2)

toLowerFirstAndThird :: [Char] -> [Char]
toLowerFirstAndThird [] = ""
toLowerFirstAndThird (a:[]) = ""
toLowerFirstAndThird (a:b:[]) = ""
toLowerFirstAndThird (a:b:c:xs) = toLower a: b: toLower c :xs

headAndBeforeLast :: [Char] -> [Char]
headAndBeforeLast [] = ""
headAndBeforeLast (a:[]) = [a]
headAndBeforeLast (a:b:[]) = [a,a]
headAndBeforeLast list = head list : (list)!!a :[]
        where
            a=length (list)-2


average :: [Double] -> Double
average (a:[]) = a
average list = sum list / sum[ 1 | a <- list ]

arithmeticSequence :: Int -> Int -> [Int]
arithmeticSequence a b = [ x | x <- [a,a+b..]]

doubleElements :: [Int] -> [Int]
doubleElements [] = []
doubleElements (a:[]) = [a,a]
doubleElements(a:xs) = a:a:doubleElements xs