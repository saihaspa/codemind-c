#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,c=0;
    string s;
    cin>>s>>n;
    for(long long int i=0;i<s.length();i++)
    {
        if(s[i]=='a')
        {
            c++;   
        }
    }
    long long int k=n%(s.length());
    long long int t=n/(s.length());
    long long int m=t*c;
    for(long long int i=0;i<k;i++){
        if(s[i]=='a'){
            m++;
        }
    }
    printf("%lld",m);
}