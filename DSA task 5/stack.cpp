#include <iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;
    
    node(int val){
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
    
    void push(int val){
        node* newnode= new node(val);
        newnode->next= head;
        head= newnode;
    }
    int pop(){
        node* temp= head;
        if(isempty()){
            cout<<"Stack is empty"<<endl;
        }
        else{
        int val= temp->data;
        head= temp->next;
        delete temp;
            return val;
        }
    }
    void empty(){
        int ans;
        if(isempty()){
            cout<<" Stack is empty"<<endl;
        }
        while(!isempty()){
            ans= pop();
                 cout<<"-";
                 cout<<ans;
                
            
        }
        
    }

};

int main(){
    stack stk;
    cout<<"Pushing elements in stack: "<<endl;
    stk.push(5);
    stk.push(9);
    cout<<"5 and 9 have been pushed into stack"<<endl;
    cout<<"Poping elements from stack: "<<endl;
    cout<<stk.pop()<<" "<<stk.pop();
    return 0;
}