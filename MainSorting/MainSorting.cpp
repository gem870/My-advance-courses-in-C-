
#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
#include <string>



template <typename DATA_TYPE>
void printSortedItems(const std::vector< DATA_TYPE >& vecItems) { // >>> A function that displays sorted Items from vector
    int counter = 1;
    std::vector< DATA_TYPE> sortedItems = vecItems;
    std::cout << std::endl << std::endl;
    std::cout << "*********** Returning Vector  ***********" << std::endl;
    std::cout << "*****************************************" << std::endl << std::endl;
    std::sort(sortedItems.begin(), sortedItems.end()); // ---> sorting line of code
    for (DATA_TYPE& Items : sortedItems) { // --> the 4 runner of the items in vector
        std::cout << "Item No: " << counter++ << " -> " << Items << std::endl;
    }
}

template<typename DATA_TYPE>
void printListItems(const std::list< DATA_TYPE> ListItem) {      // >>> A function that displays sorted items using list
    std::cout << std::endl << std::endl;
    std::cout << "*********** Returning List Items  ***********" << std::endl;
    std::cout << "********************************************" << std::endl << std::endl;
    int counter = 1;
    std::list< DATA_TYPE > myListItems = ListItem;
    myListItems.sort();   // ---> sorting line of code
    for (DATA_TYPE& items : myListItems) { // --> the 4 runner of the items in vector
        std::cout << "Item No: " << counter++ << " -> " << items << std::endl;
    }
}

template<typename DATA_TYPE>
void printDataTypeValues(const DATA_TYPE values[], size_t size) { // >>> A function that displays sorted items Data type items
    std::cout << "*********** Returning Data type  ***********" << std::endl;
    std::cout << "********************************************" << std::endl << std::endl;
    std::vector<DATA_TYPE> sortedValues(values, values + size); // -------->> Copy values to a vector
    std::sort(sortedValues.begin(), sortedValues.end()); // ---->> Sort the vector

    int counter = 1;
    for (const auto& value : sortedValues) {  // --> the 4 runner of the items in vector
        std::cout << "Data type Item " << counter++ << " -> " << value << std::endl;
    }
}






int main()
{
    std::vector<int> number = { 2,4,6,8,4,6,3,2 };
    printSortedItems(number);

    std::vector<std::string> names = { "Chibuike","Victor","MMesoma","Ndeukwu" };
    printSortedItems(names);

    std::list<int> listNumbers = { 2,4,6,8,4,6,3,2 };
    printListItems(listNumbers);

    std::list<std::string> listNames = { "Chibuike","Victor","MMesoma","Ndeukwu" };
    printListItems(listNames);
    
  
    int intValues[] = { 5, 2, 9, 1, 7 };
    printDataTypeValues(intValues, sizeof(intValues) / sizeof(intValues[0]));

    double doubleValues[] = { 3.5, 1.2, 7.8, 2.9, 6.4 };
    printDataTypeValues(doubleValues, sizeof(doubleValues) / sizeof(doubleValues[0]));
    
  
    

    
    
}


