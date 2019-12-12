#include <iostream>
#include <iterator>
#include <map>

using namespace std;

int main()
{
     map<int, int> marks;
     marks.insert(pair<int, int>(160, 42));
     marks.insert(pair<int, int>(161, 30));
     marks.insert(pair<int, int>(162, 40));
     marks.insert(pair<int, int>(163, 50));
     marks.insert(pair<int, int>(164, 31));
     marks.insert(pair<int, int>(165, 12));
     marks.insert(pair<int, int>(166, 34));

     map<int, int>::iterator itr;
     cout << "The map marks is : n"<<endl;
     cout << "ROLL NO.\tMarks\n";
     for (itr =  marks.begin(); itr !=  marks.end(); ++itr) {
        cout  << itr->first
             << "\t   \t" << itr->second <<endl;
     }
     cout << endl;
     return 0;
  }
