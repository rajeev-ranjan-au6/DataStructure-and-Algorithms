#include <iostream>
using namespace std;

int main(){
    int A[5] = {10,20,30,40,50};
    int *p;
    int i;
    
    p = (int *)malloc(5*sizeof(int));
    p[0] = 2;
    p[1] = 4;
    p[2] = 6;
    p[3] = 8;
    p[4] = 10;
    
    for(i = 0; i<5; i++){
        cout<<A[i]<<endl;}
        
         cout<<"\n";
         for(i = 0; i<5;i++){
        cout<<p[i]<<endl;
    }
    return 0;
}


#include <iostream>
using namespace std;

int main(){
    int A[5] = {10,20,30,40,50};
    int *p,*q;
    int i;
    
    p = (int *)malloc(5*sizeof(int));
    p[0] = 2;
    p[1] = 4;
    p[2] = 6;
    p[3] = 8;
    p[4] = 10;
    
    q= (int *)malloc(5*sizeof(int));
    for(i = 0; i < 5; i++ )
    q[i]=p[i];
    free(p);
    p=q;
    q=NULL;
    
    for(i = 0; i < 5; i++){
        cout<<p[i]<<endl;
    }
    return 0;
}



