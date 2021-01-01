#include <iostream>
using namespace std;

int main(){
    int A[3][4] = {{1,2,3,12},{4,5,6,11},{7,8,9,10}};
    
    int *B[3];
    int **c;
    int i,j;
    
    B[0] = (int *)malloc(4*sizeof(int));
    B[1] = (int *)malloc(4*sizeof(int));
    B[2] = (int *)malloc(4*sizeof(int));
    
    c = (int **)malloc(3*sizeof(int));
    c[0] = (int *)malloc(4*sizeof(int));
    c[1] = (int *)malloc(4*sizeof(int));
    c[2] = (int *)malloc(4*sizeof(int));
    
    for(i = 0; i < 3; i++){
        for(j = 0; j < 4; j++){
            cout<<c[i][j]<<endl;
        }
        
    }
    return 0;
    
}
