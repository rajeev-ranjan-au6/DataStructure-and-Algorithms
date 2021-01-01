#include <iostream>
using namespace std;

void fun1(int n){
    if(n>0)
    cout<<n<<endl;
    fun1(n-1);
};

int main(){
    int n = 3;
    fun1(n);
}

#include <iostream>
using namespace std;

void fun1(int n){
    if(n>0)
    fun1(n-1);
    cout<<n<<endl;
    
};

int main(){
    int n = 3;
    fun1(n);
}


#include <iostream>
using namespace std;

int main(){
    int i,j;
    
    int A[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    
    for(i = 0; i < 3; i++){
        for(j = 0; j < 4; j++){
            cout<<A[i][j]<<endl;
        }
    }
    return 0;
}


