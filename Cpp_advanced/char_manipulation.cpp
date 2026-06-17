
/* 
isalnum-> alphanumeric
isalpha-> alphabetic
isblank -> blank
isupper -> uppercase
islower-> lowercase
isdigit-> digit
toupper-> convert to uppercase
tolower-> convert to lowercases
*/




/*
#include <iostream>
#include <cctype>
using namespace std;

int main() {
    size_t size = 10;

    char* ptr_char = new(nothrow) char[size]{"He lo 23@"};

    if(ptr_char) {
        for(size_t i = 0; ptr_char[i] != '\0'; ++i) {
            if(isdigit(static_cast<unsigned char>(ptr_char[i]))) {
                cout << ptr_char[i] << " is a number\n";
            } else {
                cout << ptr_char[i] << " is NOT a number\n";
            }
        }
    }

    delete[] ptr_char;
}
*/
#include <iostream>
#include <cctype>
using namespace std;

int main() {
    size_t size = 10;

    char* ptr_char = new(nothrow) char[size]{"He lo 23@"};

    if(ptr_char) {
        for(size_t i = 0; ptr_char[i] != '\0'; ++i) {
           char upper = toupper(static_cast<unsigned char>(ptr_char[i]));
cout << upper << endl;
        }
    }

    delete[] ptr_char;
}


