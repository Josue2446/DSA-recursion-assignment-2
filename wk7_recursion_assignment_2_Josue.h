/* 
FILE: wk7_recursion_assignment_2_Josue.h

Summary: Additional functions to go along with LinkedList.

Test Cases: N/A

Author: Josue 

Date: 05/29/2023

Summary of modifications: N/A

Compiler: Ubuntu (g++)

ADDITIONAL FUNCTION(S):

    void print_reverse():
        precondition: LinkedList object exist
        postcondition: Makes a call to the same function with
                    parameter(s) or if list is empty, returns and
                    list remains unchanged.
    
    void print_reverse(Node* cursor):
        precondition: LinkedList object exist and is not empty.
        postcondition: prints to contest of the LinkedList object in the
                       reverse order.

    int largest_value():
        precondition: LinkedList object exist:
        postcondition: Makes a call to the same function with paramter(s)
                       or if list is empty, return -1.

    int largest_value(Node* cursor):
        precondition: LinkedList object exist and is not empty.
        postcondition: Largest value is LinkedList object is returned.

*/

#ifndef LINKEDLIST_H
#define LINKEDLIST_H
 
#include "node.h"
#include <iostream>
using namespace std;


class LinkedList
{
public:
    LinkedList() { head_ptr = NULL; }
    ~LinkedList() { delete head_ptr; }
    bool insert (int);
    bool removeHead();
    void printList();
    
    void print_reverse();
    int largest_value();
private:
    int largest_value(Node* cursor);
    void print_reverse(Node* cursor);
    Node* head_ptr;
};
#endif
