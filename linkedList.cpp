// linkedList.cpp
// implementation of LinkedList
// for documentation of additional function(s) see header file.

#include "linkedList.h"
#include <iostream> // cout
#include <algorithm> // std::max
#include <climits> // INT_MIN
using std::cout;

// start of additional functions

int LinkedList::largest_value(){
    if(head_ptr == nullptr)
        return -1;
    return largest_value(head_ptr);
}

int LinkedList::largest_value(Node* cursor){
    if(cursor == nullptr)
        return INT_MIN;
    return std::max(cursor->getData(), largest_value(cursor->getLink()));
}

void LinkedList::print_reverse(){
    if(head_ptr == nullptr)
        return;
    print_reverse(head_ptr);
    return;
}

void LinkedList::print_reverse(Node* cursor){
    if(cursor == nullptr)
        return;
    print_reverse(cursor->getLink());
    cout << cursor->getData() << " ";
    return;
}

// end of additional functions

bool LinkedList::insert(int entry)
{
    if (head_ptr == NULL)
    {
        head_ptr = new Node;
        head_ptr->setData(entry);
        head_ptr->setLink(NULL);
        return true;
    }

    Node* temp_ptr = new Node;
    temp_ptr->setData(entry);
    temp_ptr->setLink(head_ptr);
    head_ptr = temp_ptr;
    return true;
}

bool LinkedList::removeHead()
{
    if (head_ptr == NULL)
        return false;

    Node* temp_ptr;
    temp_ptr = head_ptr;
    head_ptr = head_ptr->getLink();
    return true;
}

void LinkedList::printList()
{
    if (head_ptr == NULL)
        return;

    Node* cursor;

    for (cursor = head_ptr; cursor != NULL; cursor = cursor->getLink())
        cout << cursor->getData() << endl;

    return;
}



