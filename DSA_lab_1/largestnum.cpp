#include<iostream>
using namespace std;
//Find largest number using pointer
int main(){
    int sample[5]={1,4,6,8,32};
    int *first= &sample[0];
    int largest=*first;

    cout<<"Array is: ";
    for(int z=0; z<5; z++){
        cout<<sample[z];
    }

    cout<<"\n"<<endl;
    
    for(int i=0;i<5;i++){
        if(largest <= *first){
            largest = *first;
        }
        first++;
    }
    cout<<"Largest number in given array is: "<<largest<<endl;
    getchar();
    return 0;
}