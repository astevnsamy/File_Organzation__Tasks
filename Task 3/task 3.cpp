
#include <fstream>
#include <iostream>
#include <string>
#include<cmath>
#include <stdlib.h>
#include<vector>
using namespace std;

int main()
{
	ofstream file("welcome.txt");
	file << "Hello Everybody";
	file.seekp(11);
	file << "one ";
	file.close();
	ifstream myfile("welcome.txt");
	string name;
	getline(myfile, name);
	cout << name;
	myfile.close();




}

