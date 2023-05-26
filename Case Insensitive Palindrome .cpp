#include<bits/stdc++.h>
using namespace std;

int main(){
   // write your code here
   int t;
   cin>>t;
   while(t--){
       string str;
       cin>>str;
        transform(str.begin(),str.end(),str.begin(),::tolower);
        string str1=str;
        reverse(str1.begin(),str1.end());
        if(str==str1){
            cout<<"Yes"<<"\n";
        }
        else{
            cout<<"No"<<"\n";
        }
   }
    return 0;
}