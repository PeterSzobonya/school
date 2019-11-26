modDiv :: Int -> Int -> (Int,Int)
modDiv a b = (mod a b,div a b)

quadratic :: Double -> Double -> Double -> (Double,Double)
quadratic a b c = ((-b+sqrt(b^2-4*a*c)) / 2*a,(-b-sqrt(b^2-4*a*c)) / 2*a)

matches :: (Int, Int) -> (Int, Int) -> Bool
matches (a,b) (c,d) = or [a == c, a == d, b == c, b == d]

len :: (Int, Int) -> Double
len (a,b) = sqrt(fromIntegral(a^2+b^2)::Double)

stretch :: (Int, Int) -> Int -> (Int, Int)
stretch (a,b) c = (a*c, b*c)

distance :: (Int, Int) -> (Int, Int) -> Double
distance (a,b) (c,d) = sqrt(fromIntegral((a-c)^2+(b-d)^2)::Double)

