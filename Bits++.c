#include <iostream>
using namespace std;
int main(){
    int n;
    while(cin>>n){
        int x=0;
        for(int i=0;i<n;i++){
            cin>>s;
            if(s[1]=='+') x++;     //Experience why s [1]
            else x--;
        }
        cout<<x<<endl;
    }
    return 0;
 }