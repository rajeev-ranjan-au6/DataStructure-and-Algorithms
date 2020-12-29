#include <iostream>
using namespace std;

int main(){
    int A[]={10,20,30,40,50};
    int n=5;
    
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<A[i]<<endl;
    }
    return 0;
}


#include <iostream>
using namespace std;

int main(){
    int A[5]={10,20,30,40,50};
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<A[i]<<endl;
    }
    return 0;
}


#include <iostream>
using namespace std;

int main(){
    int A[5]={10,20,30,40,50};
    int n;
    cin>>n;
    for(int x:A){
        cout<<x<<endl;
    }
    return 0;
}


#include <iostream>
using namespace std;

int main(){
    int A[5]={10,20,30,40,50};
    int n;
    int sum=0;
    cin>>n;
    for(int i=0;i<n;i++){
        sum+=A[i];
    }
    cout<<sum<<endl;}
    
#include <iostream>
using namespace std;

int main(){
    int A[5]={10,20,30,40,50};
    int n=5;
    int max;
    max = A[0];
    for(int i=0; i<n; i++){
        if(A[i]>max){
            max = A[i];
        }
    }
    cout<<max<<endl;
    return 0;
}

#include <iostream>
using namespace std;

int main(){
    int A[]={2,4,6,8,10};
    int *p=A;
    cout<<*p<<endl;
    return 0;
}

