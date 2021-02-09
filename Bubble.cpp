#include <iostream>
using namespace std;

void swap(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
};

void Bubble(int A[], int n){
    int i, j;
    for(i = 0; i < n-1; i++){
        for(j = 0; j < n-i-1; j++){
          
            if(A[j]>A[j+1]){
                swap(&A[j], &A[j+1]);
            }
        }
    }
};

int main(){
    int A[] = {10,50,20,60,25,65,30,45,85,1};
    int n = 10, i;
    Bubble(A,n);
    for(i = 0; i < n; i++)
    cout<<A[i]<<endl;
    return 0;
}

**********************using Flag**************


#include <iostream>
using namespace std;

void swap(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
};

void Bubble(int A[], int n){
    int i, j,Flag=0;
    for(i = 0; i < n-1; i++){
        Flag = 0;
        for(j = 0; j < n-i-1; j++){
          
            if(A[j]>A[j+1]){
                swap(&A[j], &A[j+1]);
                Flag = 1;
            }
        }
        if(Flag == 0)
        break;
    }
};

int main(){
    int A[] = {10,50,20,60,25,65,30,45,85,1};
    int n = 10, i;
    Bubble(A,n);
    for(i = 0; i < n; i++)
    cout<<A[i]<<endl;
    return 0;
}



