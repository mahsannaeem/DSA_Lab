#include <iostream>
#include<math.h>
using namespace std;


bool isArmstrong(int* num) {
    int originalNum = *num;
    int sum = 0;
    int numDigits = 0;
    
    // Count the number of digits in the number
    int temp = *num;
    while (temp != 0) {
        numDigits++;
        temp /= 10;
    }
    
    // Calculate the sum of the cubes of each digit
    while (*num != 0) {
        int digit = *num % 10;
        sum += pow(digit, numDigits);
        *num /= 10;
    }
    
    return originalNum == sum;
}

int main() {
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;

    if (isArmstrong(&num)) {
        std::cout << num << " is an Armstrong number." << std::endl;
    } else {
        std::cout << num << " is not an Armstrong number." << std::endl;
    }


    getchar();
    return 0;
}