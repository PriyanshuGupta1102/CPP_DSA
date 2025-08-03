#include<iostream>
using namespace std; 

class ListNode{
    public:
        int val;
        ListNode* next;

        ListNode(int val){
            this->val = val;
            this->next = NULL;
        }
};

void insertAtHead(ListNode*& headRef, int val){
    // head ptr is passed by reference to make sure any changes done to 
    // headeRef will be reflected in head ptr 
    // maintained in the main fn

    ListNode* n = new ListNode(val);
    n->next = headRef; // Point the new node to the current node 
    headRef = n; // Update the Head to the New Node 

}

void printLinkedList(ListNode* head){

    while(head != NULL){
        cout << head->val << " -> ";
        head = head->next;
    }
    cout << "NULL" << endl;
}

int computeLengthIterative(ListNode* head){

    int length = 0;

    while(head != NULL){
        length++;
        head = head->next;
    }
    return length;
}

int computeLengthRecursive(ListNode* head){ // time : O(n) and space : O(n) 

    // Base Case

    if(head == NULL){ // LinkedList is Empty 
        return 0;
    }

    // Recursive Case 

    // f(head) = find the length of the given linked list 

    // 1. Ask your friend to find the length of the sublist that 
    // starts from the node which comes after the head node 

    int x = computeLengthRecursive(head->next);

    return 1 + x;
    
}

int main() {

    ListNode* head = NULL; // Initially, LinkedList is Empty

    insertAtHead(head, 50);
    insertAtHead(head, 40);
    insertAtHead(head, 30);
    insertAtHead(head, 20);
    insertAtHead(head, 10);

    printLinkedList(head); // 10 -> 20 -> 30 -> 40 -> 50 -> NULL

    cout << computeLengthIterative(head) << endl; // 5

    cout << computeLengthRecursive(head) << endl; // 5


    return 0;
}