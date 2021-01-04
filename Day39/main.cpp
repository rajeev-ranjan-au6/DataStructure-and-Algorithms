// *********************Length of String****************


#include <iostream>
using namespace std;

int main(){
    char A[]="codechef";
    int i;
    
    for(i = 0; A[i]!='\0'; i++){
        
    }
    cout<<i<<endl; // 8
}      
    
    
    
// ************string converting UPPER case to lower case****************

#include <iostream>
using namespace std;

int main(){
    char A[]="HEY GOOGLE";
    int i;
    
    for(i = 0; A[i]!='\0'; i++){
        
        A[i]+=32;
    }
    cout<<A<<endl; // hey@google
}      

// ******String converting UPPER case to lower case****************

#include <iostream>
using namespace std;

int main(){
    char A[]="Hey Google";
    int i;
    
    for(i = 0; A[i]!='\0'; i++){
        if(A[i]>=65 && A[i]<=90)
        A[i]+=32;
        else if(A[i]>=97 && A[i]<=122)
        A[i]-=32;
    }
    cout<<A<<endl; // hEY gOOGLE

}      
