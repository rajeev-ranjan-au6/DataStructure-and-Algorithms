#include <iostream>
using namespace std;

int valid(char *name){
    int i;
    for(i=0; name[i]!='\0'; i++){
        if(!(name[i]>=65 && name[i]<=90)&&
        !(name[i]>=97 && name[i]<=122)&&
        !(name[i]>=48 && name[i]<=57))
        
        return 0;}
        return 1;
    
}

int main(){
    char *name="Anil";
    
    if(valid(name)){
        cout<<"valid"<<endl;
    }
    else{
        cout<<"Not valid"<<endl;
    }
}


#include <iostream>
using namespace std;

int main(){
    char name[] ="A354ni";
    int i;
    
    for(i=0; name[i]!='\0'; i++){
        if((name[i]>=65 && name[i]<=90)||(name[i]>=97 && name[i]<=122)){
       
        cout<<"valid string!"<<endl;
    }
    else{
        cout<<"not valid"<<endl;}
    }
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
    char A[]="Rajeev";
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




