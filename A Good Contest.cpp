#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,i,a,b,flag=0;
    string s;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>s>>a>>b;
        if(a>=2400 && b>a)
            flag=1;
        else;
    }
    if(flag==1)
        cout<<"YES";
    else
        cout<<"NO";
}
