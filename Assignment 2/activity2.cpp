#include <iostream>
using namespace std;

// Node for linked lists
struct Node {
    int data;
    Node* next;
    Node* prev; 
};

class LinkedList {
private:
    Node* head;
    Node* tail; 
public:
    LinkedList() {
        head = nullptr;
        tail = nullptr;
    }

    // Function for insertion
    void insertAtBeginning(int value) {
        Node* newNode = new Node;
        newNode->data = value;
        newNode->next = head;
        newNode->prev = nullptr; 
        
        if (head != nullptr) {
            head->prev = newNode; 
        }

        head = newNode;

        if (tail == nullptr) {
            tail = newNode; 
        }
    }

    // Function for insertion at end
    void insertAtEnd(int value) {
        Node* newNode = new Node;
        newNode->data = value;
        newNode->next = nullptr;

        if (tail != nullptr) {
            tail->next = newNode; 
            newNode->prev = tail; 
        }

        tail = newNode;

        if (head == nullptr) {
            head = newNode; 
        }
    }

    // Function to insert at specific location
    void insertAfter(int target, int value) {
        Node* newNode = new Node;
        newNode->data = value;

        Node* current = head;

        while (current != nullptr && current->data != target) {
            current = current->next;
        }

        if (current != nullptr) {
            newNode->next = current->next;
            current->next = newNode;
            newNode->prev = current; 

            if (newNode->next != nullptr) {
                newNode->next->prev = newNode; 
            }

            if (current == tail) {
                tail = newNode; 
            }
        }
    }

    // Function for deletion of data
    void deleteNode(int value) {
        Node* current = head;
        Node* previous = nullptr;

        while (current != nullptr && current->data != value) {
            previous = current;
            current = current->next;
        }

        if (current != nullptr) {
            if (previous != nullptr) {
                previous->next = current->next;
            } else {
                head = current->next;
            }

            if (current == tail) {
                tail = previous;
            }

            delete current;
        }
    }

    // Function to print the list
    void display() {
        Node* current = head;

        while (current != nullptr) {
            cout << current->data << " ";
            current = current->next;
        }

        cout << endl;
    }

    // Function to reverse the linked list
    void reverse() {
        cout<<"\nReversing the list...."<<endl;
        Node* current = head;
        Node* prev = nullptr;
        Node* next = nullptr;

        while (current != nullptr) {
            next = current->next;
            current->next = prev;
            prev = current;
            current = next;
        }

        head = prev;
    }

    // Function to seek a specific data value
    bool seek(int value) {
        Node* current = head;

        while (current != nullptr) {
            if (current->data == value) {
                return true;
            }
            current = current->next;
        }

        return false;
    }
};

int main() {
    int choice, subChoice;
    LinkedList sList, dList, cList;
    int insertValue;

    do { //do fpr list selection operation
        cout << "Which linked list you want:\n"
             << "1: Single\n"
             << "2: Double\n"
             << "3: Circular\n"
             << "Select: ";
        cin >> choice;

        switch (choice) {
            case 1:
                do { //after selection of singly
                    cout << "Which operation you want to perform:\n"
                         << "1: Insertion\n"
                         << "2: Deletion\n"
                         << "3: Display\n"
                         << "4: Reverse\n"
                         << "5: Seek\n"
                         << "6: Exit\n"
                         << "Select: ";
                    cin >> subChoice;

                    switch (subChoice) {
                        case 1:
                            int typeofinsertion;
                            cout<<"1. Insertion at beigning\n"
                                <<"2. Insertion at end\n"
                                <<"3. Insertion at specific data value\n"
                                <<"Chose your option: ";
                            cin>>typeofinsertion;
                            switch(typeofinsertion){
                                case 1:
                                    
                                    cout << "Enter the value to insert: ";
                                    cin >> insertValue;
                                    sList.insertAtBeginning(insertValue);
                                    cout<<"\n Items in list: ";
                                    sList.display();
                                    break;
                                case 2:
                                    cout << "Enter the value to insert: ";
                                    cin >> insertValue;
                                    sList.insertAtEnd(insertValue);
                                    cout<<"\n Items in list: ";
                                    sList.display();
                                    break;
                                case 3:
                                    int targetval;
                                    cout << "Enter the value to insert: ";
                                    cin >> insertValue;
                                    cout<<"ENter the value where you want to insert: ";
                                    cin>>targetval;
                                    sList.insertAfter(targetval,insertValue);
                                    cout<<"\n Items in list: ";
                                    sList.display();
                                    break;
                                default:
                                    cout<<"You didn't selected appropiate option"<<endl;
                                    break;
                            }
                            break;
                        case 2:
                            int deleteValue;
                            cout << "Enter the value to delete: ";
                            cin >> deleteValue;
                            sList.deleteNode(deleteValue);
                            break;
                        case 3:
                            cout << "Single Linked List: ";
                            sList.display();
                            break;
                        case 4:
                            sList.reverse();
                            break;
                        case 5:
                            int seekValue;
                            cout << "Enter the value to seek: ";
                            cin >> seekValue;
                            if (sList.seek(seekValue)) {
                                cout << "Value found in Single Linked List.\n";
                            } else {
                                cout << "Value not found in Single Linked List.\n";
                            }
                            break;
                        case 6:
                            cout << "Exiting Single Linked List menu.\n";
                            break;
                        default:
                            cout << "Invalid choice. Please try again.\n";
                            break;
                    }
                } while (subChoice != 6);
                break;

            case 2:
                do { //after slection of doubly
                    cout << "Which operation you want to perform:\n"
                         << "1: Insertion\n"
                         << "2: Deletion\n"
                         << "3: Display\n"
                         << "4: Reverse\n"
                         << "5: Seek\n"
                         << "6: Exit\n"
                         << "Enter your choice : ";
                    cin >> subChoice;

                    switch (subChoice) {
                        case 1:
                            
                            int typeofinsertion;
                            cout<<"1. Insertion at beigning\n"
                                <<"2. Insertion at end\n"
                                <<"3. Insertion at specific data value\n"
                                <<"Chose your option: ";
                            cin>>typeofinsertion;
                            switch(typeofinsertion){
                                case 1:
                                    cout << "Enter the value to insert: ";
                                    cin >> insertValue;
                                    dList.insertAtBeginning(insertValue);
                                    cout<<"\n Items in list: ";
                                    dList.display();
                                    break;
                                case 2:
                                    cout << "Enter the value to insert: ";
                                    cin >> insertValue;
                                    dList.insertAtEnd(insertValue);
                                    cout<<"\n Items in list: ";
                                    dList.display();
                                    break;
                                case 3:
                                    int targetval;
                                    cout << "Enter the value to insert: ";
                                    cin >> insertValue;
                                    cout<<"ENter the value where you want to insert: ";
                                    cin>>targetval;
                                    dList.insertAfter(targetval,insertValue);
                                    cout<<"\n Items in list: ";
                                    dList.display();
                                    break;
                                default:
                                    cout<<"You didn't selected appropiate option"<<endl;
                                    break;
                            }break;
                        case 2:
                            int deleteValue;
                            cout << "Enter the value to delete: ";
                            cin >> deleteValue;
                            dList.deleteNode(deleteValue);
                            break;
                        case 3:
                            cout << "Double Linked List: ";
                            dList.display();
                            break;
                        case 4:
                            dList.reverse();
                            break;
                        case 5:
                            int seekValue;
                            cout << "Enter the value to seek: ";
                            cin >> seekValue;
                            if (dList.seek(seekValue)) {
                                cout << "Value found in Double Linked List.\n";
                            } else {
                                cout << "Value not found in Double Linked List.\n";
                            }
                            break;
                        case 6:
                            cout << "Exiting Double Linked List menu.\n";
                            break;
                        default:
                            cout << "Invalid choice. Please try again.\n";
                            break;
                    }
                } while (subChoice != 6);
                break;

            case 3:
                do { //after selection of circular
                    cout << "Which operation you want to perform:\n"
                         << "1: Insertion\n"
                         << "2: Deletion\n"
                         << "3: Display\n"
                         << "4: Reverse\n"
                         << "5: Seek\n"
                         << "6: Exit\n"
                         << "Enter your choice: ";
                    cin >> subChoice;

                    switch (subChoice) {
                        case 1:
                            int typeofinsertion;
                            cout<<"1. Insertion at beigning\n"
                                <<"2. Insertion at end\n"
                                <<"3. Insertion at specific data value\n"
                                <<"Chose your option: ";
                            cin>>typeofinsertion;
                            switch(typeofinsertion){
                                case 1:
                                    
                                    cout << "Enter the value to insert: ";
                                    cin >> insertValue;
                                    cList.insertAtBeginning(insertValue);
                                    cout<<"\n Items in list: ";
                                    cList.display();
                                    break;
                                case 2:
                                    cout << "Enter the value to insert: ";
                                    cin >> insertValue;
                                    cList.insertAtEnd(insertValue);
                                    cout<<"\n Items in list: ";
                                    cList.display();
                                    break;
                                case 3:
                                    int targetval;
                                    cout << "Enter the value to insert: ";
                                    cin >> insertValue;
                                    cout<<"ENter the value where you want to insert: ";
                                    cin>>targetval;
                                    cList.insertAfter(targetval,insertValue);
                                    cout<<"\n Items in list: ";
                                    cList.display();
                                    break;
                                default:
                                    cout<<"You didn't selected appropiate option"<<endl;
                                    break;
                            }break;
                        case 2:
                            int deleteValue;
                            cout << "Enter the value to delete: ";
                            cin >> deleteValue;
                            cList.deleteNode(deleteValue);
                            break;
                        case 3:
                            cout << "Circular Linked List: ";
                            cList.display();
                            break;
                        case 4:
                            cout << "Cannot reverse a circular linked list.\n";
                            break;
                        case 5:
                            int seekValue;
                            cout << "Enter the value to seek: ";
                            cin >> seekValue;
                            if (cList.seek(seekValue)) {
                                cout << "Value found in Circular Linked List.\n";
                            } else {
                                cout << "Value not found in Circular Linked List.\n";
                            }
                            break;
                        case 6:
                            cout << "Exiting Circular Linked List menu.\n";
                            break;
                        default:
                            cout << "Invalid choice. Please try again.\n";
                            break;
                    }
                } while (subChoice != 6);
                break;

            default:
                cout << "Invalid choice. Please try again.\n";
                break;
        }

    } while (choice != 4);

    cout << "Exiting the program.\n";

    return 0;
}