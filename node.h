// node.h

#ifndef NODE_H
#define NODE_H

#include <cstdlib>

class Node
{
public:
    Node();
    ~Node();
    void setData(int);
    void setLink(Node*);
    int getData();
    Node* getLink();
private:
    int data;
    Node* link;
};


#endif