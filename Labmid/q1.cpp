#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int val) : data(val), next(NULL) {}
};

class SinglyLinkedList {
public:
    Node* head;

    SinglyLinkedList() : head(NULL) {}

    // Insert a new node at the end of the linked list
    void insertEnd(int data) {
        Node* newNode = new Node(data);
        if (head == NULL) {
            head = newNode;
        } else {
            Node* current = head;
            while (current->next != NULL) {
                current = current->next;
            }
            current->next = newNode;
        }
    }

    // Reverse the linked list
    void reverse() {
        Node* prev = NULL;
        Node* current = head;
        Node* nextNode = NULL;

        while (current != NULL) {
            nextNode = current->next;
            current->next = prev;
            prev = current;
            current = nextNode;
        }

        head = prev;
    }

    // Check if the linked list is a palindrome
    bool isPalindrome() {
        if (head == NULL || head->next == NULL) {
            return true; // An empty list or a single-node list is a palindrome
        }

        Node* slow = head;
        Node* fast = head;
        Node* prevSlow = NULL;

        while (fast != NULL && fast->next != NULL) {
            fast = fast->next->next;
            prevSlow = slow;
            slow = slow->next;

        }

        // Reverse the second half of the list
        prevSlow->next = NULL; // Break the list into two halves
        reverse(); // Reverse the second half

        Node* firstHalf = head;
        Node* secondHalf = slow;

        while (firstHalf != NULL && secondHalf != NULL) {
            if (firstHalf->data != secondHalf->data) {
                return false;
                
            }
            firstHalf = firstHalf->next;
            secondHalf = secondHalf->next;
        }

        return true;
    }
};

    SinglyLinkedList list;

int main() {
    void SSL();
    void palindrom();

    cout<<"Calling SSL function to create a list. (1,2,2,1).......................\n"<<endl;
    SSL();
    cout<<"Calling palindrom function to check if list is palindrom or not................\n"<<endl;
    palindrom();


    getchar();
    return 0;
}

void SSL(){
        list.insertEnd(1);
        list.insertEnd(2);
        list.insertEnd(3);
        list.insertEnd(1);
    };


void palindrom(){
            if (list.isPalindrome()) {
        cout << "The linked list is a palindrome." << endl;
    } else {
        cout << "The linked list is not a palindrome." << endl;
    }

    }

