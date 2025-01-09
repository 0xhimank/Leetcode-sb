//intersection of an array
#include <iostream>
using namespace std;
int main() {
    int a[10],b[10],t[10],n,m,start=0;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<m;i++){
        cin>>b[i];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i]==b[j]){
                t[start]=a[i];
                start++;
                
            }
        }
    }
    for(int i=0;i<start;i++){
        cout<<t[i]<<endl;
    }
    return 0;
}