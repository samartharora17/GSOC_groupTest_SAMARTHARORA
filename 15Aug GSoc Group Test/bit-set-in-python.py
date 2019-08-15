# //  Created by Samarth Arora on 15/08/19.
# //  Copyright © 2019 Samarth Arora. All rights reserved.
def gen_a(inp):
    n=int(inp[0])
    p=int(inp[1])
    s=int(inp[2])
    q=int(inp[3])
    a=list()
    a.append(s)
    for i in range(1,n):
        a.append(int(a[i-1])*p+q)
    return a
    
   
inp=input().split()
a=list()
a=gen_a(inp)
count=len(set(a))
print(count)