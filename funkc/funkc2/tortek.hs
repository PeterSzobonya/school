add :: (Int, Int) -> (Int, Int) -> (Int, Int)
add (a, b) (c, d) = (a*d+b*c, b*d)

nul :: (Int, Int) -> (Int, Int) -> (Int, Int)
nul (a, b) (c, d) = (a*c, b*d)

