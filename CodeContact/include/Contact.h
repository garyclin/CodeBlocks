#ifndef CONTACT_H
#define CONTACT_H

#include <iostream>
#include <string>

class Contact
{
	friend std::ostream& operator<<(std::ostream&, const Contact&);
	public:
		Contact(std::string name = "none");
		virtual ~Contact();
	protected:
	private:
		std::string name;
		Contact* next;
};

#endif // CONTACT_H
