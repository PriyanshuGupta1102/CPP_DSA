#include <iostream>

using namespace std;

class node{
public:
    int K;
    int V;
    node* next;

    node(int K, int V){
        this->K = K;
        this->V = V;
        this->next = NULL;
    }
};

class HashMap{
    int N; // to store the hash table capacity
    int M; // to store the hash table size
    double L; // to store the load factor threshold 

    node** T; // to store the pointer to the dynamic 
    // array that represent the hash table

    int hashFn(int K){
        // transform K into a hash index
        return K % N;
    }

    void transfer(node* head) {
        // 1. rehash (K, V) pairs present in the linkedList represented 
        // By "head" pointer to the updated hashMap 
        node* temp = head;
        while(temp != NULL){
            insert(temp->K, temp->V);
            temp = temp->next;
        }

        // 2. Release memory allocated for the linkedList represented 
        // By "head"
        while(head != NULL){
            temp = head;
            head = head->next;
            delete temp;
        }
    }

    void reHash() {
        // 1. Save Pointer to the current hashMap and its Capacity
        node** oldT = T;
        int oldN = N;

        // 2. Create a hashMap with double capacity
        N = 2 * N;
        T = new node*[2*N];
        for(int i = 0; i < 2 * N; i++){
            T[i] = NULL;
        }
        
        M = 0;

        // 3. Transer (K,V) pairs from old hashMap to the updated hashMap   
        for(int i = 0; i < oldN; i++){
            transfer(oldT[i]);
        }

        // 4. Release the memory allocated to the old hashMap
        delete [] oldT;
    }

public:

    HashMap(int N = 5, double L = 0.7){
        this->N = N;
        this->M = 0;
        this->L = L;

        T = new node*[N];
        for(int i = 0; i < N; i++){
            T[i] = NULL;
        }
    }

    void insert(int K, int V){
        int hashIdx = hashFn(K);

        node* n = new node(K, V);

        n->next = T[hashIdx];
        T[hashIdx] = n;
        M++;

        double LF = (double)M / N;
        if(LF > L){
            reHash();
        }
    }

    node* find(int K){
        int hashIdx = hashFn(K);

        node* temp = T[hashIdx];
        while(temp != NULL){
            if(temp->K == K){
                break;
            }
            temp = temp->next;
        }
        return temp;
    }

    void erase(int K){
        // 1. transform the key into hash index using the hash function
        int hashIdx = hashFn(K);

        // 2. delete the node with the given key from the Linked List
        // stored at the hash index
        node* temp = T[hashIdx];
        if(temp == NULL){
            // Linked List at the hashIdx is empty so key doesn't exist 
            // in the hashMap
            return;
        }else{
            if(temp->K == K){
                T[hashIdx] = temp->next;
                delete temp;
                M--;
            }else{
                // key if present, will be at a non-head node so find and delete it
                node* prev = NULL;
                while(temp != NULL){
                    if(temp->K == K){
                        prev->next = temp->next;
                        delete temp;
                        M--;
                        break;
                    }
                    prev = temp;
                    temp = temp->next;
                }

            }
        }
    }

    void printLinkedList(node* head){
        while(head != NULL){
            cout << "(" << head->K << ", " << head->V << ")";
            head = head->next;
        }
        cout << endl;
    }

    void printHashMap(){
        // iterate over buckets in the hashMap
        for(int i = 0; i < N; i++){
            // print the LinkedList stored ith bucket of the hashMap
            cout << i << " : ";
            printLinkedList(T[i]);
        }
        cout << endl;
    }

    int& operator[] (int K) {
        node* n = find(K);
        if(n == NULL){
            insert(K, 0);
            n = find(K);
        }
        return n->V;
    }
};

int main(){
    HashMap hm;

    hm.insert(2,4);
    hm.insert(7, 49);
    hm.insert(3, 9);

    hm.printHashMap();

    hm.insert(6, 36);

    hm.printHashMap();

    cout << hm[2] << endl; // Expected -> 4 But it give us an Error Before Operator Overloading
    cout << hm[6] << endl; // 36
    cout << hm[10] << endl; // h[m].operator[](10) 

    hm[10] = 100;

    hm.printHashMap();

    hm[6] = 36;
    
    hm.printHashMap();

    return 0;
}