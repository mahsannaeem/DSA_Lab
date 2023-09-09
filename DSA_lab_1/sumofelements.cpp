#include<iostream>
using namespace std;
//Add all the elements of array using pointers
int main(){
    int arr[5]= {1,2,3,4,5},sum=0;
    int* element = &arr[0];

    for(int i=0;i<5;i++){
        sum += *element;
        element++;
    }
    cout<<"Sum of all the elements in array is: "<<sum<<endl;
    getchar();
    return 0;
}