// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std ;

void printsubarrays(int *arr, int n){
    for (int start =0; start<n;start++){
        
        for(int end=start;end<n;end++){
            
            // cout<<start<<" "<<end<<" "<<endl;
            for(int i =start;i<=end;i++){
                cout<<arr[i];
                
            }
            cout<<",";
            
        }
        
    }
    cout<<endl;
    
}

int main() {
    // Write C++ code here
    int arr[]={1,2,3,4,5};
    int n = sizeof(arr)/sizeof(int);
    printsubarrays(arr,n);
    return 0;
}