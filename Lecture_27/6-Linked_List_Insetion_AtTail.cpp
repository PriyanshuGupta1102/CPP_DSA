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

ListNode* getTail(ListNode* head){
    while(head->next != NULL){
        head = head->next;
    }

    return head;
}

// time : O(n)
// space : O(1)

void insertAtTail(ListNode*& head, int val){

    if(head == NULL){
        insertAtHead(head, val);
        return;
    }

    ListNode* n = new ListNode(val); // const
    ListNode* tail = getTail(head); // linear
    tail->next = n; // const

}

int main() {

    ListNode* head = NULL; // LinkedList is Empty

    insertAtHead(head, 50);
    insertAtHead(head, 40);
    insertAtHead(head, 30);
    insertAtHead(head, 20);
    insertAtHead(head, 10);

    printLinkedList(head); // 10 -> 20 -> 30 -> 40 -> 50 -> NULL

    insertAtTail(head, 60);

    printLinkedList(head);


    return 0;
}