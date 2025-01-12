//first and last occurance of a key in a sorted array
#include <iostream>
using namespace std;
int main() {
    //brute force O(N) time and O(1) space
    int a[13]={1,2,3,4,4,4,5,6,7,7,7,8,9},size=13,key;
    int firstOccurance=0,lastOccurance=0,flag=0;
    cin>>key;
    for(int i=0;i<size;i++){
        if(key==a[i]){
            lastOccurance=i;
            flag++;
        }
    }
    firstOccurance=lastOccurance-flag;
    cout<<"first lastOccurance of key"<<key<< "at "<< firstOccurance<< "and lastOccurance at "<< lastOccurance;


    return 0;
}