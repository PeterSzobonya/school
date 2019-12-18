data Dir = West | North | East | South deriving(Show,Eq)

type Position = (Int,Int)

type Snake = (Dir,[Position], Int)


data Instruction = Move | Turn Dir

isOppositeDir :: Dir -> Dir -> Bool
isOppositeDir North South = True
isOppositeDir South North = True
isOppositeDir West East = True
isOppositeDir East West = True
isOppositeDir _ _ = False

nextPos :: Dir -> Position -> Position
nextPos a (x,y)
    | a == North = (x,y+1)
    | a == South = (x,y-1)
    | a == West  = (x-1,y)
    | a == East  = (x+1,y)

doInstruction :: Instruction -> Snake -> Snake
doInstruction (Turn to) (dir, snake,length)
    | not (isOppositeDir to dir) = (to,snake,length)
    | otherwise = (dir,snake,length)
doInstruction Move (dir, snake, length) = (dir, nextSnake,length)
    where
        nextSnake = nextPos dir (head snake) : [ snake!!x | x<-[0..(length-2)]]