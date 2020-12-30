#include <iostream>
using namespace std;

int main(){
    char *p = "WELCOME";
    int i;
    for(i=0; p[i]!='\0';i++){
        
    }
    cout<<i<<endl;
    return 0;
}


#include <iostream>
using namespace std;

int main(){
    char p[] = "WELCOME";
    int i;
    for(i=0; p[i]!='\0';i++){
        p[i]+=32;
    }
    cout<<p<<endl;
    
}


#include <iostream>
using namespace std;

int main(){
    char p[] = "WElcOME";
    int i;
    for(i=0; p[i]!='\0';i++){
        if(p[i]>=65 && p[i]<=90)
        p[i]+=32;
        
        else if (p[i]>='a' && p[i]<=122)
        p[i]-=32;
    }
    cout<<p<<endl;
    
}


#include <iostream>
using namespace std;

int main(){
    char p[] = "WElcOME";
    int vcount;
    int i;
    for(i=0; p[i]!='\0';i++){
        if(p[i]=='a'|| p[i]=='e'|| p[i]=='i'|| p[i]=='o'|| p[i]=='u'){
            vcount++;
        }
    }
    cout<<p<<endl;
    
}

#include <iostream>
using namespace std;

int main(){
    char p[] = "WElcOME";
    int vcount,ccount;
    int i;
    for(i=0; p[i]!='\0';i++){
        if(p[i]=='a'|| p[i]=='e'|| p[i]=='i'|| p[i]=='o'|| p[i]=='u'){
            vcount++;
        }
        else if((p[i]>=65 && p[i]<=90)||(p[i]>=97 && p[i]<=122)){
            ccount++;
        }
    }
}


#include <iostream>
using namespace std;

int main(){
    char p[] = "Hy u          boies all are fuckeer";
    int word = 1;
    int i;
    for(i=0; p[i]!='\0';i++){
        if(p[i]==' ' && p[i-1]!=' ')
        word++;
    }
    cout<<word<<endl;
}

#include <iostream>
using namespace std;

int main(){
    char p[] = "Hy u boies all are fuckeer";
    int word = 1;
    int i;
    for(i=0; p[i]!='\0';i++){
        if(p[i]==' ')
        word++;
    }
    cout<<word<<endl;
}


#include <iostream>
using namespace std;

int main(){
    char p[] ="killer";
    char B[7];
    int i,j;
    for(i=0; p[i]!='\0';i++){}
        i-=1;
       for(j=0; i>=0; i--, j++){
           B[j]=p[i];}
           B[j]='\0';
       cout<<B;
        
}
        
        



