#include<iostream>
#include<string>
using namespace std;

class Node
{
    friend ostream& operator<<(ostream& os, const Node& n)
    {
        return os << "Number : " << n.number;
    }



public:
    Node(const int& num):number(num), link(NULL)
    {}
    friend class NodeList;

private:
    int number;
    Node *link;
};
typedef Node* NodePtr;



class NodeList
{
public:
    NodeList():head(0), sizes(0){}

    void addToHead(const int& num)
    {
        NodePtr newNode = new Node(num);
        if(head == 0)
        {
            head == newNode;
        }

        else
        {
            newNode->link = head;
            head = newNode;
        }
    }

private:
    Node* head;
    int sizes;
};

int main()
{
    NodeList* header = new NodeList;
    NodeList::addToHead(5);

    return 0;
}
