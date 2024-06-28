

#include <iostream>
#include <string>
using namespace std;

class Node {

public:
    string name;
    int value;
    Node* Next;
};

void printListValues(Node* item) {
    int counter = 1;
    cout << "   The values the node   << --------------" << endl;
    while (item != NULL)
    {
        cout << "The values [" << counter++ << "]: " << item->value << item->name << endl;
        item = item->Next;
    }
}

int main()
{
    // Mkaing an Instance of a new Node

    Node* First = new Node();
    Node* Second = new Node();
    Node* Third = new Node();

    // connecting items in the nodes

    First->Next = Second;
    Second->Next = Third;
    Third->Next = NULL;

    //Setting the values

    First->value = 20;
    Second->name = "Emmanuel Chibuike";
    Third->value = 40;

    printListValues(First);


}


