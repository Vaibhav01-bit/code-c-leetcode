#include <iostream>
using namespace std;

void printarr(int arr[],int n){
        for (int i =0;i<=n;i++){
            cout<<arr[i]<<endl;
        }
    }
    // W

int main() {
   
  
   int arr[]={1,2,3,4,5};
   int n = sizeof (arr)/sizeof(int);
   
   int start =0, end=n-1;
   //this  one step or logic behind swap
//    while(start<end){
//        int temp = arr[start];
//        arr[start]=arr[end];
//        arr[end]=temp;
//        start++;
//        end--;
      
       
      
//    }
//this a second methhod or inbuild method of swaping 
while(start<end){
    swap(arr[start],arr[end]);
    start++;
    end--;
}
   printarr(arr, n);
   

    return 0;
}