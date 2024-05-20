#include <iostream>
#include <map>

using namespace std;

int main() {
	map<string, int> names_and_birthdays{{"Renato", 23},{"Djalma",25}};

	while (true) {
		string name;
		cin >> name;
		if (name == "fim")
			break;
		else {
			int age;
			cin >> age;
			names_and_birthdays[name] = age;
		}
	}

	cout << "\nBy alphabetic order (Asc.):\n\n";
	for (pair<string, int> name_birthday : names_and_birthdays)
		cout << "\t* Name: " << name_birthday.first << ", Age: " << name_birthday.second << endl;
	cout << endl;

	return 0;
}
