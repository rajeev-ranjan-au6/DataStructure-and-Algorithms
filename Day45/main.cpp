#include <iostream>
using namespace std;

int sum(int n){
    if(n == 0){
        return 0;}
        return sum(n-1)+n;
}

int Issum(int n){
    int i, s = 0;
    for(i = 0; i <= n; i++){
        s+=i;
    }
    return s;
}

int main(){
    int r = sum(5);
    cout<<r<<endl;
    return 0;
}


#include <iostream>
using namespace std;

int fact(int n){
    if(n == 0)
        return 1;
        return fact(n-1)*n;
}

int Isfact(int n){
    int i, fact = 1;
    for(i = 0; i <= n; i++)
        fact*=i;
    
    return fact;
}

int main(){
    int r = Isfact(5);
    cout<<r<<endl;
 
}




