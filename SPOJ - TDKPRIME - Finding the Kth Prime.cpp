#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair
#define MP ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define mod 1000000007
#define ll long long 
fstream ff;

bool status[88000001];

vector<int> vi;

void sieve()
{
	int n=88000000;
	int sq=sqrt(n);
	status[1]=1;
	for(int i=4;i<=n;i+=2) status[i]=1;
	for(int i=3;i*i<=n;i=i+2)
	{
		if(status[i]==0)
		{
			for(int j=i*i;j<=n;j+=i) status[j]=1;
		}
	}
	vi.pb(2);
	
  for(int i=3;i<=n;i=i+2) if(status[i]==0) vi.pb(i);
}

long long extra,x,y,sum=0,t,a,b,c,d,e,f,tcase=0,n,m,k,i,j,max_count=0,l,r;

string s;

int main()
{
	sieve();
	cin>>t;
	while(t--)
	{
		cin>>n;
		cout<<vi[n-1]<<endl;
	}
return 0;
}
