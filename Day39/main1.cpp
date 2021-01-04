//  *********************no. of vowels in a string****************

#include <iostream>
using namespace std;

int main(){
    char A[]="hey google";
    int i, vcount=0;
    
    for(i=0; A[i]!='\0'; i++){
        if(A[i]=='a' || A[i]=='e' || A[i]=='i' || A[i]=='o' || A[i]=='u'){
            vcount++;}
        }
        cout<<vcount<<endl; // 4
}
