#include<iostream>
#include<math.h>
#include<vector>
#include <iomanip>
#include <cctype>
#include<algorithm>
#include<string>
using namespace std;



//to display the elements.
// int main(){

//     int arr[6]={1,2,3,4,5,6};
//     for(int i=0;i<6;i++){
//         cout<<arr[i]<<" ";
//     }
// }


// to find location of given element.
// int main(){

//     int arr[6]={2,3,44,54,21,5};
//     int ele = 44;
//     for(int i=0;i<6;i++){
//         if(arr[i]==ele){
//             cout<<i<<endl;
//         }
//     }

// }


// insert an element.
// int main(){

//     int arr[7]={2,3,44,54,21,5};
//     //int num=0;
//     int pos=3;
//     int val=22;
//     for(int i=5;i>=pos;i--){
//         arr[i+1]=arr[i];
//     }
//     arr[pos]=val;

//     for(int i=0;i<7;i++){
//         cout<<arr[i]<<" ";
//     }
// }

// delete element.

// int main(){

//     int arr[7]={2,3,44,54,21,5};
//     //int pos=3;
//     int val=22;
//     for(int i=5;i>=pos;i--){
//         arr[i+1]=arr[i];
//     }
//     arr[pos]=val;

//     for(int i=0;i<7;i++){
//         cout<<arr[i]<<" ";
//     }
// }





// find maximum element of array.
// int main(){

//     int arr[6]={1,90,5,6,78,8};
//     int maxm=arr[0];
//     for(int i=0;i<6;i++){
//             if(maxm<arr[i]){
//                 maxm=arr[i];
//             }
//     }
//     cout<<maxm;
// }

// find minimum element of array.
// int main(){

//     int arr[6]={1,2,5,6,78,8};
//     //int maxm=0;
//     for(int i=0;i<6;i++){
//             if(arr[0]>arr[i]){
//                 arr[0]=arr[i];
//             }
//     }
//     cout<<arr[0];
// }


// sorting.
// int main(){

//     int arr[6]={1,22,15,6,78,8};
//     for(int i=0;i<6;i++){
//         for(int j=i+1;j<6;j++){
//             if(arr[i]>arr[j]){
//                swap(arr[i],arr[j]);
//             }
//         }
//     }
//     for(int i=0;i<6;i++){
//         cout<<arr[i]<<" ";
//     }

// }

// to reverse the array.
// int main(){

//     int n;
//     //cin>>n;
//     int arr[6]={1,22,15,6,2,33};
//     int s=0;
//     int e=5;
//     while(s<e){
//         swap(arr[s],arr[e]);
//         s++;
//         e--;
//     }
//     for(int i=0;i<6;i++){
//         cout<<arr[i]<<" ";
//     }

// }

// store users data into 2D array.
// int main(){

//     int arr[3][3] = {
// 		{ 10, 11, 12 },
// 		{ 20, 21, 22 },
// 		{ 30, 31, 32 },
// 		} ;
		
// 	for(int i=0;i<3;i++)
// 	{
// 		for(int j=0;j<3;j++)
// 		{
// 			cout<<arr[i][j]<<" ";
// 		}
// 		cout<<endl;
// 	}

// }

//You have been given an array of positive integers A1,A2,...,An with legnth N and you have to print an array 
//of same legnth(N) where the values in the new array are the sum of every number in the array, except the number at that index.
//Ip: 1 2 3 4 
//Op: 9 8 7 6
// int main(){

//     int arr[4]={1,2,3,4};
//     int result[4];
//     for(int i=0;i<4;i++){
//         int total = 0;
//         for(int j=0;j<4;j++){
//             if(j!=i){
//                 total+=arr[j];
//             }
//         }
//         result[i]=total;
//     }
//     for(int i=0;i<4;i++){
//         cout<<result[i]<<" ";
//     }
// }

//array is called positive if every element of the array is greater
//than or equal to the index on which it lies.
//Formally, an array B of size M is called positive is Bi ≥ i for each element
//For example, the arrays 
//[1],[2,2],[3,2,4,4]are positive while the arrays 
//[2,1],[3,1,2]are not positive.

// int main(){

//     int arr[6]={2,2,3,2,5,6};
//     int count=0;
//     for(int i=0;i<6;i++){
//         if(arr[i]>=i){
//             count++;
//         }
//         else{
//             cout<<"Negative";
//         }
//     }
//     if(count==6){
//         cout<<"Positive";
//     }
// }


//linear search.
// int main(){

//     int n;
//     cin>>n;
//     int key;
//     cin>>key;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     for(int i=0;i<n;i++){
//         if(arr[i]==key){
//             cout<<"found at index : "<<i<<endl;
//         }
//     }
// }

//binary search
// int main(){

//     int n;
//     cin>>n;
//     int key;
//     cin>>key;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }

//     int s=0;
//     int e=n-1;
//     int mid=(s+e)/2;
//     while(s<e){
//         if(arr[mid]==key){
//             cout<<"found at index : "<<mid;
//         }
//         if(key>arr[mid]){
//             s=mid+1;
//         }
//         else{
//             e=mid-1;
//         }
//         mid=(s+e)/2;
//     }

// }

//sort in terms of 0,1,2.
// int main(){

//     int arr[8]={0,1,0,1,2,2,1,0};
//     for(int i=0;i<8;i++){
//         for(int j=i+1;j<8;j++){
//             if(arr[i]>arr[j]){
//                swap(arr[i],arr[j]);
//             }
//         }
//     }
//     for(int i=0;i<8;i++){
//         cout<<arr[i]<<" ";
//     }

// }


// subarray of sum key.
// int main(){

//     int arr[6]={1,2,3,4,5,6};
//     int key=5;
//     int ans=0;
//     for(int i=0;i<6;i++){
//         for(int j=0;j<6;j++){
//             for(int k=0;k<6;k++){
//                 if(arr[i]+arr[j]+arr[k]==key){
//                     cout<<arr[i]<<" "<<arr[j]<<" "<<arr[k]<<endl;
//                     break;
//                 }
//             }
//         }
//     }

// }



//  int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int s;
//     cin>>s;
//     int sum=0;
//     for(int i=0;i<n;i++){
//         for(int j=i;j<n;j++){
//         sum+=arr[j];
//         if(sum==s){
//             for(int k=i;k<j+1;k++){
//                 cout<<arr[k]<<" ";
//             }
//         }
//         if(sum>s){
//             sum=0;
//             j=i;
//             i++;
//         }
//         }
//     }
//     return 0;
//  }
 

//sparse matrix.
// int main(){

//     int m,n;
//     cin>>m>>n;
//     int arr[m][n];
//     for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             cin>>arr[i][j];
//         }
//     }
//     cout<<"sparse matrix is:"<<endl;
//     for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             if(arr[i][j]>0){
//                 cout<<i<<" "<<j<<" "<<arr[i][j]<<endl;
//             }
//         }
//     }
// }





//Bubble sort.
// int main(){

//     int arr[8]={2,4,3,1,55,44,9,0};
//     for(int i=0;i<8;i++){
//         for(int j=0;j<8-i;j++){
//             if(arr[j]>arr[j+1]){
//                 swap(arr[j],arr[j+1]);
//             }
//         }
//     }

//     for (int i = 0; i < 8; i++) {
//         cout << arr[i] << " ";
//         //cout << endl;
//     }
// }
// best case complexity - o(n)  ;array is sorted.
// medium case complexity - o(n^2)
// worst case complexity - o(n^2)


// Selection Sort.
// int selection(int arr[],int n){
//         for(int i=0;i<5;i++){

//         int minindex=i;
//         for(int j=i+1;j<5;j++){
//             if(arr[j]<arr[minindex]){
//                 minindex=j;
//             }
//         }
//         swap(arr[minindex],arr[i]);
//         }
// }
// void printArray(int arr[], int size)
// {
//     for (int i = 0; i < size; i++) {
//         cout << arr[i] << " ";

//     }
// }

// int main(){
//     int arr[5]={64,25,12,22,11};
//     selection(arr,5);
//     printArray(arr,5);
// }


//insertion sort.
// int main(){

//     int arr[7]={10,1,7,4,8,2,11};
//     for(int i=1;i<7;i++){
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
//     for (int i = 0; i < 7; i++) {
//         cout << arr[i] << " ";
//         //cout << endl;
//     }
// }


//quick sort.
// int partition(int arr[],int s,int e){

//     int i = s;
//     int j = e;
//     int pivot = arr[s];
//     while(i<j){

//         while(arr[i]<=pivot){
//             i++;
//         }
//         while(arr[j]>pivot){
//             j--;
//         }
//         if(i<j){
//             swap(arr[i],arr[j]);
//         }
//     }
//     swap(arr[j],arr[s]);
//     return j;
// }
// void quicksort(int arr[],int s,int e){
//     if(s<e){
//         int pivot=partition(arr,s,e);
//         quicksort(arr,s,pivot-1);
//         quicksort(arr,pivot+1,e);
//     }
// }
// int main(){

//     int arr[9]={7,6,10,5,9,2,1,15,7};
//     quicksort(arr,0,8);
//     //partition(arr,0,6);
//     for (int i = 0; i < 9; i++) {
//         cout << arr[i] << " ";
//         //cout << endl;
//     }
// }


// sort array in wave form. 
// int main(){

//     int arr[6]={1,2,3,4,5,6};
//     int i=0;
//     int j=1;
//     while(i<j){
//         swap(arr[i],arr[j]);
//         i=i+2;
//         j=j+2;
//     }
//     for (int i = 0; i < 7; i++) {
//         cout << arr[i] << " ";
//         //cout << endl;
//     }
// }


//get missing range of element from array
// int main(){
    
//     int arr[9]={1,2,3,4,5,6,7,8,9};
//     int arr1[6]={1,2,3,5,7,9};
//     for(int i=0;i<9;i++){
//         int temp=arr[i];
//         bool found = false;
//         for(int j=0;j<6;j++){
//             if(temp==arr1[j]){
//                 found = true;
//                 break;
//             }
//         }
//         if(!found){
//             cout<<temp;
//         }
//     }
// }


//count no. of inversion need to sort array.
// int main(){

//     int arr[8]={2,4,3,1,55,44,9,0};
//     int count=0;
//     for(int i=0;i<8;i++){
//         for(int j=0;j<8-i;j++){
//             if(arr[j]>arr[j+1]){
//                 swap(arr[j],arr[j+1]);
//                 //cout<<arr[j]<<" "<<arr[j+1];
//                 count++;
//             }
//         }
//     }
//     cout<<count<<endl;

//     for (int i = 0; i < 8; i++) {
//         cout << arr[i] << " ";
//         //cout << endl;
//     }
// }


//minimum length of unsorted array.
// int main(){
    
//     int arr[9]={1,2,3,4,5,6,7,8,9};
//     int arr1[9]={1,2,5,3,4,7,6,8,9};
//     int index_start=0;
//     int index_end=0;
//     for(int i=0;i<9;i++){
//             if(arr[i]!=arr1[i]){
//                 index_start=i;
//                 // found = true;
//                 break;
//             }
//         }
//     for (int i = 8; i >= 0; i--) {
//         if (arr[i] != arr1[i]) {
//             index_end = i;
//             break;
//         }
//     }

//     cout<<((index_end-index_start)+1);
// }


// int main(){

//     int arr[9]={3,1,2,4,5,9,13,12,14};
//     for(int j=0;j<9;j++){
//         for(int i=0;i<9;i+=2){
//             if(arr[i]>arr[i+2]){
//                 swap(arr[i],arr[i+2]);
//         }
//     }
//     }

//     // for(int i=0;i<9;i++){
//     //     for(int j=0;j<9;j+=2){
//     //         if(arr[j+1]<arr[j+3]){
//     //             swap(arr[j+1],arr[j+3]);
//     //     }
//     // }
//     // }


//     for (int i = 0; i < 9; i++) {
//         cout << arr[i] << " ";
//         //cout << endl;
//     }
// }



// int main(){

//     int arr[8]={2,4,3,1,55,44,9,0};
//     for(int i=0;i<8;i++){
//         for(int j=0;j<8;j++){
//             if(arr[j]>arr[j+1]){
//                 swap(arr[j],arr[j+1]);
//             }
//         }
//     }

//     for (int i = 0; i < 8; i++) {
//         cout << arr[i] << " ";
//         //cout << endl;
//     }
// }
// int main(){
//     int p=2;
//     int arr[7]={1,23,12,9,30,2,50};
//     for(int i=0;i<7;i++){
//         for(int j=0;j<7;j++){
//             if(arr[j]>arr[j+1]){
//                 swap(arr[j],arr[j+1]);
//             }
//         }
//     }
//     for (int i = 0; i < 7; i++) {
//         cout << arr[i] << " ";
//         //cout << endl;
//     }

//     //cout<< arr[p];
// }

// int main(){

//     int arr[4]={2,3,2,2};
//     for(int i=0;i<4;i++){
//         int count=0;
//         for(int j=0;j<4;j++){
//             if(arr[i]==arr[j]){
//                 count++;
//             }
//         }
//         cout<<"for "<<arr[i]<<":"<<count<<endl;
//        +-break;
//     }
//     //break;
//     //cout<<count;
// }


//Given an array, rotate the array by one position in clock-wise direction.
// int main(){

//     int arr[8]={9, 8, 7, 6, 4, 2, 1, 3};
//     for(int i=7;i>0;i--){
//         swap(arr[i],arr[i-1]);
//     }
//     for (int i = 0; i < 8; i++) {
//         cout << arr[i] << " ";
//         //cout << endl;
//     }

// }

// int main(){

//     int arr[4]={1, 2, 3, 4};
//     int count=0;
//     for(int i=0;i<4;i++){
//         if(arr[i]==arr[i+1]){
//             count++;
//         }
//     }
//     if(count==0){
//         cout<<"-1";
//     }
//     else{
//         cout<<count+1;
//     }
// }

// int main(){

//     int arr[7]={1,0,0,1,0,1,1};
//     for(int i=0;i<7;i++){
//         for(int j=0;j<7;j++){
//             if(arr[i]+arr[j]==1 && (arr[i]==0 | arr[j]==0)){
//                 cout<<i<<" "<<j;
//             }
//         }
//     }

// }

// int partition(int arr[],int l, int h){

//     int i=l;
//     int j=h;
//     int pivot=arr[l];
//     while(i<j){

//         while(arr[i]<pivot){
//             i++;
//         }
//         while(arr[j]>pivot){
//             j--;
//         }
//         if(i<j){
//             swap(arr[i],arr[j]);
//         }
//     }
//     swap(pivot,arr[j]);
//     return j;

// }

// void quicksort(int arr[],int l, int h){
//     if(l<h){
//         int pivot=partition(arr,l,h);
//         quicksort(arr,l,pivot-1);
//         quicksort(arr,pivot+1,h);

//     }
// }

// int main(){

//     int arr[9]={7,6,10,5,9,2,1,15,7};
//     quicksort(arr,0,8);
//     //partition(arr,0,6);
//     for (int i = 0; i < 9; i++) {
//         cout << arr[i] << " ";
//         //cout << endl;
//     }

// }

int main(){
    int arr1[9]={1,2,3,4,5,6,7,8,9};
    int arr2[6]={1,2,3,5,7,9};
    //bool found;
    // int temp = arr1[i];
    for(int i=0;i<9;i++){
        int temp = arr1[i];
        bool found=false;
        for(int i=0;i<6;i++){
            if(temp==arr2[i]){
                found = true;
                break;
            }
        }
        if(!found){
            cout<<temp;
        }
    }
}