n=int(input())
m=int(input())
a=[]
b=[]
c=[]
for i in range(n):
    a.append(int(input()))
for i in range(m):
    b.append(int(input()))
c=list(set(a)&set(b))
sorted(c)
for i in range(0,len(c)):
    print(c[i])    
