
# Build the tree 
# Find the max depth / or keep track of max depth

n = int(input())

# Allocate
parent = [-1] * n
lvl = [-1] * n

# Input for empy
for i in range(n):
	x = int(input())
	if x > 0:
		parent[i] = x - 1
	else:
		lvl[i] = 1

for i in range(n):
	flag = False
	for j in range(n):
		if lvl[j] != -1:
			continue
		if lvl[parent[j]] != -1:
			lvl[j] = lvl[parent[j]] + 1
			flag = True
	if not flag:
		break
print(max(lvl))