#include "ContactList.h"

using namespace std;

ContactList::ContactList()
:head(0), size(0)
{
    //ctor
}

ContactList::~ContactList()
{
    //dtor
}

void ContactList::addToHead(const std::string& name)
{
    Contact* newNode = new Contact(name);

    if(head == 0)
    {
        head = newNode;
    }
    else
    {
        newNode->next = head;
        head = newNode;
    }

    size++;

}

void ContactList::printList()
{
    Contact* tp = head;

    while(tp != 0)
    {
        cout << *tp << endl;
        tp = tp->next;
    }
}

void ContactList::insertNode(const std::string& name)
{
    Contact* newNode = new Contact(name);

    // case 1: empty list
    if(head == 0)
    {
        head = newNode;
    }
    else
    {
        Contact* curr = head;
        Contact* trail = 0;

        while(curr != 0)
        {
            if(newNode->name > curr->name)
            {
                trail = curr;
                curr = curr->next;
            }
            else
            {
                break;
            }
        }

        if(trail == 0)
        {
            // case 2: insert at head (not empty)
            newNode->next = head;
            head = newNode;
        }
        else
        {
            // case 3: insert after the head (not empty)
            trail->next = newNode;
            newNode->next = curr;
        }

    }
    size++;
}

void ContactList::deleteNode(const std::string& name)
{
    // case 1 - empty list
    if(head == 0)
    {
        cout << "Node cannot be deleted from an empty list." << endl;
    }
    else
    {
        Contact* curr = head;
        Contact* trail = 0;

        // Traverse list to find node to delete
        while(curr != 0)
        {
            if(curr->name == name)
            {
                break;
            }
            else
            {
                trail = curr;
                curr = curr->next;
            }
        }

        // case 2 - Node with "name" not found in list
        if(curr == 0)
        {
            cout << "Contact with name: " << name << "not found." <<endl;
        }
        else
        {
            if(head == curr)
            {
                // case 3 - delete from the head node
                head = head->next;
            }
            else
            {
                // case 4 - delete beyond the head node
                trail->next = curr->next;
            }
            delete curr;
            size --;
        }
    }

//    size--;

}


