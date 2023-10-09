#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = nullptr;
    }
};

class LinkedList {
private:
    Node* head;

public:
    LinkedList() {
        head = nullptr;
    }

    // Function to add a node at the end of the list
    void insertAtEnd(int value) {
        Node* newNode = new Node(value);
        if (head == nullptr) {
            head = newNode;
        } else {
            Node* current = head;
            while (current->next != nullptr) {
                current = current->next;
            }
            current->next = newNode;
        }
    }

    // Function to add a node at the beginning of the list
    void insertAtStart(int value) {
        Node* newNode = new Node(value);
        newNode->next = head;
        head = newNode;
    }

    // Function to add a node at a specific index
    void insertAtIndex(int value, int index) {
        if (index < 0) {
            cout << "Invalid index. Cannot insert at a negative index." << endl;
            return;
        }

        Node* newNode = new Node(value);
        if (index == 0) {
            newNode->next = head;
            head = newNode;
        } else {
            Node* current = head;
            int currentIndex = 0;
            while (current != nullptr && currentIndex < index - 1) {
                current = current->next;
                currentIndex++;
            }
            if (current == nullptr) {
                cout << "Invalid index. Cannot insert at the specified index." << endl;
                return;
            }
            newNode->next = current->next;
            current->next = newNode;
        }
    }

    // Function to delete a node at a specific index
    void deleteAtIndex(int index) {
        if (index < 0) {
            cout << "Invalid index. Cannot delete at a negative index." << endl;
            return;
        }

        if (head == nullptr) {
            cout << "List is empty. Cannot delete from an empty list." << endl;
            return;
        }

        if (index == 0) {
            Node* temp = head;
            head = head->next;
            delete temp;
        } else {
            Node* current = head;
            int currentIndex = 0;
            while (current->next != nullptr && currentIndex < index - 1) {
                current = current->next;
                currentIndex++;
            }
            if (current->next == nullptr) {
                cout << "Invalid index. Cannot delete at the specified index." << endl;
                return;
            }
            Node* temp = current->next;
            current->next = current->next->next;
            delete temp;
        }
    }

    //Function to del node at first
    void deleteAtFirst(){
        Node * temp = head;
        head = (head->next);
        delete temp;
    }

    //Function to delete at end
    void deleteAtEnd(){
        Node * temp=head;
        Node * newlast=temp;
        while (temp->next!= nullptr)
        {   
            newlast= temp;
            temp = temp->next;
        }
        
        newlast->next= nullptr;
        delete temp;

    }

    // Function to print the entire linked list
    void printList() {
        cout<<"The linked list is:"<<endl;
        Node* current = head;
        while (current != nullptr) {
            cout << current->data << "  ";
            current = current->next;
        }
        cout<<"\n\n----------------------------------"<<endl;
        cout<<"*****Head Address:**** " <<head<<endl;
        
        Node* ptr =head;
        cout<<"----------------------------------"<<endl;
        cout<<"ptr address:"<<ptr<<endl;
        cout<<"ptr content:"<<ptr->next<<endl;
        while(ptr != nullptr){
            cout<<"----------------------------------"<<endl;
            cout<<"ptr: "<<ptr<<endl;
            cout<<"ptr->next:"<<ptr->next<<endl;
            cout<<"ptr->data:"<<ptr->data<<endl;
            ptr= ptr->next;
            
        }


        
    }
};

int main() {
    LinkedList myList;


    myList.insertAtStart(30);
    myList.insertAtStart(20);
    myList.insertAtStart(2);
    myList.insertAtStart(1);

    myList.printList();
    getchar();
    return 0;
}
