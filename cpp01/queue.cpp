#include<iostream>
#include<queue>
#include<iterator>
using namespace std;

// class queue1{
//     int *arr;
//     int qfront;
//     int rear;
//     int size;
//     public:
//     queue1(int size){
//         arr=new int[size];
//         qfront =0;
//         rear=0;
//     }
//     void push(int data){
//         if(rear==size){
//             cout<<"overflow";
//         }
//         else{
//             arr[rear]=data;
//             rear++;
//         }
//     }

//     void pop(){
//         if(qfront==rear){
//             cout<<"queue is emtpy";
//         }
//         else{
//             arr[qfront]=-1;
//             qfront++;
//             if(qfront==rear){
//                 qfront=0;
//                 rear=0;
//             }
//         }
//     }

//     void front(){
//         cout<<arr[qfront];
//     }

//     bool isempty(){
//         if(qfront==rear){
//             return true;
//         }
//         else{
//             return false;
//         }
//     }
// };

int main(){

    priority_queue<int ,vector<int> , greater<int> > minheap;
    minheap.push(4);
    minheap.push(3);
    minheap.push(7);
    minheap.push(8);
    minheap.push(1);
    cout<<minheap.top();
    // queue1 q1(4);
    // q1.push(4);
    // q1.push(5);
    // q1.push(6);
    // q1.push(7);
    // q1.pop();
    // q1.front();
    // cout<<q1.isempty();
    cout<<endl<<endl;
    priority_queue<int> papa;
    papa.push(4);
    papa.push(3);
    papa.push(7);
    papa.push(8);
    papa.push(1);
    cout<<papa.top();

priority_queue<int>::iterator ptr;
cout<<endl<<endl;
    while (!papa.empty()) {
    cout << papa.top()<< " ";
    papa.pop();
    }
}