#include<iostream>
#include<string>
#include<vector>
using namespace std;

//array implementation

char tree[10];
int root(char key){
    if(tree[0]!='\0'){
        cout<<"tree alreaady has root";
    }
    else{
        tree[0]=key;
        return 0;
    }
}
int set_left(char key,int parent){
    if(tree[parent]=='\0'){
        cout<<"no parent ";
    }
    else{
        tree[(parent*2)+1]=key;
        return 0;
    }
}
int set_right(char key,int parent){
    if(tree[parent]=='\0'){
        cout<<"no parent ";
    }
    else{
        tree[(parent*2)+2]=key;
        return 0;
    }
}
int print_tree(int parent){
   cout<<tree[parent]<<endl;
   cout<<tree[(parent*2)+1]<<" "<<cout<<tree[(parent*2)+2]<<endl;
   for(int i=1;i<10;i++){
    print_tree(i)<<endl;
   }
}
int main(){
    root("a");
    set_left("b",0);
    set_right("c",0);
    set_left("d",1);
    set_right("e",1);
    print_tree(0);
}

// class node{
//     public:
//     int data;
//     node *left;
//     node *right;

//     node(int val){
//         data=val;
//         left=NULL;
//         right=NULL;
//     }
// };
// int mai(){
//     node *root = new node(1);
//     cout<<" ";
//     root->left=new node(2);
// }

// recursion basic 
// void display(int n){
//     if(n<1){
//         return;
//     }
//     else{
//         cout<<n;
//         display(n-1);
//         cout<<n;
//     }

// }
// int main(){
//     int n;
//     cin>>n;
//     display(n);
// }

// void substring(string s,string output,int i){
//     if(i>=s.length()){
//         cout<<output<<endl;
//         return;
//     }
//     substring(s,output,i+1);
//     output=output+s[i];
//     substring(s,output,i+1);

// }
// int main(){
//     string s="abcd";
//     string output=" ";
//     int i=0;
//     cout<<s.length();
//     substring(s,output,i);
//     return 0;

// }

// int main(){
//     vector<int> g1;
//     for (int i=0;i<=5;i++)
//     g1.push_back(i);
//     cout<<"output of begin and end"<<endl; 
//     for (auto i=g1.begin ();i!=g1.end ();i++)
//     cout<<*i<<endl;
//     return 0;

// }