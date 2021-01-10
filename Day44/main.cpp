#include <iostream>
using namespace std;

int main(){
    char A[]="welcome";
    int i;
    
    for (i = 0; A[i]!='\0'; i++){
        
    }
    cout<<i<<endl;
}


#include <iostream>
using namespace std;

int main(){
    char A[]="WELCOME";
    int i;
    
    for (i = 0; A[i]!='\0'; i++){
        A[i]+=32;
    }
    cout<<A<<endl;
}


#include <iostream>
using namespace std;

int main(){
    char A[]="WELCOME";
    int i;
    
    for (i = 0; A[i]!='\0'; i++){
        if(A[i]>=65 && A[i]<=97)
        A[i]+=32;
    
    else if(A[i]>=97 && A[i]<=122)
        A[i]-=32;
    }
    cout<<A<<endl;
}


#include <iostream>
using namespace std;

int main(){
    char A[]="wlcomE"; 
    int i, vcount=0;
    
    for (i = 0; A[i]!='\0'; i++){
        if(A[i]=='a'||A[i]=='e'||A[i]=='i'||
        A[i]=='o'||A[i]=='u'||A[i]=='A'||A[i]=='E'
        ||A[i]=='I'||A[i]=='O'||A[i]=='U'){
            
    
        vcount++;
        }
    }
    
    cout<<vcount<<endl;
}



#include <iostream>
using namespace std;

int main(){
    char A[]="wlcomE"; 
    int i, vcount=0, ccount=0;
    
    for (i = 0; A[i]!='\0'; i++){
        if(A[i]=='a'||A[i]=='e'||A[i]=='i'||
        A[i]=='o'||A[i]=='u'||A[i]=='A'||A[i]=='E'
        ||A[i]=='I'||A[i]=='O'||A[i]=='U'){
            
    
        vcount++;
        }
        
        else if((A[i]>=65 && A[i]<=97) || (A[i]>=97 && A[i]<=122)){
            ccount++;
        }
    }
    
    cout<<vcount<<" "<<ccount<<endl;
}


#include <iostream>
using namespace std;

int main(){
    char A[]="wlcom    E"; 
    int i, word=0;
    
    for (i = 0; A[i]!='\0'; i++){
        if(A[i]==' '){
            word++;
        }
    }
    
    cout<<word<<endl;
}


#include <iostream>
using namespace std;

int main(){
    char A[]="wlcom   E"; 
    int i, word=0;
    
    for (i = 0; A[i]!='\0'; i++){
        if(A[i]==' ' && A[i-1]!=' '){
            word++;
        }
    }
    
    cout<<word<<endl;
}


#include <iostream>
using namespace std;

int valid(char* A){
    int i;
    
    for (i = 0; A[i]!='\0'; i++){
        if(!(A[i]>=65 && A[i]<=90)||(A[i]>=97 && A[i]<=122)||(A[i]>=48 && A[i]<=57)){
            return 0;
        }
        return 1;
    }
};

int main(){
    char *A="wlcomE"; 
    if(valid(A)){
        cout<<"VAlid"<<endl;
    }
    else
    cout<<"not VAlid"<<endl;
}


#include <iostream>
using namespace std;

int main(){
    char A[]="python";
    char B[7];
    int i,j;
    
    for(i=0; A[i]!='\0'; i++){
        
    }
    i-=1;
    
    for(j=0; i>=0; i--, j++){
        B[j]=A[i];}
        B[j]='\0';
    
    cout<<B<<endl;
}


#include <iostream>
using namespace std;

int main(){
    char A[]="python";
    char t;
    int i,j;
    
    for(j=0; A[j]!='\0'; j++){
        
    }
    j-=1;
    
    for(i=0; i<j; i++, j--){
        t=A[i];
        A[i]=A[j];
        A[j]=t;
    }
    
    cout<<A<<endl;
}



