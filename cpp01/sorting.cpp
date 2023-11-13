#include<iostream>
using namespace std;

// int bsearch(int arr[],int n,int key){
//     int start=0;
//     int end=n;
//     int mid=(start+end)/2;
//     while(start<=end){
//         if(arr[mid]==key){
//             return mid;
//         }
//         else if(arr[mid]<key){
//             start=mid+1;
//         }
//         else{
//             end=mid-1;
//         }
//         mid=(start+end)/2;
//     }

//     return -1;
   
// }

// void selectionsort(int arr[],int n){
//     for(int i=0;i<n;i++){
//         int minindex=i;
        
//         for(int j=i+1;j<n;j++){
//             if(arr[j]<arr[minindex]){
//                 minindex=j;
//             }
//     }
//     int temp=arr[i];
//     arr[i]=arr[minindex];
//     arr[minindex]=temp;
//  }
// }

// void bubblesort(int arr[],int n){
//     for(int i=1;i<n;i++){   // it is for applying the round 
//         bool swapped=false;
//         for(int j=0;j<n-i;j++){ // it is for comparing each element with other
//             if(arr[j]>arr[j+1]){
//                 int temp=arr[j];
//                 arr[j]=arr[j+1];
//                 arr[j+1]=temp;
//                 swapped=true;
//             }
//         }
//         if(swapped==false){  // it is so that if swapping is not performed proccess stops
//             break;
//         }
//     }
// }

// void insertionsort(int arr[],int n){
//     for(int i=1;i<n;i++){
//         int temp=arr[i];
//         int j=i-1;
//         for(;j>=0;j--){
//             if(arr[j]>temp){
//                 arr[j+1]=arr[j];
//             }
//             else{
//                 break;
//             }
//         }
//         arr[j+1]=temp;
//     }
// }

void merge(int arr[],int l,int m,int r){
    int n1=m-l+1;
    int n2=r-m;
    int a[n1];
    int b[n2];
    for(int i=0;i<n1;i++){
        a[i]=arr[l+i];
    }
    for(int i=0;i<n2;i++){
        b[i]=arr[m+1+i];
    }
    int i=0;
    int j=0;
    int k=l;
    while(i<n1 && j<n2)
    {
        if(a[i]<b[j])
        {
            arr[k]=a[i];
            k++;
            i++;
        }
        else
        {
            arr[k]=b[j];
            k++;
            j++;
        }
    }
    while (i<n1)
    {
         arr[k]=a[i];
            k++;
            i++;
    }
    while (j<n2)
    {
        arr[k]=b[j];
            k++;
            j++;
    }
}
void mergesort(int arr[],int l,int r){
    if(l<r){
    int m=(l+r)/2;
    mergesort(arr,l,m);
    mergesort(arr,m+1,l);
    merge(arr,l,m,r);
    }
}
int main(){
    int arr[8]={2,3,1,2,6,33,44,2};
    mergesort(arr,0,8);
    // cout<<bsearch(arr,6,4);
    for(int i=0;i<8;i++){
        cout<<arr[i]<<" ";
    }
}