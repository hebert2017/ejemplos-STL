// CPP program to illustrate
// Implementation of push() function
#include <iostream>
#include <queue>
using namespace std;

int main()
{
    // Empty Queue
    queue<int> myqueue;
    myqueue.push(0);
    myqueue.push(1);
    myqueue.push(2);
    myqueue.push(3);

    // Printing content of queue
    while (!myqueue.empty()) {
        cout << ' ' << myqueue.front()<<endl;

        cout<<"FRENTE"<<myqueue.front()<< endl;
        cout<<<<myqueue.back()<< endl;
        myqueue.pop();
    }
    return 0;
}
