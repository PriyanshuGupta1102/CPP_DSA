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

    if(head == NULL){ // LinkedList Empty
        cout << "Empty Linked List";
        return;
    }

    ListNode* temp = head;
    head = head->next;
    delete temp;

    return head;
}

ListNode* getNode(ListNode* head, int j){

    // find the addr of the node at index j of the given linkedlist

    int k = 1;

    while(k <= j && head != NULL){

        head = head->next;
        k++;
    }

    return head;
}

// time : O(n)

void deleteAtIndex(ListNode*& head, int i, int val){

    if(i == 0){
        deletionLinkedListHead(head);
        return;
    }

    ListNode* prev = getNode(head, i-1);
    if(prev == NULL){
        // i exceeds the length of the linkedlist
        return;
    }
    ListNode* cur = prev->next; // const 
    if(cur == NULL){
        // i  is equal to length
        return;
    }
    prev->next = cur->next; // const
    delete cur; // const
}

int main() {

    ListNode* head = NULL; // LinkedList is Empty

    insertAtHead(head, 50);
    insertAtHead(head, 40);
    insertAtHead(head, 30);
    insertAtHead(head, 20);
    insertAtHead(head, 10);

    printLinkedList(head); // 10 -> 20 -> 30 -> 40 -> 50 -> NULL

    deleteAtIndex(head, 2, 25);

    printLinkedList(head);


    return 0;
}