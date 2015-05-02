#include <iostream>
#include <string>		// gives me the string function
using namespace std;

int main()
{
/*	string bucky;
	cin >> bucky;
	cout << "the string i entered is: " << bucky << endl;

	string x;
	getline(cin, x);
	cout << x << endl;*/

/*	string s1("hampster ");
	string s2;
	string s3;

	s2 = s1;
    s3.assign(s1);

    cout << s1 << s2 << s3 << endl;*/

 /*   string s4 = "omgwtfbbq";
    cout << s4.at(3) << endl;

    for (int x = 0; x <s4.length(); x++) {
		cout << s4.at(x);
    }*/

    string s5("OMG i think i am preggy!!");
    cout << s5.substr(17, 7) << endl;

    string one("apples");
    string two("benas");

    cout << one << ' ' << two << endl;
    two.swap(one);
    cout << one << ' ' << two << endl;

    string s6("ham is spam oh yes i am!");
    cout << s6.find("am") << endl;
    cout << s6.rfind("am") << endl;

    string s7("hi my name is bucky and i love bacon and ham!");
    cout << s7 << endl;
    s7.erase(20);
    cout << s7 << endl;

    string s8("hi my name is bucky and i love bacon and ham!");
    cout << s8 << endl;
    s8.replace(14, 5, "Gary");
    cout << s8 << endl;

    string s9("hi my name is bucky and i love bacon and ham!");
    cout << s9 << endl;
    s9.insert(14, "lucky ");
    cout << s9 << endl;
}
