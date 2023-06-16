// testLL.cpp
// tests Node and LinkedList classes

#include "linkedList.h"
#include <iostream>
using namespace std;

int main(){
    // comment out all of testing of Node
    LinkedList list1;

    list1.insert(5);
    list1.insert(8);
    list1.insert(2);
    list1.insert(6);
    list1.insert(1);
    list1.insert(7);

    cout << "List contains in order: " << endl;
    list1.printList();


    cout << "\nList contains in reverse: ";
    list1.print_reverse();
    cout << endl;

    cout << "Largest value: " << list1.largest_value();
    cout << endl;
    
    return 0;
}
