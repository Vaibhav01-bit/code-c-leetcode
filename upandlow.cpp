//toupper case and lower case 
// Online C++ compiler to run C++ program online
#include <iostream>
#include <cstring>
using namespace std;

void toupper(char word[],int n){
   
    for(int i=0;i<n;i++){
         char ch =word[i];
        if (ch>='a'&& ch<= 'z' ){
            continue;
        }else{
            word[i]=ch -'A'+'a';
        }
    }
    cout<<word<<endl;
}
void toupper2(char word[],int n){
   
    for(int i=0;i<n;i++){
         char ch =word[i];
        if (ch>='A'&& ch<= 'Z' ){
            continue;
        }else{
            word[i]=ch -'a'+'A';
        }
    }
    cout<<word<<endl;
}
int main() {
    // Write C++ code here
   char word[]="ApplE";
   
   
   toupper(word,strlen(word));
   toupper2(word,strlen(word));
   
   
   

    return 0;
}