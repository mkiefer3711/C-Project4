// Author: Maddison Kiefer
//
// Program: Determing Students in each Test Score Range
// This program will read test scores from an input file and use that to count how many students
// are in each test score range.

// Header files
#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{   
    // Defining Variables
    ifstream incode;
    string inputFile;
    int fileData[26];
    int student0_24 = 0, student25_49 = 0, student50_74 = 0, student75_99 = 0, student100_124 = 0, student125_149 = 0, student150_174 = 0, student175_200 = 0;

    // Asks for a file input
    cout << "Enter the file name: ";
    cin >> inputFile;

    // Opens the file and will display an error message if the file cannot be opened
    incode.open(inputFile);
    if (!incode)
    {
        cout << "Cannot open the input file," << endl;
        return 1;
    }
    // For loop that adds each value in the file to an array
    for (int i = 0; i < 26; i++)
    {
        string temp;
        int score;
        incode >> score;
        fileData[i] = score;
        incode >> temp;
    }
    // For loop that goes through each value in the array 
    for (int i = 0; i < 26; i++)
    {
        int num = fileData[i];

        // If statements that check the ranges and adds to individual counters for the number of students in each range
        if (0 <= num && num <= 24)
            student0_24++;
        else if (25 <= num && num <= 49)
            student25_49++;
        else if (50 <= num && num <= 74)
            student50_74++;
        else if (75 <= num && num <= 99)
            student75_99++;
        else if (100 <= num && num <= 124)
            student100_124++;
        else if (125 <= num && num <= 149)
            student125_149++;
        else if (150 <= num && num <= 174)
            student150_174++;
        else if (175 <= num && num <= 200)
            student175_200++;
    }

    // Prints the ranges and the number of students to the console
    cout << "Score ranges with the number of students in each range:" << endl;
    cout << "Range 0 - 24:        " << student0_24 << endl;
    cout << "Range 25 - 49:       " << student25_49 << endl;
    cout << "Range 50 - 74:       " << student50_74 << endl;
    cout << "Range 75 - 99:       " << student75_99 << endl;
    cout << "Range 100 - 124:     " << student100_124 << endl;
    cout << "Range 125 - 149:     " << student125_149 << endl;
    cout << "Range 150 - 174:     " << student150_174 << endl;
    cout << "Range 175 - 200:     " << student175_200 << endl;

    // Closes the input file
    incode.close();

    return 0;
}


