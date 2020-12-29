#include <iostream>
using namespace std;

int main(){
    char *s ="welcome";
    int i;
    
    for(i = 0; s[i]!='\0'; i++){
        
    }
    cout<<"The Lenght is!"<<i<<endl;
    return 0;
}

#include <iostream>
using namespace std;

int main(){
    char c[] ="WELcOME";
    int i;
    
    for(i=0; c[i]!='\0'; i++){
        if(c[i]>=65 && c[i]<=90)
        c[i]=c[i]+32;
        else if(c[i]>='a' && c[i]<=122)
        c[i]-=32;
        
    }
    
    cout<<c<<endl;
}
