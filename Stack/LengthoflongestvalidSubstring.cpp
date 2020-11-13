#include<stack>
#include<iostream>
using namespace std;

int main() {
    int oMax = 0;
    string par = "()(()))))";

    stack<int> stk; // We are putting index

    for(int i =0 ; i< par.length() ; i++){

        if (!stk.empty() && par[stk.top()] == '('){
            stk.pop();
            oMax = max(oMax, i - stk.top());
        }
        stk.push(par[i]);
    }

    cout << oMax;

    return 0;
}