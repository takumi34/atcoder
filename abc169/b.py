import sys
n = int(input()) 

a = list(map(int, input().split()))

ans = 1;
for i in range(n):
  if (a[i] == 0):
    print('0')
    sys.exit()
 
for i in range(n):
    
  ans *= a[i]
  if (ans > 1000000000000000000):
    print('-1')
    sys.exit()
  

print(ans)