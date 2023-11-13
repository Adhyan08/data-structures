// simple last in first out and first in last out
//when stack in full it is stack overflow (top = 99)
//when stack in empty it is stack underflow (top = -1)

// algo
// 1 creation of stack [top = -1]
// 2 push element 
// 3 pop ->top=top-1
// 4 overflow 
// 5 underflow 
// 6 top/peak -> return the top element

#include<iostream>
#include<stack>
#include<string>
#include<queue>
using namespace std;

class stack1{
    public:
    int *arr;
    int size;
    int top;

    stack1(int s){
        size=s;
        arr=new int[s];
        top=-1;

    }

    void push(int key){
        if(size-top>1){
            top++;
            arr[top]=key;
        }
        else{
            cout<<"stack overflow";
        }
    }
    void pop(){
        if(top==-1){
            cout<<"stack underflow";
        }
        else{
            top--;
        }
    }
    int displaytop(){
        return arr[top];
    }

};

int main(){
    stack1 s(3);
    s.push(3);
    s.push(4);
    s.push(5);
    cout<<s.displaytop();
    s.pop();
    cout<<s.displaytop();
    // stack <int> s;
    
    // while(!s.empty()){
    //     cout<<s.top();
    //     s.pop();
    // }
    // if(s.empty()){
    //     cout<<"stack underflow";
    // }
}
