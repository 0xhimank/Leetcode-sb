//leetcode: Single number, find unique element in an array;
#include <iostream>
using namespace std;
int main() {
    int a[10],n,xorsum=0;
    cin>>n;
    for(int i=0;i<n;i++){
    	cin>>a[i];
    }
    for(int i=0;i<n;i++){
    	xorsum = xorsum ^ a[i];
    }
    cout<<xorsum;

    return 0;
}