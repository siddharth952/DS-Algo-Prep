'''
Given : int num of words 
        words eg: i like pep coding pepper eating mango man in pepcoding
        in a string eg: ilikepeppereatingmangoinpepcoding
Find:   
    How many sentences can we break the given string
'''



def wordBreak(sentence:str, ans:str, dic:dict):

    if len(sentence) == 0:
        print(ans)
        return

    #Try for each chars with previous present if present in dict
    for i in range(len(sentence)):
        leftPart = sentence[0:i+1]
        if(leftPart in dic):
            rightPart = sentence[i+1:]
            self.wordBreak(rightPart,ans+leftPart+" ",dic)

if __name__ == "__main__":
    n = int(input())
    arr = input().split()
    dic = dict()
    for idx,a in enumerate(arr):
        dic[idx] = a
   
    print(dic)
    sentence = str(input())
    s = ""
    wordBreak(sentence,s,dic)