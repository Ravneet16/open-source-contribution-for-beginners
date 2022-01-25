#program that prints first n prime numbers but its value should be less than 9999
count=0    
num=int(input("enter the n prime number to be checked?"))
for i in range(2,10000):
    x=0
    for j in range(2,int(i/2)+1):
        if i%j==0:
            x=1
            break
    if x==0:
            count=count+1
            if count<=num:
                print(i,end=' ')
print("Program ends!!")
            
     
            
