#include <iostream> 
#include <fstream> 
#include <string> 
using namespace std; 
 
bool isPalindrome(const string& s){ 
    int n = s.length(); 
    for (int i = 0; i < n / 2; i++) { 
        if (s[i] != s[n - i - 1]) { 
            return false; 
        } 
    } 
    return true; 
} 
 
int main(int argc, char** argv) { 
    ifstream inputFile("text.txt"); 
    if (!inputFile) { 
        cout << "Error." << endl; 
        return 1; 
    } 
    string number; 
    string path = "myFile.txt";  
    ofstream fout;
    fout.open(path);
    while (inputFile >> number) {
        if (isPalindrome(number)) { 
            fout << "palindrome = " << number << endl; 
        } 
        else { 
            fout << "not a palindrome = "  << number << endl; 
        } 
    } 
    fout.close();
 
    inputFile.close(); 
    return 0; 
}
