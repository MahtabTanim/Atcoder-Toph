#include <bits/stdc++.h>

using namespace std;
#define pb push_back
#define MP ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

long long  num[100001];

long long extra,x,sum=0,t,a,b,c,d,e,f,tcase=0,n,m,k,i,j,max_count=0;

int main()
{
    while(cin>>n)
    {
        int A[n];
        for(int i=0;i<n;i++) cin>>A[i];
        max_count=0;
        for(int i=1;i<n;i++)
        {
            k=A[i];
            j=i-1;
            while(j>=0 && A[j]>k)
            {
                swap(A[j],A[j+1]);
                max_count++;
                j--;
            }
        }
        sum=0;
        for(int i=0;i<n;i++)
        {
            if(sum) cout<<" ";
            cout<<A[i];
            sum++;
        }
        break;
    }
    return 0;
}
