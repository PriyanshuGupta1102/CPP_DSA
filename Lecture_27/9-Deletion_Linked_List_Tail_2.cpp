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

ListNode* deletionLinkedListHead(ListNode*& head){

    // if(head == NULL){ // LinkedList Empty
    //     cout << "Empty Linked List";
    //     // return;
    // }

    ListNode* temp = head;
    head = head->next;
    delete temp;

    return head;
}

void deletionLinkedListTail(ListNode* head){

    if(head == NULL){ // LinkedList is Empty
        return;
    }

    // LinkedList is non-empty
    if(head->next == NULL){ // LinkedList has exactly one node
        deletionLinkedListHead(head);
        // return;
    }

    // LinkedList has >= 2 nodes 

    ListNode* prev = NULL;
    ListNode* cur = head;
    
    while(cur->next != NULL){
        prev = cur;
        cur = cur->next;
    }

    // at this point of time, cur ptr is pointing to the tail node 
    // and prev ptr is pointing to the node before the tail node 

    prev->next = NULL;
    delete cur;

}

int main() {

    ListNode* head = NULL; // LinkedList is Empty

    insertAtHead(head, 50);
    insertAtHead(head, 40);
    insertAtHead(head, 30);
    insertAtHead(head, 20);
    insertAtHead(head, 10);

    printLinkedList(head); // 10 -> 20 -> 30 -> 40 -> 50 -> NULL

    // deletionLinkedListTail(head);

    printLinkedList(head);


    return 0;
}