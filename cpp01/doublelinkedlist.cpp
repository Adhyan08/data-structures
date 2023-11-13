#include<iostream>
using namespace std;
class dlist{
    public:
    int data;
    dlist *next;
    dlist *prev;   

};
dlist *head,*tail=NULL;

void display(){
    dlist *temp=head;
    if(head==NULL){
        cout<<"list is empty";
    }
    else{
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
    }
}
void insertbeg(int key){
dlist *temp=new dlist();
temp->data=key;
temp->next=head;
temp->prev=NULL;
head=temp;    
}
void insertend(int key){
    dlist *temp=new dlist();
    temp->data=key;
    tail->next=temp;
    temp->prev=tail;
    tail=temp;
    temp->next=NULL;
}
int main(){
    dlist *n1=new dlist();
    n1->data=2;
    head=n1;
    n1->prev=NULL;
    dlist *n2=new dlist();
    n2->data=3;
    n2->prev=n1;
    n2->next=NULL;
    n1->next=n2;
    dlist *n3=new dlist();
    n3->data=4;
    n3->prev=n2;
    n2->next=n3;
    n3=tail;
    insertbeg(5);
    insertend(9);
    display();
}