alma :: a -> String
alma _ = "alma"

alma1 :: [Char] -> Bool
alma1 a = and [elem c ['a'..'z'] | c <- a]

-- zip [1..5] [1..3] -> [(1,1),(2,2),(3,3)]

alma2 = [fst x ^ snd x | x <- zip [1..5] [1..3]]
alma3 = [b ^ a | (a,b) <- zip [1..5] [1..3]]
