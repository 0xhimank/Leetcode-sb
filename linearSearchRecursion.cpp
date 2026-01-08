//linear search using recursion
#include <iostream>
using namespace std;
bool isPresent(int a[],int find,int size){
    
    if(size==0){
        return false;
    }
    if(a[0]==find){
        return true; 
    }
    else{
        isPresent(&a[1],find,size-1);
    }
    

}
int main() {
    int a[8],find;
    for(int i=0;i<8;i++){
        cin>>a[i];
    }
    cin>>find;
    cout<<isPresent(a,find,8);

    return 0;
}