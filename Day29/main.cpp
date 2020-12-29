#include <iostream>
using namespace std;

int sum(int a, int b){
    return a+b;
    
}
int sum(int a, int b, int c){
    return a+b+c;
}

float sum(float a, float b){
    return a+b;
}

int main(){
    cout<<sum(10,5)<<endl;
    cout<<sum(10,20,30)<<endl;
    cout<<sum(10.5f,5.5f)<<endl;
    return 0;
}


#include <iostream>
using namespace std;

int sum(int a, int b, int c=0){
    return a+b+c;
    
}

int main(){
    cout<<sum(10,20,3)<<endl;
    return 0;
}


#include <iostream>
using namespace std;

void swap(int a, int b){
    int temp;
    temp = a;
    a = b;
    b = temp;
    
}

int main(){
    int a,b;
    cin>>a>>b;
    swap(b,a);
    
    cout<<a<<" "<<b<<" "<<endl;
    return 0;
}

#include <iostream>
using namespace std;

void swap(int *a, int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
    
}

int main(){
    int x,y;
    cin>>x>>y;
    swap(&x, &y);
    cout<<x<<" "<<y<<endl;
    return 0;
}

#include <iostream>
using namespace std;

void swap(int &a, int &b){
    int temp;
    temp=a;
    a=b;
    b=temp;
    
}

int main(){
    int x,y;
    cin>>x>>y;
    swap(x, y);
    cout<<x<<" "<<y<<endl;
    return 0;
}


#include <iostream>
using namespace std;
class Rectangle{
    

public:
int len;
int bre;

int area(){
    return len*bre;
}

int peri(){
    return 2*(len+bre);
}
};
int main(){
    int len,peri;
    Rectangle r1, r2;
    r1.len = 10;
    r1.bre = 10;
    
    r2.len = 20;
    r2.bre = 20;
    
    cout<<r1.area()<<" "<<r1.peri()<<" "<<r2.area()<<" "<<r2.peri()<<endl;
    return 0;
}


