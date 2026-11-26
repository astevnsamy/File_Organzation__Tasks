
#include <fstream>
#include <iostream>
#include <string>
#include<cmath>
#include <stdlib.h>
#include<vector>
using namespace std;

int main()
{


	ifstream file("fruit.txt");
	string name;
	while (getline(file,name))
	{
		cout << name << endl;
		
	}
	file.close();

	ofstream myfile("fruit.txt",ios::app);
	myfile << "Fresh Fruits" << endl;
	myfile.close();


}

