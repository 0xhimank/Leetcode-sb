// first and last element in a sorted array using binary search O(logN) time complexity
#include <iostream>
using namespace std;
int firstOccurance(int a[],int n,int key){
    int start=0,ans=-1;
    int end=n-1;
    int mid=start+(end-start)/2;
    while(start<=end){
        if(a[mid]==key){
            ans=mid;
            end=mid-1;
        }
        else if(a[mid]<key){
            start=mid+1;
        }
        else {
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }
    return ans;
}
int lastOccurance(int a[],int n,int key){
    int start=0,ans=-1;
    int end=n-1;
    int mid=start+(end-start)/2;
    while(start<=end){
        if(a[mid]==key){
            ans=mid;
            start=mid+1;
        }
        else if(a[mid]<key){
            start=mid+1;
        }
        else {
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }
    return ans;
}
int main() {
    int a[10],n,key;
    cout<<"size of array?"<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"key you want to find?"<<endl;
    cin>>key;
    cout<<firstOccurance(a,n,key)<<" ";
    cout<<lastOccurance(a,n,key);

    return 0;
}