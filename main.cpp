#include <iostream> 
#include <fstream> 
#include <string> 

using namespace std; 
 
bool isPalindrome(const string& s) { 
	функция должна принимать int....
		эту функцию один в один видел у другого одноклассника
    int n = s.length(); 
    for (int i = 0; i < n / 2; i++) { 
        if (s[i] != s[n - i - 1]) { 
            return false; 
        } 
    } 
    return true; 
} 
 
int main(int argc, char** argv) { 
<<<<<<< HEAD

	argv[1] -- имя файла, которое передаётся во время вызова программы
		числа надо считать из файла...
		и записать их в другой файл...

=======
>>>>>>> main
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
