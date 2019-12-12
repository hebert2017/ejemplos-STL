#include <cstdlib>
#include <iostream>
#include <vector>
using namespace std;

const int MaxStr = 4;

int main()
{
    vector <char*> vec; // crea un vector vacío
    vec.insert(vec.end(), "Mazarambroz");
    vec.insert(vec.end(), "Ajofrin");
    vec.insert(vec.end(), "Sonseca");
    vec.insert(vec.end(), "Toledo");
    for (int i = 0; i < MaxStr; ++i) // recorre el vector y lo muestra
        cout << " " << vec[i] << endl;
    return 0;
}
