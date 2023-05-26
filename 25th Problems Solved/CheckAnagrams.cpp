#include<bits/stdc++.h>
using namespace std;

int main(){
   // write your code here
   int t;
   cin>>t;
   while(t--){
       string str,str1;
       cin>>str>>str1;
       int len1=str.length();
       int len2=str1.length();
       if(len1!=len2){
           cout<<"False"<<"\n";
           break;
        }
        sort(str.begin(),str.end());
        sort(str1.begin(),str1.end());
        bool isAnagaram=true;
        for(int i=0;i<len1;i++){
            if(str[i]!=str1[i]){
                isAnagaram=false;
                break;
            }
        }
        if(isAnagaram){
            cout<<"True"<<"\n";
        }
        else{
            cout<<"False"<<"\n";
        }
        
   }
    return 0;
}