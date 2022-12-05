#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    for(int i=0;i<s.length();i++){
        if(char(s[i])==46){
            cout<<"[.]"<<"";
        }
        else{
            cout<<s[i];
        }
    }
}