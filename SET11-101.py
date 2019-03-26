n=int(input())
ss=[]
for i in range(0,n):
    ss.append(int(input()))
d=min(ss)
ss.remove(d)
sum=0
for x in range(0,n-1):
    sum=sum+ss[x]    
print(sum)
