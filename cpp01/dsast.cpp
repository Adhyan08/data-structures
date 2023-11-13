#include<iostream>
using namespace std;
void merge(int arr[],int l,int h,int m){
    int l1=m-l+1;
    int l2=h-m;
    int a1[l1];
    int a2[l2];
    int L=l;
    for(int i=0;i<l1;i++)
    {
        a1[i]=arr[L++];

    }
    L=m+1;
    for(int i=0;i<l2;i++)
    {
        a2[i]=arr[L++];
    }

    int ind1=0;
    int ind2=0;
    int maini=0;
    while(ind1<l1 && ind2<l2)
    {
        if(a1[ind1]<a2[ind2])
        {
            arr[maini]=a1[ind1];
            ind1++;
                }
        else
        {
            arr[maini]=a2[ind2];
            ind2++;
       }
       maini++;
    }
    while(ind1<l1)
    {
        arr[maini]=a1[ind1++];
        
    }
    while(ind2<l2)
    {
        arr[maini]=a2[ind2++];
    }
}
void merges(int arr[],int s,int e){
    int mid=(s+e)/2;
    merges(arr,s,mid);
    merges(arr,mid+1,e);
    merge(arr,s,e,mid);
}
int main(){
    int arr[5]={4,5,2,1,2};
    merges(arr,0,5);
    for(int i=0;i<5;i++)
    {
        cout<<arr[i];
    }
}