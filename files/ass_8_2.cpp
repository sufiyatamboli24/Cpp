/*Write a program to overload the == operator to compare two strings
(class objects) and check if they are equal.*/
#include <iostream>
#include <cstring> // For using strcmp
using namespace std;

class MyString {
private:
    char str[100]; // Character array to store the string

public:
    // Constructor to set the string
    MyString(const char s[] = "") {
        strcpy(str, s); // Copy input string to class variable
    }

    // Function to display the string
    void display() {
        cout << str;
    }

    // Overloading == operator
    bool operator==(MyString other) {
        // strcmp returns 0 if strings are equal
        if (strcmp(str, other.str) == 0) {
            return true;
        } else {
            return false;
        }
    }
};

int main() {
    MyString s1("apple");
    MyString s2("apple");
    MyString s3("banana");

    cout << "Comparing s1 and s2: ";
    if (s1 == s2) {
        cout << "They are equal!" << endl;
    } else {
        cout << "They are not equal!" << endl;
    }

    cout << "Comparing s1 and s3: ";
    if (s1 == s3) {
        cout << "They are equal!" << endl;
    } else {
        cout << "They are not equal!" << endl;
    }

    return 0;
}