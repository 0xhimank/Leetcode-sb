//binary search using recursion, get index?
#include <iostream>
using namespace std;
int binarySearchRecursion(int a[],int start,int end,int key){
    int mid = start+(end-start)/2;
    if(a[mid]==key){
        return mid;
    }
    if(start>end){
        return -1;
    }

    else if(a[mid]<key){
        return binarySearchRecursion(a,mid+1,end,key);
    }
    else if(a[mid]>key){
        return binarySearchRecursion(a,start,mid-1,key);
    }
}
int main() {
    int a[5],size=5,start=0,end=size-1,key;
    for(int i=0;i<size;i++){
        cin>>a[i];
    }
    cin>>key;
    cout<<binarySearchRecursion(a,start,end,key);

    return 0;
}