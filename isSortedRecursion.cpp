//isSorted using recursion?
#include <iostream>
using namespace std;
bool isSorted(int a[]){
    //base case
    if(a[1]<a[0]){
        return false;
    }
    isSorted(&a[1]);
    return true;
}
int main() {
    int a[10];
    for(int i=0;i<10;i++){
        cin>>a[i];
    }
    cout<<isSorted(a);
    return 0;
}