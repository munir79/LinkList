#include<bits/stdc++.h>
using namespace std;
class Node {
    public:
    int val;
    Node* next;
    Node(int val){
        this->val=val;
        this->next=NULL;
    }
};
int main(){
    Node *head=new Node(10);
    Node *b=new Node(100);
    head->next=b;
    b->next=NULL;
    cout <<head->val<<" "<< head->next->val<<" "<< b->val;
    
   
   


}