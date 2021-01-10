#include <iostream>
using namespace std;

int main(){
    int A[5]={10,20,30,40,50};
    int i;
    int n = 5;
    for(i = 0; i < n; i++){
        cout<<A[i]<<endl;
       
    }
}


#include <iostream>
using namespace std;

int main(){
    int A[5]={10,20,30,40,50};
    int i;
    int *p;
    int n = 5;
    p=(int *)malloc(5* sizeof(int));
    p[0] = 1;
    p[1] = 2;
    p[2] = 3;
    p[3] = 4;
    p[4] = 5;
    for(i = 0; i < n; i++){
        cout<<A[i]<<endl;
    }   
   cout<<"\n";
    for(int i = 0; i < n; i++){
        cout<<p[i]<<endl;
    }
}


#include <iostream>
using namespace std;

int main(){
    int A[5]={10,20,30,40,50};
    int i;
    int *p,*q;
    int n = 5;
    p=(int *)malloc(5* sizeof(int));
    p[0] = 1;
    p[1] = 2;
    p[2] = 3;
    p[3] = 4;
    p[4] = 5;
    p[5] = 6;
    p[6] = 7;
    p[7] = 8;
    
    q=(int *)malloc(10* sizeof(int));
    
    for(i = 0; i < n; i++)
        q[i] = p[i];
        free(p);
        p = q;
        q = NULL;

    for(i = 0; i < n; i++)
        cout<<p[i]<<" "<<A[i]<<endl;
    
}



