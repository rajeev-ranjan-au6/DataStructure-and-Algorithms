#include <iostream>
using namespace std;

int main(){
    int A[]={10,20,30,40,50};
    int i;
    int n = 5;
    
    for(i = 0; i < n; i++){
        cout<<A[i]<<endl;
    }
    return 0;
}


#include <iostream>
using namespace std;

int main(){
    int A[]={10,20,30,40,50};
    int i;
    int n = 5;
    
    for(i = 0; i < n; i++){
        cout<<i<<endl;
    }
    return 0;
}


#include <iostream>
using namespace std;

int main(){
    int A[]={10,20,30,40,50};
    int i;
    int n = 5;
    
    for(i = 0; i < n; i++){
        cout<<A[3]<<endl;
    }
    return 0;
}


#include <iostream>
using namespace std;

int main(){
    int A[]={10,20,30,40,50};
    int i;
    int n = 5;
    int *p;
    
    p=(int*)malloc(5* sizeof(int));
    p[0] = 1;
    p[1] = 2;
    p[2] = 3;
    p[3] = 4;
    p[4] = 5;
    
    for(i = 0; i < n; i++){
        cout<<A[i]<<endl;
    }
    cout<<'\n';
    
    for(i = 0; i < n; i++){
        cout<<p[i]<<endl;
    }
}


#include <iostream>
using namespace std;

int main(){
    int i;
    int *p,*q;
    
    p=(int*)malloc(5* sizeof(int));
    p[0] = 1;
    p[1] = 2;
    p[2] = 3;
    p[3] = 4;
    p[4] = 5;
    q=(int*)malloc(10* sizeof(int));
    for(i = 0; i < 5; i++){
        q[i]=p[i];
        free(p);
        p=q;
        q=NULL;

    for(i = 0; i < 5; i++)
        cout<<p[i]<<endl;
    }
    return 0;
}




