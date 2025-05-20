//selection sort
#include <iostream>
using namespace std;
int main() {
    int a[5]={3,6,5,4,2},midIndex;
    for(int i=0;i<4;i++){
        midIndex=i;
        for(int j=i+1;j<5;j++){
            if(a[j]<a[midIndex]){
                midIndex=j;
            }
        }
        swap(a[i],a[midIndex]);
    }
    for(int i=0;i<5;i++){
        cout<<a[i]<<endl;
    }

    return 0;
}