D,m,y=input().split("/")
if len(D)==2 and len(m)==2 and len(y)==4:
  if int(D) in range (1,32) and int(m) in range(1,13) and int(y) in range(1,9999):
    print("yes")
  else:
    print("no")
else:
  print("no")
