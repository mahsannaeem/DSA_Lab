#include<iostream>
using namespace std;
//REversing array using pointers
int main(){
    int sam[5]={1,2,3,4,5};
    int *first= &sam[0];
    int *last = &sam[4];

    cout<<"Array in correct order is: ";
    for(int i=0;i<5;i++){
        cout<<" "<<*first;
        first++;
    }

    cout<<endl;
    cout<<"Array in reverse order is: ";
    for(int i=0;i<5;i++){
        cout<<" "<<*last;
        last--;
    }

    getchar();
    return 0;
}