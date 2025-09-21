#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

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

void insertAthead(ListNode*& headRef, int val){
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

class ListNodeComp{

public:
    bool operator()(ListNode* a, ListNode* b){
        if(a->val < b->val){
            // Since we are building a minHeap and we want to give more priority to b than a;
            return false;
        }
        return true;
    }
};

// time : O(nklogk)
// space : O(k) due to minHeap
ListNode* mergeKSortedLinkedList(const vector<ListNode*>& v){

    priority_queue<ListNode*, vector<ListNode*>, ListNodeComp> minHeap(v.begin(), v.end());

    ListNode* dummy = new ListNode(0);
    ListNode* temp = dummy;

    while(!minHeap.empty()){
        ListNode* minNode = minHeap.top();
        minHeap.pop();
        temp->next = minNode;
        temp = temp->next;
        if(minNode->next != NULL){
            minHeap.push(minNode->next);
        }
    }
    return dummy->next;
}

int main(){
    ListNode* head1 = NULL;

    insertAthead(head1, 70);
    insertAthead(head1, 40);
    insertAthead(head1, 10);

    printLinkedList(head1); // 10 40 70 

    ListNode* head2 = NULL;

    insertAthead(head2, 80);
    insertAthead(head2, 50);
    insertAthead(head2, 20);

    printLinkedList(head2); // 20 50 80

    ListNode* head3 = NULL;

    insertAthead(head3, 90);
    insertAthead(head3, 60);
    insertAthead(head3, 30);

    printLinkedList(head3); // 30 60 90

    vector<ListNode*> v = {head1, head2, head3};

    ListNode* head = mergeKSortedLinkedList(v);

    printLinkedList(head);

    return 0;
}