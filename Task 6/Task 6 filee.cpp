
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
    int grade, del;
    bool found = false;

    ofstream file("grades.txt");
    cout << "Enter 5 grades: ";
    for (int i = 0; i < 5; i++)
    {
        cin >> grade;
        file << grade << endl;
    }
    file.close();

    ifstream myfile("grades.txt");
    if (!myfile)
    {
        cout << "Error opening file" << endl;
        return 1;
    }
    cout << "The grades are:" << endl;
    while (myfile >> grade)
    {
        cout << grade << endl;
    }
    myfile.close();

    cout << "Enter grade to delete: ";
    cin >> del;

    myfile.open("grades.txt");
    ofstream tempFile("temp.txt");
    if (!myfile || !tempFile)
    {
        cout << "Error opening file" << endl;
        return 1;
    }
    while (myfile >> grade)
    {
        if (grade == del)
            found = true;
        else
            tempFile << grade << endl;
    }
    myfile.close();
    tempFile.close();

    if (found == false)
    {
        remove("temp.txt");
        cout << "error grade not found" << endl;
    }
    else if (remove("grades.txt") == 0 && rename("temp.txt", "grades.txt") == 0)
    {
        cout << "Grade deleted successfully" << endl;
    }
    else
    {
        cout << "error file not replaced" << endl;
    }

  
}
