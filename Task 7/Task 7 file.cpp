
#include<cmath>
#include <fstream>
#include <iostream>
#include <stdlib.h>
#include <string>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
	vector<string> names = { "Hadeer Mahomud","Youssef Ali","Ahmed Mostafa","Esraa Ebrahim" };
	sort(names.begin(), names.end());
	cout << "Names in ascending order" << endl;
	for (int i = 0; i < names.size();i++)
	{
		cout << names[i] << endl;
	}





}

