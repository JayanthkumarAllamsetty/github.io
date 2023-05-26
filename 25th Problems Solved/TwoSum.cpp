#include<bits/stdc++.h>
using namespace std;

 int main(){
   // write your code here
   long long int t;
   cin>>t;
   while(t--){
       long long int n,k;
       cin>>n>>k;
       vector<long long int>v(n);
       for(long long int i=0;i<n;i++){
           cin>>v[i];
       }
       vector<long long int>res=v;
       vector<long long int>sol;
       sort(res.begin(),res.end());
       long long p1=0,p2=n-1;
       while(p1<p2){
           if(res[p1]+res[p2]==k){
               for(long long int i=0;i<n;i++){
                   if(v[i]==res[p1]||v[i]==res[p2]){
                       sol.push_back(i);
                   }
               }
               break;
           }
           else if(res[p1]+res[p2]>k){
               p2--;
           }  
           else{
               p1++;
           }
           
       }
       for(long long int i=0;i<2;i++){
           cout<<sol[i]<<" ";
       }
       cout<<"\n";
   }
    return 0;
}