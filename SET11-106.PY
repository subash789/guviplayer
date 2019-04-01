n=int(input())
s=[]
for i in range(n):
    s.append(int(input()))
s=list(dict.fromkeys(s))
for i in range(len(s)):
    print(s[i])
    
