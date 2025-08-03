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

ListNode* insertAtHead(ListNode*& head, int val){
    // head ptr is passed by reference to make sure any changes done to 
    // headeRef will be reflected in head ptr 
    // maintained in the main fn

    ListNode* n = new ListNode(val);
    n->next = head; // Point the new node to the current node 
    head = n; // Update the Head to the New Node 


    return head;

}

void printLinkedList(ListNode* head){

    while(head != NULL){
        cout << head->val << " -> ";
        head = head->next;
    }
    cout << "NULL" << endl;
}

int main() {

    ListNode* head = NULL; // LinkedList is Empty

    head = insertAtHead(head, 50);
    head = insertAtHead(head, 40);
    head = insertAtHead(head, 30);
    head = insertAtHead(head, 20);
    head = insertAtHead(head, 10);

    // if(head == NULL){
    //     cout << "YES" << endl;
    // }

    printLinkedList(head); // 10 -> 20 -> 30 -> 40 -> 50 -> NULL


    return 0;
}