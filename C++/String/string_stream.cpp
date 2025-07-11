#include<bits/stdc++.h> // Includes all standard C++ libraries

using namespace std; // Allows usage of standard library names without std:: prefix

int main()
{
    // Initialize a string with a full name
    string s1 = "Sadik Ul Islam Khan";

    // Create a stringstream object and initialize it with s1
    // This allows us to extract words from the string as if reading from a stream
    stringstream ss(s1);

    string s2; // Variable to store each extracted word
    
    // Extract the first word from the stringstream and store it in s2
    ss >> s2;
    cout << s2 << endl; // Output the first word

    // Extract the next word from the stringstream and store it in s2
    ss >> s2;
    cout << s2 << endl; // Output the second word

    return 0; // Indicate successful program termination
}