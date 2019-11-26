
n::Int
n = 2

s::String
s = "hello"

even' :: Int -> Bool
even' n = mod n 2 == 0


--odd' n = mod n 2 /= 0
odd' :: Int -> Bool 
odd'  n = not (even' n)

dividers :: Int -> Int -> Bool
dividers a b = mod b a == 0

area :: Int -> Int -> Int
area a b = a*b

triangleSides :: Int -> Int -> Int -> Bool
triangleSides a b c = a+b-c > 0 && a+c-b > 0 && b+c-a > 0

pythagoreanTriple :: Int -> Int -> Int -> Bool
pythagoreanTriple a b c = a*a+b*b == c*c || a*a+c*c == b*b || c*c+b*b == a*a

isLeapYear :: Int -> Bool
isLeapYear a = mod a 4 == 0 && mod a 100 /= 0 || mod a 400 == 0