#include<iostream>
#include<algorithm>
using namespace std;

// int lsearch(int arr[],int size,int key){
//     for(int i=0;i<size;i++){
//         if(arr[i]==key){
//             return 1;
//         }
//     }
//     return 0;
// }

// int main(){
// int arr[5]={1,2,3,4,5};
// int key;
// cout<<"enter the number you want to search ";
// cin>>key;
// bool found =lsearch(arr,5,key);

// if (found){
//     cout<<"key is present";
// }
// else{
//     cout<<"key not found";
// }
// }

// int main(){
//     int arr[5]={1,2,3,4,5};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     for(int i=n;i<n;i--){
//         cout<<arr[i];
//     }
// }

//binary search

int bsearch(int arr[],int size,int key){
    sort(arr,arr+size);
    int start=0;
    int end=size;
    int mid=(start+end)/2;  //for the case when the value exceeds that of integer
                            // use another formula that case is 
                            //when 2^31-1 i.e the limit of integer is 
    while(start<=end){      //reached so the formula is = start+(end-start)/2
        if(arr[mid]==key){
            return mid;
        }

        if(arr[mid]<key){
            start=mid+1;
        }      
        else{
            end=mid-1;
        }
        mid=(start+end)/2;
      
    }

    return -1;
}

int main(){
   int arr[9]={9,2,11,3,4,6,7,0,8};
   int index= bsearch(arr,9,0);
   cout<<"index of key is:"<<index<<endl;
}

//binary search first occurence and last occcurence

// int firstocc(int arr[],int s,int key){
//     sort(arr,arr+s);
//     int start=0;
//     int end=s-1;
//     int mid=(start+end)/2;
//     int ans=-1;
//     while(start<=end){
//         if(arr[mid]==key){
//             ans=mid;
//             end=mid-1;
//         }
//         else if(arr[mid]>key){
//             end=mid-1;
//         }
//         else if(arr[mid]<key){
//             start=mid+1;
//         }
        
//     }
//     return ans;
// }

// int lastocc(int arr[],int s,int key){
//     sort(arr,arr+s);
//     int start=0;
//     int end=s-1;
//     int mid=(start+end)/2;
//     int ans=-1;
//     while(start<=end){
//         if(arr[mid]==key){
//             ans=mid;
//             start=mid+1;
//         }
//         else if(arr[mid]>key){
//             end=mid-1;
//         }
//         else if(arr[mid]<key){
//             start=mid+1;
//         }
        
//     }
//     return ans;
// }

// int main(){
//     int arr[9]={1,2,3,4,4,4,4,5,4};
//     cout<<firstocc(arr,9,4)<<endl;
//     cout<<lastocc(arr,9,4)<<endl;
//     cout<<"program ended";
// }