#include <iostream>
using namespace std;
//Convert unit of speed
void speedconvert(double* speed) {
    *speed *= 0.621371;
}

int main() {
    double kmph;
    cout << "Enter speed in kilometers per hour (km/h): ";
    cin >> kmph;

    speedconvert(&kmph);

    cout << "Speed in miles per hour (mph): " << kmph << endl;


    getchar();
    return 0;
}