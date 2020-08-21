 ''' 19/08/20 - 10:30 Am ~~~~~ 11:01 Am
    3 multisets of pairs of colored sticks:
            - R pairs RED sticks, 1st pair has length r1 sec. r2 ... Rth has rR
            - G pairs GREEN sticks, 1st pair has g1, sec g2 ... Gth has gG
            - B pairs BLUE sticks, 1st pair has b2, sec b2 ... Bth has bB
     Construct by process:
         1) Take pair of sticks of 1 color -                        2) Take pair of stick of a color diff than the first one         3) Add area of resulting to TOTAL AREA
                ____                                                    
                                                                       /   /
                                                                       /   /
                ----                                                   /   /                                                                
    We get rectangles which has opp sides same color but adjacent sides of not the same color
'''
 
n = [int(x) for x in input().split()]
a = []
for i in range(3):
	a.append([int(x) for x in input().split])
	a[i].sort(reverse = True)

dp = [[[0 for i in range(n[2] + 1)] for j in range(n[1]+1)] for k in range(n[0]+1)]
ans = 0