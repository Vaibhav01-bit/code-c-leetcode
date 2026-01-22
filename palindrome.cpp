// Online C++ compiler to run C++ program online
#include <iostream>
#include <cstring>
using namespace std;


bool isPalindrome(char str[], int n){

    int st =0, end=n-1;
    
    while(st<end){
        if(str[st++] != str[end--]){
            cout<<"not valid palindrome\n";
            return false;
        }
    }
   cout<<" valid palindrome\n";
   return true; 
}



int main() {
    // Write C++ code here
   char word[100];
   cout<<"enter a word =";
   
   cin>>word;
  
   isPalindrome(word,strlen(word));
   
   

    return 0;
}