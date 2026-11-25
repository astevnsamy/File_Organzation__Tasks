#include <fstream>
#include <iostream>
#include <string>
#include<cmath>
#include <stdlib.h>
#include<vector>
using namespace std;

struct employee
{
	string name;
	int age;
};

int main()
{
	int n;
	cout << "enter the number of people" << endl;   
	cin >> n;
	cin.ignore(1000, '\n');                          
	vector<employee> people(n);

	for (int i = 0;i < n;i++)
	{
		cout << "employee " << i + 1 << ":" << endl;
		cout << "name " << i + 1 << ": " << endl;
		getline(cin, people[i].name);                 
		cout << "age " << i + 1 << ": " << endl;
		cin >> people[i].age;
		cin.ignore(1000, '\n');                      
	}
	ofstream myfile;
	myfile.open("task4.txt");

	for (int i = 0;i < n;i++)
	{
		myfile << people[i].name << endl;
		myfile << people[i].age << endl;
	}
	myfile.close();

	ifstream file("task4.txt");
	vector<employee> persons;
	employee e;

	while (getline(file, e.name))
		if (file >> e.age)
		{
			persons.push_back(e);
			file.ignore();
		}
	file.close();                                    

	if (persons.empty())                             
	{
		cout << "No data found" << endl;
		return 0;
	}

	int younger = 0;
	int older = 0;

	for (int i = 1; i < persons.size(); i++)
	{
		if (persons[i].age < persons[younger].age)
		{
			younger = i;
		}

		if (persons[i].age > persons[older].age)
		{
			older = i;
		}
	}

	ofstream result("results.txt");
	result << "Younger person: " << persons[younger].name << " " << persons[younger].age << endl;

	result << "Older person: " << persons[older].name << " " << persons[older].age << endl;

	result.close();

	

}