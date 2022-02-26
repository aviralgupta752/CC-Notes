t=int(input())
for i in range(t):
    x,m=map(int,input().split())
    po=0
    tmp=x
    while(True):
        x/=2
        po+=1
        if(x==0):
            break

    print(po)

    if(pow(2, po-1)==tmp):
        print(m-po+1)
    else:
        print(m-po)
