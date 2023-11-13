#include<iostream>
#include<stack>
#include<queue>
using namespace std;

queue<int> ip;

queue<int> input(){
    int n;
    
    while(true){
        cin>>n;
        if(n==-1) break;
        ip.push(n);

    }
    return ip;
}

int main(){
    input();
    int n;cin>>n;
    queue<int> temp;
    int N =ip.size();
    for(int i=0;i<N-n;i++){
        temp.push(ip.front());
        ip.pop();
    }
    while(!temp.empty()){
        ip.push(temp.front());
        temp.pop();
    }
    while(!ip.empty()){
        cout<<ip.front();
        ip.pop();
    }
    cout<<endl;
    return 0;
}