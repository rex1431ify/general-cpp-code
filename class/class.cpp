#include <iostream>
using namespace std;

class Person {
private:
	string person;
	int age;

public:
	void PersonInfo(string name, int number) {
		string person = name;
		int age = number;
	}
};

int main()
{
	string person;
	int age = 0;

	Person obj;
	obj.PersonInfo(person, age);

	cout << "what's your name ? " << endl;
	cin >> person;
	cout << "what's your age ? " << endl;
	cin >> age;
	cout << "hello " << person << " you're " << age << " years old" << endl;
}