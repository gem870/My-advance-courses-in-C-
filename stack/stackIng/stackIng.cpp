

#include <iostream>
#include <stack>

using namespace std;

void display(stack <string> itemPass) {
    int number = 1;
    while (!itemPass.empty()) {
        cout << "content " << number++ << " " << itemPass.top() << endl;
        itemPass.pop();
    }
}

int main()
{
    stack <string> stackObject;
    if (stackObject.empty()) {
        stackObject.push("Vicotr");
        stackObject.push("Mmesoma");
        stackObject.push("Chibuike");
        stackObject.push("Ndeukwu");
        stackObject.push("Emmanuel");
    }
    else cout << "stack object is empty." << endl;

    display(stackObject);
    display(stackObject);
    

    system("pause>0");
}


