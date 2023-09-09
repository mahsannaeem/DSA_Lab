#include<iostream>
using namespace std;
//Copy array into another empty array using pointer.
int main(){
    int arr[5]={1,2,3,4,5};
    int*ptarr = &arr[0];
    int copy[5];
    int *ptcopy =&copy[0];

    for(int i=0;i<5;i++){
        *ptcopy = *ptarr;
        ptcopy++;
        ptarr++;
    }


    cout<<"The array after copying is: ";
    for(int z=0; z<5;z++){
        cout<<copy[z]<<" ";
        
    }
    getchar();
    return 0;
}