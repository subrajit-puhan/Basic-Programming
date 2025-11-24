#include <iostream>
using namespace std;

//Define the class to check the palindrome
class palindrome_check {
public:
    string s;

    bool is_palindrome(){
        int left = 0;
        int right = s.length() - 1;

        while (left < right){ //Can do either way (The basic idea is to check one by one)
            if (s[left] == s[right]) {
                return true;
            }
                left ++;
                right --;
        }
        return false;

    }
};

// Main function 
int main() {
    palindrome_check p; //Object for the class
    cout << "Enter a string: ";
    cin >> p.s; 
    if (p.is_palindrome()) //Call for the member function by the object 
        cout << "Palindrome" << endl;
    else
        cout << "Not a Palindrome" << endl;

    return 0;
}