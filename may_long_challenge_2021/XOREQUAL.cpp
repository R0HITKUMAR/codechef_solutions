/**************************************************************************
Author : Rohit Kumar | r.k2962002@gmail.com | https://rohitkumar.ml
Domain : C++ Language | May Long Challenge 2021 (CodeChef)
Programs : Xor Equality (XOREQUAL)
URL : https://www.codechef.com/MAY21C/problems/XOREQUAL

**************************************************************************/

#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;

#define ff              first
#define ss              second
#define int             long long
#define pb              push_back
#define mp              make_pair
#define pii             pair<int, int>
#define vi              vector<int>
#define mii             map<int, int>
#define pqb             priority_queue<int>
#define pqs             priority_queue<int, vi, greater<int>>
#define setbits(x)      __builtin_popcountll(x)
#define zrobits(x)      __builtin_ctzll(x)
#define mod             1000000007
#define inf             1e18
#define ps(x,y)         fixed << setprecision(y) << x
#define mk(arr,n,type)  type *arr = new type[n];
#define w(t)            int t; cin >> t; while(t--)
#define pw(b,p)         pow(b,p) + 0.1
mt19937                 rng(chrono::steady_clock::now().time_since_epoch().count());

typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;

void cpc()
{
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

int p(int y, int p)
{
    int res = 1;
    int x = 2;
    while(y > 0)
    {
        if(y&1)
            res = (res * x)%p;

        y = y >> 1;
        x = (x*x) % p;
    }
    return res;
}

int32_t main()
{
	cpc();

    //Logic
    w(t)
    {
        int n;
        cin >> n;
        cout << p(n-1, mod) << "\n";
    }

	return 0;
}
/**************************************************************************/

