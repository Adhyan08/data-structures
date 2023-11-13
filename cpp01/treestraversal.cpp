#include<iostream>
#include<queue>
using namespace std;

class node1{
    public:
    int data;
    node1 *left;
    node1 *right;

    node1(int d){
        data=d;
        left=NULL;
        right=NULL;
    }

};

node1* buildtree(node1 *root){
    
    cout<<"enter data"<<endl;
    int data;
    cin>>data;
    root =new node1(data);

    if(data==-1){
        return NULL;
    }

    cout<<"enter data for left of "<<data<<endl;
    root->left=buildtree(root->left);
    cout<<"enter data for right of "<<data<<endl;
    root->right=buildtree(root->right);
    return root;

}

void levelordertraversal(node1* root){
    queue<node1*> q1;
    q1.push(root);
    q1.push(NULL);

    while(!q1.empty()){
        node1* temp=q1.front();
        
        q1.pop();
        if(temp==NULL){
            cout<<endl;
            if(!q1.empty()){
                q1.push(NULL);
            }
        }
        else{
            cout<<temp->data<<" ";
            if(temp->left){
                q1.push(temp->left);
            }
            if(temp->right){
                q1.push(temp->right);
            }
        }
    }
}

void inordertraversal(node1* root){
    if(root==NULL){
        return ;
    }
    inordertraversal(root->left);
    cout<<root->data<<" ";
    inordertraversal(root->right);
}
void preordertraversal(node1* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    preordertraversal(root->left);
    preordertraversal(root->right);
}
void postordertraversal(node1* root){
    if(root==NULL){
        return;
    }
    postordertraversal(root->left);
    postordertraversal(root->right);
    cout<<root->data<<" ";
}
int main(){
    node1* root =NULL;
    root=buildtree(root);
    //1 3 7 -1 -1-11 -1 -1 5 17 -1 -1 -1
    levelordertraversal(root);
    cout<<"inordertraversal is:";
    inordertraversal(root);
    cout<<endl;
    cout<<"preordertraversal is:";
    preordertraversal(root);
    cout<<endl;
    cout<<"postordertraversal is:";
    postordertraversal(root);

    return 0;

}