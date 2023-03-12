#include <iostream> 
#include <fstream> 
#include <string> 
using namespace std; 
 
bool isPalindrome(string s) { 
    int n = s.length(); 
    for (int i = 0; i < n / 2; i++) { 
        if (s[i] != s[n - i - 1]) { 
            return false; 
        } 
    } 
    return true; 
} 
 
int main() { 
    ifstream inputFile("text.txt"); 
    if (!inputFile) { 
        cout << "Error." << endl; 
        return 1; 
    } 
 
    string number; 
    while (inputFile >> number) { 
        if (isPalindrome(number)) { 
            cout << "palindrome = " << number << endl; 
        } 
        else { 
            cout << "not a palindrome = "  << number << endl; 
        } 
    } 
 
    inputFile.close(); 
    return 0; 
}
