#include <iostream>
using namespace std;

void swap(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
};

void Insert(int A[], int n){
    int i,j,x;
    for(i = 1; i < n; i++){
        j=i-1;
        x=A[i];
        
        while(j>-1 && A[j]>x){
            A[j+1] = A[j];
            j--;
            
        }
        A[j+1] = x;
    }
};

int main(){
    int A[] = {10,50,20,60,25,65,30,45,85,1};
    int n = 10, i;
    Insert(A,n);
    for(i = 0; i < n; i++)
    cout<<A[i]<<endl;
    return 0;
}

