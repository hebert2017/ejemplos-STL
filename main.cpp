#include <iostream>
#include <stack>
using namespace std;

int main()
{
    // Empty stack
    stack<int> mystack;
    mystack.push(0);
    mystack.push(1);
    mystack.push(2);
    mystack.push(3);

    // Printing content of stack
    while (!mystack.empty()) {
        cout << ' ' << mystack.top()<<endl;
        cout<<mystack.top()<< endl;
        cout<<mystack.size()<< endl;
        mystack.pop();
    }
}

