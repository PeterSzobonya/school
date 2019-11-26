isPrime :: Int -> Bool
isPrime a = and [not(a `mod` x == 0) | x <-[2..a-1]]

primes = [ x | x <- [2..], isPrime x ]

allPositive :: [Int] -> Bool
allPositive a = and [ c >= 0 | c <-a]

domino = [(x,y) | x <- [0..6], y <- [0..x]]

termeszetes = [ (x-(x-y),x-y)| x <- [0..], y <- [0..x]]

alphabet = zip [0..]['a'..'z']

--everyThird :: [(Int,Char)] ->[Char]
everyThird = [snd x|x <- alphabet,((fst x)+1) `mod` 3 == 0]

courses =
    [ ("Programozasi nyelvek II.", [("Horvath", "Istvan", "BDE91E"), ("Fodros", "Aniko", "DDA3KX")])
    , ("Imperativ programozas",    [("Nemeth", "Eniko", "ALX1K0"), ("Horvath", "Istvan", "BDE91E")])
    , ("Funkcionalis programozas", [("Kiss", "Elemer", "ABCDE6"), ("Nagy", "Jakab", "CDE560")])
    ]

    --[(Targy,[(Nev,Nev,KOD),(Nev,Nev,KOD)]),   (Targy,[(Szemely),(Szemely)]),  ]

funkcProg a = [ |]