n=int(input())
l=int(input())
r=int(input())
s=[]
for i in range(n):
    s.append(int(input()))
print(min(s[l-1:r]))            
