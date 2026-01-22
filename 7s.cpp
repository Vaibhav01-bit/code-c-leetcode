//second promblem solve me logic is my but some sytntax error but i solve it
#include <iostream>
using namespace std;


void mainarr(int arr[][3],int n , int m){
    int key =7;
    int count=0;
    
    for(int  i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i][j]==key){
                count++;
            }
        }
        
    }
  cout<<count<<endl;  
}

int main() {
    int arr[2][3]={{4,7,8},{8,8,7}};
    
   

   mainarr(arr, 2, 3);
    return 0;
}

