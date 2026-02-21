//recursion in print number in decreasing oder from n to 1;

// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

void print(int n){
    if(n==0){
        return;
        
    }
    
    cout<<n<<" ";
    print(n-1);
}


int main() {
    // Write C++ code here
    print(100);

    return 0;
}