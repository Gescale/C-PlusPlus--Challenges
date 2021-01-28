#include<iostream>
#include <string>
using namespace std;

class Contact
{
    friend std::ostream& operator<<(std::ostream& os, const Contact& c)
    {
        return os << "Name: " << c.name;
    }

    friend class ContactList;

private:
    std::string name;
    Contact* next;

public:
    Contact(std::string n)
    :name(n), next(NULL)
    {}

    string getName()
    {
        return name;
    }

};

typedef Contact* ContactPtr;

class ContactList
{
    friend std::ostream& operator<<(std::ostream& os, const ContactList& c)
    {
        return os << c.head;
    }


public:
    ContactList():head(0), size(0)
    {}

    void addToHead(const string& name)
    {
        Contact* newOne = new Contact(name);
        if(head == 0)
        {
            head = newOne;
        }
        else
        {
            newOne->next = head;
            head = newOne;
        }
        size++;
    }

    ContactPtr findContact(ContactPtr head, string target)
    {
        ContactPtr here = head;
        if(here == NULL)
        {
            return NULL;
        }
        else
        {
            while(here->name != target)
            {
                here->next != NULL;
            }
        here = here->next;

        if(here->name == target)
            return here;
        else
            return NULL;
        }
    }

    void iterate()
    {
        for (ContactPtr iter = head; iter != NULL; iter = iter->next)
        {
            cout << *iter << endl;
        }
    }

    ContactPtr getHead()
    {
        return head;
    }

    getSize()
    {
        return size;
    }

private:
    ContactPtr head;
    int size;

};

int main()
{
    ContactList* header = new ContactList;
    header->addToHead("gesy");
    header->addToHead("garnet");
    header->addToHead("leon");
    header->addToHead("lynet");
    header->addToHead("lean");

    header->iterate();

    return 0;
}
