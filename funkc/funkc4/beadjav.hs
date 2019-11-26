
shift :: (Int, Int) -> Int -> (Int, Int)
shift (ora, perc) eltol = (mod (div (ora*60+perc+eltol) 60) 24, mod (ora*60+perc+eltol) 60)

isEarlier :: (Int, Int) -> (Int, Int) -> Bool
isEarlier (a, b) (c, d) = (a*60+b) <(c*60+d)

createEvent :: (Int, Int) -> Int -> String -> ((Int, Int), (Int, Int), String)
createEvent (a,b) c d = ((a,b), (mod(div (a*60+b+c) 60) 24, mod (a*60+b+c) 60), d)