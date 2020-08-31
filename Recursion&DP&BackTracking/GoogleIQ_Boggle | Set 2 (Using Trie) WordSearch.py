# Boogle
# Given a dict, a method to do lookup in the dict and MxN board, each cell has 1 char.
# Find all possible words that can be formed bt a seq. if adjacent chars.
# Can move to any of 8 adjacent chars
# Word should not have multiple instances of the same cell

#def boggle():



# Word Search - Array , Backtracking
'''
board =
                [
                    ['A','B','C','E'],
                    ['S','F','C','S'],
                    ['A','D','E','E']
                ]

Given word = "ABCCED", return true.
Given word = "SEE", return true.
Given word = "ABCB", return false.

in Boogle instead of a word we are given a dict of words 

Think:
        DFS
        Search for word[0]
         then search for 4 directions not 8 for word[1]
            then .. .. ..                       word[2]
                ...
                till end if true return true
            if not found in 4 directions then backtrack
                BACKTRACK: return false
'''
from typing import List

def wordSearchExist(board: List[List[str]], word: str) -> bool:
    if not board: return False
    for i in range(len(board)):
        for j in range(len(board[0])):
            if dfs(board, i, j, word): # Start Search @ every cell
                return True
    return False

def dfs(board, i, j ,word):
    if len(word) == 0: # All chars checked res will be True
        return True
    if i<0 or i>=len(board) or j<0 or j>=len(board[0]) or word[0] != board[i][j]:
        return False
    temp = board[i][j] # 1st Char found now remaining
    board[i][j] = '$' # Dont visit again

    # Check if can find "Word" along one direction
    res = dfs(board,i+1,j,word[1:]) or dfs(board,i-1,j,word[1:]) or dfs(board,i,j+1,word[1:]) \
        or dfs(board,i,j-1,word[1:])

    board[i][j] = temp # Set it back
    return res


if __name__ == "__main__":
    boards = [['A','B','C','E'],['S','F','C','S'],['A','D','E','E']]
    print(wordSearchExist(board=boards,word="SEE"))