#include<iostream>
using namespace std;
//Multiply two numbers using pointers


int mult(int *x,int *y){
    return ((*x)*(*y));
}

int main(){
    int var1,var2,result;
    int *ptvar1,*ptvar2;

    ptvar1 = &var1;
    ptvar2 = &var2;

    cout<<"Enter value 1"<<endl;
    cin>>var1;
    cout<<"Enter value 2"<<endl;
    cin>>var2;

    result =mult(ptvar1,ptvar2);

    cout<<"Product is: "<<result<<endl;



getchar();
    return 0;
}