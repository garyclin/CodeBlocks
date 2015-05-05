#ifndef CONTACTLIST_H
#define CONTACTLIST_H

#include "Contact.h"

class ContactList
{
    public:
        ContactList();
        virtual ~ContactList();

        void addToHead(const std::string&);
        void printList();
        void insertNode(const std::string&);
        void deleteNode(const std::string&);
        void reversePrintList(Contact*);

    protected:
    private:
        Contact* head;
        int size;
};

#endif // CONTACTLIST_H
