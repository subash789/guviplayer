s=input()
m=input()
if len(s)==len(m):
    print(s+m)
elif len(s)>len(m):
    sub=s[:len(m)]+m
    print(sub)
else:
    sub=s+m[:len(s)]
    print(sub)
    
    
