#include <iostream>
#include <fstream>	// for working with files
using namespace std;

// Function template with multiple parameters
template <typename FIRST, typename SECOND>
FIRST smaller(FIRST a, SECOND b) {
    return (a<b?a:b);
}

template <typename T>
class Bucky{
    T first, second;
public:
    Bucky(T a, T b){
        first = a;
        second = b;
    }
    T bigger();
};

// Template class
template <typename T>
T Bucky<T>::bigger() {
    return (first>second?first:second);
}

// Template specialization
template<typename T>
class Spunky{
public:
    Spunky(T x){
        cout << x << " is not a character!" << endl;
    }
};

template<>
class Spunky<char>{
public:
    Spunky(char x){
        cout << x << " is indeed a character!" << endl;
    }
};

int main()
{
	// Working with files
	ofstream buckyFile;
    buckyFile.open("tuna.txt");
    buckyFile << "I love tuna and tuna loves me!\n";
    buckyFile.close();

	ofstream buckyFile2("beefjerky.txt");
	if(buckyFile2.is_open()) {
		cout << "ok the the file is open" << endl;
		buckyFile2 << "i love the beef!\n";
	} else {
		cout << "bucky you messed up" << endl;
	}
	buckyFile2.close();

/*	ofstream theFile("players.txt");
    cout << "Enters players ID, Name, and Money" << endl;
    cout << "press Ctrl+Z to quit\n" << endl;
    int idNumber;
    string name;
    double money;
    while(cin >> idNumber >> name >> money){
		theFile << idNumber << ' ' << name << ' ' << money << endl;
    }*/

    ifstream theFile2("players.txt");
	int idNumber2;
	string name2;
	double money2;
	while(theFile2 >> idNumber2 >> name2 >> money2){
		cout << idNumber2 << ", " << name2 << ", " << money2 <<endl;
	}

    // Exceptions
    try {
		int momsAge = 70;
		int sonsAge = 56;

		if(sonsAge > momsAge) {
			throw 99;
		}
    } catch(int x) {
		cout << "son can not be older than mom, ERROR NUMBER: " << x << endl;
    }

    try {
		int num1;
		cout << "Enter first number: " << endl;
		cin >> num1;

		int num2;
		cout << "Enter second number: " << endl;
		cin >> num2;

        if(num2 == 0) {
            throw 0;
        } else {
            cout << num1/num2 << endl;
        }

    } catch(...) {
        cout << "you can't divide by " << endl;
    }

	// Template specialization
    Spunky <int> obj1(54543);
    Spunky <double> obj2(4.6345);
    Spunky <char> obj3('s');

	// Template class
    Bucky <int> bo(5654,6874);
    int x = 354;
    int y = 4;
    cout << bo.bigger() << endl;

}
