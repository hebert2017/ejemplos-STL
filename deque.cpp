#include <cstdlib>
#include <iostream>
#include <deque>
  using namespace std;
int main(int argc, char *argv[]) {
    deque<int> deq;
    deq.push_back(5);       //a�adir despu�s del final
    deq.push_back(10);
    deq.push_back(17);
    deq.push_front(3);      //insertar al principio
    for (int i = 0; i < deq.size(); i++)
        cout << "deq ["<< i<<"]="<< deq[i] << endl;

        cout << endl;

    deq.pop_front();        //borrar primer elemento
    deq[2] = 25;            //reemplazar �ltimo elemento
    for (int i = 0; i < deq.size(); i++)
        cout << "deq ["<< i <<"] =" << deq [i] << endl;
    return 0;
}

