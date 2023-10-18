#include <iostream>
#include<string.h>
using namespace std;

class node{
    public:
    char data;
    node* next;
    
    node(char val){
        data= val;
        next= nullptr;
    }
};

class stack{
    public:
    node* head;
    stack(){
        head= nullptr;
    }
    
    bool isempty(){
        if(head == nullptr){
            return true;
        }else{
            return false;
        }
    }
    
    void push(char val){
        node* newnode= new node(val);
        newnode->next= head;
        head= newnode;
    }
    char pop(){
        node* temp= head;
        if(isempty()){
            cout<<"Stack is empty"<<endl;
        }
        else{
        char val= temp->data;
        head= temp->next;
        delete temp;
            return val;
        }
    }
    void empty(){
        char ans;
        if(isempty()){
            cout<<" Stack is empty"<<endl;
        }
        while(!isempty()){
            ans= pop();
                 cout<<ans;
        }
    }
};

int main(){
    stack stk;
    string input;
    cout<<"Enter string: ";
    cin>>input;
    for(int i=0;i<input.length();i++){
        stk.push(input[i]);
    }
    cout<<"Reversed string is: ";
    stk.empty();
    return 0;
}