#include <iostream>
#include "ContactList.h"

using namespace std;

int main()
{
    ContactList* cl1 = new ContactList;

    string name;


    while(true)
    {
        cout << "Please enter a name or q to quit" << endl;
        cin >> name;

        if(name == "q")
        {
            break;
        }
        else
        {
            cl1->insertNode(name);
            cl1->printList();
        }
    }


    while(true)
    {
        cout << "Please enter a name to delete or q to quit" << endl;
        cin >> name;

        if(name == "q")
        {
            break;
        }
        else
        {
            cl1->deleteNode(name);
            cl1->printList();
        }
    }


    return 0;
}
