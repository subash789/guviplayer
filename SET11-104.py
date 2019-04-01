n=int(input())
a=[]
s=0
for i in range(n):
    a.append(int(input()))
for i in range(0,n-1):
    s=s+a[i]+a[i+1]
print(s)    
   
