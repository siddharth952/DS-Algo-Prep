# Chessboard size 
n = 8

def isSafe(x,y,board):
    # Utility, check i j valid indexes for NxN board
    if(x >= 0 and y >=0 and x< n and y<n and board[x][y] == -1):
        return True
    return False

def printSol(n:int,board):
    # Utility to gen board matrix 
    for i in range(n):
        for j in range(n):
            print(board[i][j] , end= ' ')
        print() # Print ntg

def solvekt(n):
    # Print one of the solutions
    #Init
    board = [[-1 for i in range(n)] for i in range(n)]

    # moveX moveY define next move for respective coords
    moveX = [2,1,-1,-2,-2,-1,1,2]
    moveY = [1,2,2,1,-1,-2,-2,-1]

    #Initial at first block
    board[0][0] = 0
    # Counter for knight position
    posKnight = 1

    # Check sol exists or not
    if(not solvektUtil(n,board,0,0,moveX,moveY,posKnight)):
        print("Sol does not exist")
    else:
        printSol(n,board)


def solvektUtil(n,board,currX,currY,moveX,moveY,posKnight):
    # Recursive
    if (posKnight == n**2):
        return True

    # Try all next moves form currebt coords x,y

    for i in range(8):
        newX = currX + moveX[i]
        newY = currY + moveY[i]
        if(isSafe(newX,newY,board)):
            board[newX][newY] = posKnight
            if(solvektUtil(n,board,newX,newY,moveX,moveY,posKnight+1)):
                return True
            
            #Backtrack as it was false
            board[newX][newY] = -1
    
    return False # End

if __name__ == "__main__":
    solvekt(n)


        




