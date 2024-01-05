#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    Node(int val){
        this->val=val;
        this->next=NULL;
        
    }

};
void insert(Node *&head ,int v){
    Node *Newnode= new Node(v);
    if(head==NULL){
        head=Newnode;
        return;
    }
    Node *tmp=head;
    while(tmp->next !=NULL){
        tmp=tmp->next;
    }
}
void Printlink(Node * head){
    Node * tmp=head;
    while(tmp !=NULL){
        cout<<"your link list"<<endl;
        cout<<tmp->val<<endl;
        tmp=tmp->next;
    }
}
int main(){
    Node* head=NULL;
    cout<<"option 1: Insert at Tail"<<endl;
    int op;
    cin >>op;
    if(op==1){
        
     int v;
  cout<<"please inter your value :"<<endl;
     cin>>v;
     insert(head,v);

    }
Printlink(head);

}