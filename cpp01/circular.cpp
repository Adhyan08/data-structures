#include<iostream>
using namespace std;

struct clist{
    int data;
    struct clist *next;
};
struct clist *head,*last=NULL;

void display(){
    struct clist *temp=new clist();
    temp=last->next;
    if(last==NULL){
        cout<<"list is empty";
    }
    else if(last->next==last){
        cout<<last->data;
    }
    else{
        do{
            cout<<temp->data;
            temp=temp->next;
        }
        while(temp!=last->next);
    }

}

struct clist* addToEmpty(int data) {
  if (last != NULL) return last;

  // allocate memory to the new node
  struct clist* newNode =new clist();

  // assign data to the new node
  newNode->data = data;

  // make newnode as the last node
  last = newNode;

  // create link to itself as it is a circular linked list
  last->next = last;

  return last;
}
struct clist* addFront(int data) {
  if (last == NULL){
    addToEmpty(data);
  }

  struct clist *newNode =new clist();
  newNode->data = data;
  newNode->next = last->next;
  last->next = newNode;

  return last;
}

struct clist *addend(int data){
    if(last==NULL){
        addToEmpty(data);
    }
    else{
        struct clist *new1=new clist();
        new1->data=data;
        new1->next=last->next;
        last->next=new1;
        last=new1;
    }
    return last;
}

int main(){
addToEmpty(7);
addFront(8);
addFront(3);
addend(11);
display();
}
