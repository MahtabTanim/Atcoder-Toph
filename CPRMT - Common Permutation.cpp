#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define pb push_back
#define mp make_pair
#define MP ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long int
#define maxn 1000000
#define FP ff.open("output.txt")
fstream ff;
ll a,b,c,d,k,h,e,f,t,m,n,i,j,x,y,count,tcase=0;
string s1,s2;

int main()
{
    vector<string> v;
    while(getline(cin,s1)){
        v.pb(s1);
    }
    for(int i = 0;i<v.size();i+=2)
    {
        s1=v[i],s2=v[i+1];
        map<char,int> A,B;
        for(auto& i:s1) A[i]++;
        for(auto& i:s2) B[i]++;
        string res="";
        for(int i =97;i<=122;i++){
            for(int j =0;j < min(A[i],B[i]);j++) res.pb(i);
        }
       cout<<res<<endl;
    }
    return 0;
}
