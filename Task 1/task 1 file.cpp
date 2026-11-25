


#include <fstream>
#include <iostream>
#include <string>
#include<cmath>
#include <stdlib.h>
#include<vector>
using namespace std;
int main()
{
	string full_name;
	int id;
	float grade;
	cout << "enter full_name" << endl;
	getline(cin, full_name);
	cout << "enter id" << endl;
	cin >> id;
	cout << "enter grade" << endl;
	cin >> grade;
	ofstream myfile("student.txt");
	myfile << full_name << endl << id << endl << grade;

  
}

