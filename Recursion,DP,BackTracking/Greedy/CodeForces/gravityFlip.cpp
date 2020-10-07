#include<vector>
#include<iostream>
#include<algorithm>

using namespace std;
int main(){
   int n;cin>>n;
   vector<int> box(n);
   for (int i = 0; i < n; i++)
   {
       cin>>box[i];
   }

   sort(box.begin(),box.end());
   for(auto a: box)
    cout << a << " ";


    return 0;
}