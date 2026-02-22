//first ocuurrence code

#include<iostream>
using namespace std;

void printfirst(int arr[],int n,int key){
    for(int i=0;i<n;i++)
    if(arr[i]==key){
        cout<<"first occuesernce of "<<key<<" is at index "<<i<<endl;
        return;
    }
    cout<<"not found";

}



int main (){
    int arr[]={1,2,3,4,5};
    int n = sizeof(arr)/sizeof(int);
    printfirst(arr,n,3);
    return 0;
}