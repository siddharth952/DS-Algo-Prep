
def findMaxLen (s:str):
    n = len(s)

    #Create stack and push -1 as initial index
    stk = []
    stk.append(-1)

    result = 0

    for i in range(n):
        if s[i] == '(':
            stk.append(i)
        
        else:

            #Pop previous opening breaket index
            if len(stk) != 0:
                stk.pop()

            # Check if len with base of current valid substr is > max so far
            if len(stk) != 0:
                result = max(result, i - stk[len(stk)-1] )

            # If stack is empty push current index as base for next valid substr
            else:
                stk.append(i)

    return result
            
#Driver
s = "((()()((((("

print(findMaxLen(s))

            