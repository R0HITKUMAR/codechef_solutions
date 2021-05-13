"""**************************************************************************
Author : Rohit Kumar | r.k2962002@gmail.com | https://rohitkumar.ml
Domain : Python Language | May Long Challenge 2021 (CodeChef)
Programs : Golf (LKDNGOLF)
URL : https://www.codechef.com/MAY21C/problems/LKDNGOLF/

**************************************************************************"""
for t in range(int(input())):
    n, x, k = map(int, input().split())
    if x%k == 0:
        print("YES")
    elif (n+1-x)%k == 0:
        print("YES")
    else:
        print("NO")

"""**************************************************************************"""

