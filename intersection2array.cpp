//intersection of 2 arrays using 2 pointers
#include <iostream>
using namespace std;
int main() {
    int a[10],b[10],t[10],n,m,p1=0,p2=0,start=0;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<m;i++){
        cin>>b[i];
    }
    while(p1<n && p2<m){
        if(a[p1]==b[p2]){
            t[start]=a[p1];
            p1++;
            p2++;
            start++;
        }
        else if(a[p1]<b[p2]){
            p1++;
            
        }
        else {
            p2++;
            
        }
    }
    
    for(int i=0;i<start;i++){
        cout<<t[i]<<" ";
    }

    return 0;
}