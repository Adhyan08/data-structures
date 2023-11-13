#include<iostream>
using namespace std;
void update(int p){
    p=p+1;
    cout<<p;
}
int main(){
    // int n=9;
    // int *p=&n;
    // *p=*p*9;
    // int *k=0;
    // k=p;
    // // cout<<p<<endl<<&n<<endl;
    // cout<<*p<<*k;
    int p=8;
    update(p);
    cout<<p;
    // int arr[5]={1,2,3,4,5};
    // int *ptr=arr;
    // cout<<(*ptr)+(*(ptr+1))<<endl<<&(*(ptr+1))<<endl<<arr<<endl<<&ptr<<endl;
    // ptr=ptr+1;
    // cout<<ptr;//question
}