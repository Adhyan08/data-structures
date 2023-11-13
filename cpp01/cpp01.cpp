#include <iostream>

using namespace std;
int factorial(int no){
    int fact=1;
    for(int i=1;i<=no;i++){
        fact=fact*i;
        return no*factorial(no-1);
    }
}

int main(){
    //patern 1
    // int n;
    // cin>>n;
    // int i=1;
    // while(i<=n){
    //     int j=2;
    //     while(j<=n){
    //         cout<<"*";
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }

    //pattern 2
    // int n;
    // cin>>n;
    // int i=1;
    // while(i<=n){
    //     int j=1;
    //     while(j<=n){
    //         cout<<i;
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }

    //pattern 3
    // int n;
    // cin>>n;
    // int i=1;
    // while(i<=n){
    //     int j=1;
    //     while(j<=n){
    //         cout<<n-j+1;
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }

    //pattern 4
    // int n;
    // cin>>n;
    // int i=1;
    // int count=1;
    // while(i<=n){
    //     int j=1;
    //     while(j<=i){
    //         cout<<count<<" ";
    //         count++;
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }

    //pattern 5
    // int n;
    // cin>>n;
    // int i=1;
    // while(i<=n){
    //     int j=1;
        
    //     while(j<=i){
    //         cout<<;
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }
    int n;
    cin>>n;
    cout<<"factorial="<<factorial(n)<<endl;
    

}