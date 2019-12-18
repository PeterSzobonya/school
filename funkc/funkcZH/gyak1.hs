

type Path = String

mirror :: Path -> Path
mirror "" = ""
mirror path = map (swap) (reverse path)
    where
        swap 'u' = 'd'
        swap 'd' = 'u'
        swap 'l' = 'r'
        swap 'r' = 'l'

isClosed :: Path -> Bool
isClosed path = (length(filter (=='u') path) == length(filter (=='d') path)) && (length(filter (=='l') path) == length(filter (=='r') path))

points :: Path -> (Int, Int) -> [(Int, Int)]
points (x:xs) (a,b) = (a,b) : (points' (x:xs) (a,b))

points' :: Path -> (Int, Int) -> [(Int, Int)]
points' "" (a,b) = []
points' (x:xs) (a,b)
    | x == 'u' = (a,b+1) : points' xs (a,b+1)
    | x == 'd' = (a,b-1) : points' xs (a,b-1)
    | x == 'l' = (a-1,b) : points' xs (a-1,b)
    | x == 'r' = (a+1,b) : points' xs (a+1,b)