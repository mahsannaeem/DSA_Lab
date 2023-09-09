#include <iostream>
using namespace std;
//Multiplying all the elements in array with 2
int main() {
    int sample[5]={1,2,3,4,5};
    int *firstarr=&sample[0];
    int num;
    cout<<"Array : ";
    for(int i=0; i<5;i++){
        cout<<*firstarr;
        firstarr++;
    }
    firstarr = &sample[0];
    cout<<endl;

    cout<<"Multiplying array with 2. Result: ";
    for(int z=0; z<5;z++){
        
        cout<<(*firstarr)*2;
        firstarr++;
    }



    getchar();
    return 0;
}