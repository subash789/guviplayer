n=int(input())
a=[]
s=[]
for i in range(n):
    a.append(int(input()))
for i in range(n+1):
    for j in range( i+1,n+1):
        s.append(a[i:j])
print(len(s))        
    
