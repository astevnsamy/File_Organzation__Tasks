
#include <fstream>
#include <iostream>
#include <string>
#include<cmath>
#include <stdlib.h>
#include<vector>
using namespace std;


struct students
{
    char name[20];
    int id;
    float grade;
   
};
int main()
{
    ofstream myfile("students.txt", ios::app);
    students s;
    char choice = 'y';
    
    while (choice == 'y')
    {
        cout << "enter name" << endl;
       
        cin.getline(s.name,20);
        cout << "enter id" << endl;
        cin >> s.id;
        cout << "enter grade" << endl;
        cin >> s.grade;
        cout << "Add another record? (y/n): ";
        cin >> choice;
        cin.ignore();
        myfile << s.name << ", " << s.id << ", " << s.grade  << " $ ";
    }
    myfile.close();
   












}

