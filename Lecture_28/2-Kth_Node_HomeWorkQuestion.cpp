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

ListNode* midPoint(ListNode* head){
    
    ListNode* cur = head;
    ListNode* cur2x = head;

    while(cur2x->next->next != NULL){
        cur = cur->next;
        cur2x = cur->next->next;
    }

    if(computeLengthIterative(head)%2 != 0){
        cur = cur->next;
    }
    
    return cur;
}

ListNode* findKthNode(ListNode* head, int k){ 

    if(head == NULL){
        // LinkedList is Empty
        return NULL;
    }

    ListNode* slow = head;
    ListNode* fast = head;
    
    for(int i = 0; i < k; i++){
        fast = fast->next;
    }
    
    while(fast != NULL && fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;
    }

    return slow;
}

int main() {

    ListNode* head = NULL; // LinkedList is Empty

    insertAtHead(head, 60);
    insertAtHead(head, 50);
    insertAtHead(head, 40);
    insertAtHead(head, 30);
    insertAtHead(head, 20);
    insertAtHead(head, 10);

    printLinkedList(head); // 10 -> 20 -> 30 -> 40 -> 50 -> NULL
    
    int k = 2;

    ListNode* KthNode = findKthNode(head, k);
    KthNode != NULL ? cout << KthNode->val << endl : cout << "LinkedList is Empty" << endl;

    // ListNode* mid = midPoint(head);

    // cout << mid->val << endl;

    return 0;
}