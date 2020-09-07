#include<iostream>
#include<vector>
using namespace std;


int maxProfit(vector<int>& prices) {
        // BuyIndex < SellIndex need to implement this
        int ans = 0;
        int index = 0;
        for(int buyValue : prices){

            // The largest value Bigger than or equal to a number buyValue.
            auto ret = upper_bound(prices.begin()+index, prices.end(), buyValue,[](int a, int b){return b>a;});
            int sellValue = *ret;

            cout<<"Buy:"<<buyValue<<endl;
            cout<<"Sell:"<<sellValue<<endl;
            
            ans = std::max(ans,(sellValue-buyValue));
            index++;
            //if (ans < 0) continue;
        }
        return ans;
    }

int main(){
    vector<int> a = {7,1,5,3,6,4};
    cout<<maxProfit(a);

    return 0;
}
