#include <iostream>
using namespace std;

int main(){
    char A[] = "WELCOME";
    int i;
    
    for(i=0; A[i]!='\0';i++){
        A[i]=A[i]+32;
        
    }
    cout<<"Hey boies:"<<A<<endl;
    return 0;
    
}

#include <iostream>
using namespace std;

int main(){
    char A[] = "wElcOME";
    int i;
    
    for(i=0; A[i]!='\0';i++){
        if(A[i]>='65' && A[i]<=90)
        A[i]+=32;
        else if(A[i]>='a' && A[i]<=122)
        A[i]-=32;
        
    }
    cout<<A;
}
