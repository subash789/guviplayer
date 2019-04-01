n=int(input())
ss=[]
s=[]
for i in range(n):
    s.append(int(input()))
sum=0
for i in range (0,n-1):
    sum=sum+s[i]
    ss.append(sum)
ss.reverse()
for i in range(0,n-1):
    print(ss[i])

    
    
    
    
