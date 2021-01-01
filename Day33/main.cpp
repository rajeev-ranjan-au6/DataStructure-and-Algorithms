#include <iostream>
using namespace std;

void fun1(int n){
    if(n>0){
        cin<<n;
        fun1(n-1);
    }
}

void main(){
    int x = 3;
    fun1(x);
}


#include <iostream>
using namespace std;

int main(){
    int A[5] = {2,4,6,8,10};
    int *p;
    int i;
    
    p = (int *)malloc(5*sizeof(int));
    p[0]=5;
    p[1]=7;
    p[2]=8;
    p[3]=9;
    p[4]=11;
    
    for(i=0;i<5;i++)
    cout<<A[i]<<endl;
    
    for(i=0;i<5;i++)
    cout<<p[i]<<endl;
    
    return 0;
}


#include <iostream>
using namespace std;

int main(){
    int *p, *q, i;
    
    p=(int *)malloc(5*sizeof(int));
    p[0] = 2;
    p[1] = 4;
    p[2] = 6;
    p[3] = 8;
    p[4] = 11;
    
    q=(int *)malloc(10*sizeof(int));
    for(i = 0; i < 5; i++)
        q[i] = p[i];
        free(p);
        p=q;
        q=NULL;
        
        for(i = 0; i < 10; i++)
        cout<<p[i]<<endl;
        return 0;
}


#include <iostream>
using namespace std;

int main(){
    int A[] = {10,20,30,40,50};
    int n = 5;
    for(int i = 0; i <n; i++){
        cout<<A[i]<<endl;}
        cout<<"\n";
        cout<<A[2]<<endl;
}


    
    
}


