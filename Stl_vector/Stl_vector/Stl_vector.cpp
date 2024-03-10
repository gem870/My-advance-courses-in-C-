

#include <iostream>
#include <vector>

using namespace std;




int main()
{
    vector <int> numbers;
    for (int i = 1; i < 10; i++) {
        numbers.push_back(i);
    }

    for (auto it = numbers.begin(); it != numbers.end(); it++) {
        cout << *it << endl;
        cout << &it << endl;
        cout << &(*it) << endl;
    }
    
    system("pause > 0");
}


