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

void removeCycle(ListNode* head){ // Floyds Algorithm 
    // we are assuming LinkedList has >= 2 nodes
    ListNode* slow = head;
    ListNode* fast = head;

    while(true){
        slow = slow->next;
        fast = fast->next->next;
        if(slow == fast){
            break;
        }
    }

    // at this point, slow & fast re at the meeting point
    ListNode* prev = head;
    while(prev->next != fast){
        prev = prev->next;
    }

    slow = head;
    while(slow != fast){
        slow = slow->next;
        fast = fast->next;
        prev = prev->next;
    }

    // at the point of time slow & fast are at the start of the cycle
    // and prev is at the tai of the LinkedList
    prev->next = NULL; // this removes the cycle 

}

int main() {

    ListNode* head = new ListNode(10);

    head->next = new ListNode(20);
    head->next->next = new ListNode(30);
    head->next->next->next = new ListNode(40);
    head->next->next->next->next = new ListNode(50);
    head->next->next->next->next->next = new ListNode(60);
    head->next->next->next->next->next->next = head->next;

    removeCycle(head);

    printLinkedList(head);

    return 0;
}