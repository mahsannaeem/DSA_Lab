#include<iostream>
using namespace std;
//check if given number is less than 100
int main(){
    int num1,num2;
    int *ptn1 = &num1, *ptn2 = &num2;
    
    cout<<"Programme to check wether sum of given numbers is less than 100 or not."<<endl;
    cout<<"Enter first number: ";
    cin>>num1;
    cout<<"ENter number second: ";
    cin>>num2;

    if((*ptn1+ *ptn2) > 100){
        cout<<"Sum of given numbers is not less than 100"<<endl;
    } else if((*ptn1+ *ptn2) < 100 ){
        cout<<"Sum of given numbers is  less than 100"<<endl;
        
    } else{
        cout<<"Sum of given numbers is 100"<<endl;
    }
    getchar();
    return 0;
}