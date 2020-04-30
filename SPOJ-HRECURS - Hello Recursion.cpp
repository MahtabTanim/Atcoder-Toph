// Written By Mahtab Tanim
#include<bits/stdc++.h>
using namespace std;
#define MP ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define nl "\n"
#define End return 0
#define ll long long int
#define mp make_pair
#define pb push_back
#define ull unsigned long long int
#define pi acos(-1)
#define forn(i,a,b) for (int i=a;i<=b;i++)
long long  sum(vector<long long > x,long long  n)
{
    if(n==0) return x[0];
    return x[n]+sum(x,n-1);
}
int main()
{
    int t,c=0;
    cin>>t;
    while(t--)
    {
        vector<long long> x;
        long long n,j;
        cin>>n;
        for(int i=0;i<n;i++) {
                cin>>j;
                x.pb(j);
            }
        long long  res=sum(x,n-1);
        cout<<"Case "<<++c<<": "<<res<<endl;
    }

End;
}
