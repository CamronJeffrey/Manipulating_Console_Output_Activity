// Manipulating_Console_Output.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>  

using namespace std;

int main() {
    
    int id1 = 1, id2 = 2, id3 = 3;
    string name1 = "Alice", name2 = "Bob", name3 = "Charlie";
    double balance1 = 1000.00, balance2 = 530.25, balance3 = 2040.50;

    // Display the title, centered (assuming console width of ~30 characters)
    cout << setw(30) << right << "Daily Report" << endl;
    cout << string(30, '-') << endl; // Underline the title

    // Display column headers with appropriate width
    cout << left << setw(8) << "ID"
        << setw(15) << "Name"
        << right << setw(10) << "Balance" << endl;
    cout << string(33, '-') << endl; 

    
    cout << left << setw(8) << setfill('0') << setw(5) << id1 << setfill(' ') 
        << setw(15) << name1
        << right << "$" << fixed << setprecision(2) << setw(9) << balance1 << endl;

    cout << left << setw(8) << setfill('0') << setw(5) << id2 << setfill(' ')
        << setw(15) << name2
        << right << "$" << fixed << setprecision(2) << setw(9) << balance2 << endl;

    cout << left << setw(8) << setfill('0') << setw(5) << id3 << setfill(' ')
        << setw(15) << name3
        << right << "$" << fixed << setprecision(2) << setw(9) << balance3 << endl;

    return 0;
}
