#include <iostream>
using namespace std ;

// Define the class
class solution {
public:
    string longestpalindrome(string s) {
        int max_length = 1; //Initialize
        int n = s.length();
        int start = 0;

        //Check for odd condition
        for (int i = 0; i < n-1; i++) {
            int l = i;
            int r = i;
            while (l >= 0 && r < n) {
                if (s[l] == s[r]) {
                    l--;
                    r++;
                }else
                    break;
            }

            if (r-l-1 > max_length) {
                start = l+1;
                max_length = r-l-1;
            }
        }

        //Check for even condition
        for (int i = 0; i < n-1; i++) {
            int l = i;
            int r = i+1;
            while (l >= 0 && r < n) {
                if (s[l] == s[r]) {
                    l--;
                    r++;
                }else
                    break;

        }
        if (r-l-1 > max_length) {
                start = l+1;
                max_length = r-l-1;
            }
    }
    // Struture to return the substring
    return s.substr(start, max_length); 
}
    
};

// Main function
int main() {
    solution obj; // Create the object for the class
    string s;
    cout << "Enter a string : ";
    cin >> s;
    cout << obj.longestpalindrome(s) << endl;
}