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

bool isCyclePresentOptimized(ListNode* head){ 

    ListNode* slow = head;
    ListNode* fast = head->next;

    while(fast != NULL && fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;
        if(slow == fast){
            // you've found a Cycle
            return true;
        }
    }
    // no cycle found
    return false;
}

int main() {

    ListNode* head = new ListNode(10);

    head->next = new ListNode(20);
    head->next->next = new ListNode(30);
    head->next->next->next = new ListNode(40);
    head->next->next->next->next = new ListNode(50);
    head->next->next->next->next->next = new ListNode(60);
    head->next->next->next->next->next->next = head->next;

    // printLinkedList(head); // 10 -> 20 -> 30 -> 40 -> 50 -> NULL

    isCyclePresentOptimized(head) ? cout << "cycle found" << endl : cout << "cycle not found" << endl;

    return 0;
}