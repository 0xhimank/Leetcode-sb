//find square root of x without using inbuilt function in O(logN)
#include <iostream>
using namespace std;
int main() {
    int n,start,end,mid,ans;
    cin>>n;
    start=0;
    end=n-1;
    mid=start+(end-start)/2;
    while(start<=end){
        if((mid*mid)==n){
            ans=mid;
            break;
        }
        else if((mid*mid)>n){
            end=mid-1;
        }
        else if((mid*mid)<n){
            ans=mid;
            start=mid+1;
       }
       mid=start+(end-start)/2;
    }
    cout<<ans;
    return 0;
}   