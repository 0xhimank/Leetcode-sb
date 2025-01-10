//binary search
#include <iostream>
using namespace std;
int binarySearch(int a[],int size,int key){
    int start = 0;
    int end= size-1;
    int mid=start + (end-start)/2;
    while (start<=end){
        if(a[mid]==key){
            return mid;
        }
        else if(a[key]>mid){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid=start + (end-start)/2;
    }
    return 10;
}
int main() {
    int a[5]={1,2,3,4,5};
    cout<<binarySearch(a,5,3);


    return 0;
}