// node.cpp

#include "node.h"

Node::Node()
{
    link = NULL;
}

Node::~Node()
{
    delete link;
}

void Node::setData(int entry)
{
    data = entry;
}

void Node::setLink(Node* ptr)
{
    link = ptr;
}

int Node::getData()
{
    return data;
}

Node* Node::getLink()
{
    return link;
}