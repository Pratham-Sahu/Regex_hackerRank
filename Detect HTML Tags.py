import re
from sets import Set
import sys
n = int(input())
res = []
for i in range(n):
    s = raw_input()
    for z in re.findall('<\s*(\w+) ?[^>]*>',s):
        if(z not in res):
            res.append(z)
res.sort()    

for i in range(len(res)):
    if(i==0 or res[i] != res[i-1]):
        if(i!=0):
            sys.stdout.write(';')
        sys.stdout.write(res[i])
sys.stdout.flush()
        
