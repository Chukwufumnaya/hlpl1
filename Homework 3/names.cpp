#include "std_lib_facilities.h"

int main()
{
	vector < pair < string, int > > name_age;
	for (int i=0; i<5; i++)
	{
		string name;
		int age;
		cin >> name >> age;
		name_age.push_back({name , age});
		cout << " Name: " << name << " Age: " << age << "\n";

	}
	sort (name_age.begin(), name_age.end());

	for (auto it : name_age) {
		cout << it.first << " " << it.second << endl;
	}
	

	return 0;
}