#include<vector>
#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;
/*
    solution is to cast Void Absorptions until the dragon's hit point 
    won't decrease with more casts or you can't cast more Void Absorptions, 
    then cast all Lightning Strikes you have.
*/


int main(){
   int t; cin>>t;
   while (t--)
   {
       int x,n,m; // Dragon Health , Void Absorption , Lightning Strike
       cin>>x>>n>>m;

       //Algo to determine if can kill ie x = 0
    
     //if(m == 0 || x <= 0){cout<<"NO\n"; continue;} 
     //if(x <= m*10){cout<<"YES"; return 0;}

     while( x/2+10<x && x > 0 && n){
         n--;
         x = x/2+10;
     }
     if (x <= m*10){ cout<<"YES\n";}
     else cout<<"NO\n";
   }
    return 0;
}