#include<iostream>
using namespace std;

struct list1{
  public:
  int data;      //specifying the data field
  struct list1 *next;
};
struct list1 *head,*tail ;
// void createemptlist(list1 *head){
//     head=NULL;
// }
// void addNode(int data) {  
//     //Create a new node  
//     struct node *newNode = (struct node*)malloc(sizeof(struct node));  
//     newNode->data = data;  
//     newNode->next = NULL;  
      
//     //Checks if the list is empty  
//     if(head == NULL) {  
//         //If list is empty, both head and tail will point to new node  
//         head = newNode;  
//         tail = newNode;  
//     }  
//     else {  
//         //newNode will be added after tail such that tail's next will point to newNode  
//         tail->next = newNode;  
//         //newNode will become new tail of the list  
//         tail = newNode;  
//     }  
// }  

void insertbeg(int key){
  list1 *h4=new list1();
  h4->data=key;
  h4->next=head;
  head=h4;
}
void insertend(int key){
  list1 *new1 =new list1();
  new1->data=key;
  tail->next=new1;
  new1->next=NULL;
  tail=new1;
}
// void insertatpos(int position,int d){
//   struct list1 *temp=head;
//   int count=1;
//   if(position==1){
//     insertbeg(d);
//     return;
//   }
//   while(count<=position-1){
//     temp=temp->next;
//     count++;
//   }
//   if(temp->next==NULL){
//     insertend(d);
//     return;
//   }
//   struct list1 * newnode=new list1();
//   newnode->data=d;
//   newnode->next=temp->next;
//   temp->next=newnode;
  
// }
void insertatpos(int position,int d){
  struct list1 *temp=head;
  if(position==1){
    insertbeg(d);
    return;
  }
  int count =1;
  while(count<position-1){
    temp=temp->next;//here we have incremented head utill we reach one position prior to were we have to insert
    count++;//here count is incremented every time untill we reach desired postion
  }
  if(temp->next==NULL){
    insertend(d);
    return;
  }
  struct list1 *nnode=new list1();
  nnode->data=d;
  nnode->next=temp->next;
  temp->next=nnode;
}
void deletenode(int position){
  struct list1 *temp;
  temp=head;
  if(position==1){
    head=head->next;
    temp->next=NULL;
    delete temp;
  }

  else{
    struct list1 *current;
    current=head;
    struct list1 *prev=NULL;
    int count =1;
    while(count<position){
      prev=current;
      current=current->next;
      count++;
    }
    prev->next=current->next;
    current->next=NULL;
    delete current;
  }
}


void display(){
  struct list1 *current=head;
   if(head == NULL) {  
        cout<<"List is empty";  
        return;  
    }  
     
    while(current != NULL) {  
        //Prints each node by incrementing pointer  
        cout<<current->data<<" ";  
        current = current->next;  
    }  
    cout<<endl;; 
}
// int count1(list1 *head){
//     int c=0;
//     list1 *head;
//     while(head!=NULL){
//         c++;
//         head=head->next;
//     }
//   return c;
// }
int main(){
  list1 *h1=new list1();
  h1->data=10;
  head=h1;
  // cout<<h1->data<<endl<<h1->next<<endl;
  // cout<<head;
  list1 *h2=new list1();
  h2->data=11;
  h1->next=h2; 
  list1 *h3=new list1();
  h3->data=11;
  h2->next=h3;
  tail=h3;
  // display();
  // createemptlist(head);
  insertbeg(4);
  insertend(5);
  insertend(8);
  insertatpos(1,9);
  display();
  deletenode(2);
  display();
}
