#include <iostream>
using namespace std;

int main(){
    char c[] ="how are you";
    int i, vcount=0, ccount=0;
    
    for(i=0; c[i]!='\0'; i++){
        if(c[i]=='A'::c[i]=='E'::c[i]=='I'::c[i]=='O'::c[i]=='U'::c[i]=='a'::c[i]=='e'::c[i]=='i'::c[i]=='o'::c[i]=='u'){
            vcount++;
        
        }
        
        else if(c[i]>=65 && c[i]<=90)::(c[i]>=97 && c[i]<=122){
            ccount++;
        }
        
    }
}

#include <iostream>
using namespace std;

int main(){
    char A[] ="Ranjan";
    char B[7];
    int i,j;
    
    for(i=0; A[i]!='\0';i++){
    }
        i=i-1;
        
        for(j=0;i>=0;i--,j++){
            B[j]=A[i];
        }
        B[j]='\0';
    
        cout<<B;
    
}
