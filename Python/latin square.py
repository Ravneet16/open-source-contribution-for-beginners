#latin square
num=int(input("Enter the number of rows:="))
for i in range(1,num+1):
    r=i                         #set the first roew element 
    for j in range(1,num+1):
        print(r,end='\t')
        if r==num:
            r=1
        else:
            r=r+1
    print()
    
    
        