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

ListNode* removeDuplicates(ListNode* head){
    ListNode* cur = head->next;
    ListNode* prev = head;

    while(cur != NULL){
        if(cur->val != prev->val){
            // track cur node
            prev->next = cur;
            prev = cur;
            cur = cur->next;
        }else{
            // skip cur node
            cur = cur->next;
        }
    }

    prev->next = NULL;

    return head;
}

int main() {

    ListNode* head = NULL; // LinkedList is Empty

    insertAtHead(head, 40);
    insertAtHead(head, 40);
    insertAtHead(head, 30);
    insertAtHead(head, 30);
    insertAtHead(head, 20);
    insertAtHead(head, 10);
    insertAtHead(head, 10);

    printLinkedList(head); // 10 -> 20 -> 30 -> 40 -> 50 -> NULL

    removeDuplicates(head); 
    
    printLinkedList(head);

    return 0;
}