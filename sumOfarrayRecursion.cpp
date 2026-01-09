#include <iostream>
using namespace std;
int sumOfArrUsRec(int a[],int size){
    if(size==0){
        return 0;
    }
    return a[0]+sumOfArrUsRec(&a[1],size-1);
}
int main() {
    //sum of array using recursion
    int a[5];
    for(int i=0;i<5;i++){
        cin>>a[i];
    }
    cout<<sumOfArrUsRec(a,5);

    return 0;
}   