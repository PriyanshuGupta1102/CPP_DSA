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

// time : O(n)
// space  O(1)

ListNode* reverseLinkedList(ListNode*& head){
    
    ListNode* prev = NULL;
    ListNode* cur = head;

    while(cur != NULL){

        ListNode* temp = cur->next;
        cur->next = prev;
        prev = cur;
        cur = temp;
    }
    return prev;
}

int main() {

    ListNode* head = NULL; // Initially, LinkedList is Initially Empty 

    insertAtHead(head, 50);
    insertAtHead(head, 40);
    insertAtHead(head, 30);
    insertAtHead(head, 20);
    insertAtHead(head, 10);

    // if(head == NULL){
    //     cout << "YES" << endl;
    // }

    printLinkedList(head); // 10 -> 20 -> 30 -> 40 -> 50 -> NULL

    head = reverseLinkedList(head);

    printLinkedList(head); // 50 -> 40 -> 30 -> 20 -> 10 


    return 0;
}