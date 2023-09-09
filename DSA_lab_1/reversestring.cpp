#include <iostream>
#include <string.h>
using namespace std;
//Reverse string using pointers
void reverseString(char* str) {
    int length = strlen(str);
    for (int i = 0; i < length / 2; i++) {
        char temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }
}

int main() {
    char str[] = "Hello, World!";
    cout << "Original string: " << str << endl;

    reverseString(str);

    cout << "Reversed string: " << str << endl;

    getchar();
    return 0;
}