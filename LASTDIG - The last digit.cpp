#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair
#define MP ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define mod 10
#define ll long long 
fstream ff;

ll P(ll a,ll b)
{
	if(a==0) return 0;
	if(b==0) return 1;
	if(b==1) return a;
	if(b%2==0)
	{
		ll kk= P(a,b/2);
		return (kk%mod * kk%mod)%mod;
	}
	return (a%mod*P(a,b-1)%mod)%mod;
}
ll a,b,c,count,t,p,q,m,n,j,i,k;
int main()
{
	ff.open("output.txt");
	long long n,t;
	cin>>t;
	while(t--)
	{
		cin>>a>>b;
		cout<<(P(a,b))%10<<endl;
	}
return 0;
}
