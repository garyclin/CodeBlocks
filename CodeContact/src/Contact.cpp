#include "Contact.h"

using namespace std;

Contact::Contact(string n)
:name(n), next(NULL)
{
	//ctor
}

ostream& operator<<(ostream& os, const Contact& c)
{
	return os << "Name: " << c.name;
}

Contact::~Contact()
{
	//dtor
}
