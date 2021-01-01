#include <iostream>
using namespace std;

int main(){
    int A[] = {10,20,36,56,11};
    
    for(int i = 0; i <5; i++){
        cout<<A[i]<<endl;
    }
    return 0;
}


#include <iostream>
using namespace std;

int main(){
    int A[5] = {10,20,36,56,11};
    
    for(int i = 0; i < 5; i++){
        cout<<A[2]<<" "<<A[1]<<" "<<A[0]<<endl;
    }
    return 0;
}


#include <iostream>
using namespace std;

int main(){
    int A[5] = {10,20,36,56,11};
    
    for(int i = 0; i < 5; i++){
        cout<<A[2]<<endl;
    }
    return 0;
}


#include <iostream>
using namespace std;

int main(){
    int A[5] = {10,20,36,56,11};
    int *p;
    p = (int*)malloc(5*sizeof(int));
    p[0]=11;
    p[1]=12;
    p[2]=13;
    p[3]=14;
    p[4]=15;
    
    for(int i = 0; i < 5; i++){
        cout<<A[i]<<endl;
    }
    
    cout<<"\n";
    
    for(int i = 0; i < 5; i++){
        cout<<p[i]<<endl;
    }
    return 0;
}


#include <iostream>
using namespace std;

int main(){
    int A[5] = {10,20,36,56,111};
    int *p,*q;
    p = (int*)malloc(5*sizeof(int));
    p[0]=11;
    p[1]=12;
    p[2]=13;
    p[3]=14;
    p[4]=15;
    for(int i = 0; i < 5; i++){
        cout<<A[i]<<endl;
    }
    
    cout<<"\n";
    
    q = (int*)malloc(10*sizeof(int));
    
    for(int i = 0; i < 5; i++)
        q[i]=p[i];
        free(p);
        p = q;
        q = NULL;
    
    for(int i = 0; i < 5; i++){
        cout<<p[i]<<endl;
    }
    return 0;
}


#include <iostream>
using namespace std;

void fun1(int n){
    if(n>0){
        cout<<n<<endl;
        fun1(n-1);
    }
}

int main(){
    int n = 3;
    fun1(n);
}


#include <iostream>
using namespace std;

void fun1(int n){
    if(n>0){
        
        fun1(n-1);
        cout<<n<<endl;
    }
}

int main(){
    int n = 3;
    fun1(n);
}

#include <iostream>
using namespace std;

int sum(int n){
    if(n == 0)
    return 0;
    return sum(n-1)+n;
    
}

int Isum(int n){
    int s = 0, i;
    for(i = 0; i <= n; i++)
    s += i;
    return s;
    
}

int main(){
    int r = sum(5);
    cout<<r<<endl;
    return 0;
}

