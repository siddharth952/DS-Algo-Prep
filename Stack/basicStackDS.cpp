#include<iostream>
#include<vector>

//STL
#include<stack>

using namespace std;

// Can be implemted using Array (Has a limit) , Vector , LL , Dynamic Array


// All operations are O(1)

// Template Stack
// Defined with stack obj 
template<typename T>
class Stack {
    private:
        vector<T> v;

    public:

        void push(T data) {
            v.push_back(data);
        }

        bool empty(){
            return v.size() == 0;
        }

        void pop() {
            if (!empty())
                v.pop_back();
        }

        T top() {
            return v[v.size()-1];
        }
};



int main() {

    Stack<int> s;

    for (int i = 0; i < 5; i++)
    {
        s.push('a' + i);
    }
    
    while (!s.empty())
    {
        cout<<char(s.top())<<endl;
        s.pop();
    }
    
    return 0;
}