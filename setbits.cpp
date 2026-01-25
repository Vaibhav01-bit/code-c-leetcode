// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int setbit(int num){
    
    int count=0;
    
    while(num>0){
        int lastdig =num & 1;
        
        count +=lastdig;
        
        num=num >>1;
        
      
    }
     cout<<count<<endl;
        
    return count;
}

int main() {
    // Write C++ code here
   setbit(10);
   
    return 0;
}