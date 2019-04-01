n=int(input())
s=[]
for i in range(n):
    s.append(int(input()))
b=s
for i in sorted(s):
    for j in range(len(s)):
        if i==b[j]:
            print(j+1)
