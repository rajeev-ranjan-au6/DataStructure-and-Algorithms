#include <iostream>
using namespace std;

int main(){
    int A[5] = {10,20,30,40,50};
    int i;
    
    int *p;
    p = new int[5];
    p = (int*)malloc(5*sizeof(int));
    p[0] = 0;
    p[1] = 1;
    p[2] = 2;
    p[3] = 3;
    p[4] = 4;
    
    for (int i = 0; i < 5; i++){
        cout<<A[i]<<endl;
    }
    cout<<"\n";
    for (int i = 0; i < 5; i++)
    cout<<p[i]<<endl;
    return 0;
}
