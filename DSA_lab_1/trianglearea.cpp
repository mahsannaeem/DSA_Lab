#include<iostream>
using namespace std;
//Calculate area of triangle
int main(){
    int len, wid, result;
    int* ptresult = &result;
    cout << "Enter length of triangle: ";
    cin >> len;
    cout << "Enter width of triangle: ";
    cin >> wid;
    result = (1.0/2) * len * wid;
    cout << "Area of triangle is: " << *ptresult << endl;
    getchar();
    return 0;
}