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
    int area, peri;
    Rectangle r;
    Rectangle *p;
    p=&r;
    
    p->len=10;
    p->bre=10;
    
    cout<<p->area()<<endl;
    cout<<p->peri()<<endl;
}


#include <iostream>
using namespace std;
class Rectangle{
    
private:

int len;
int bre;

public:
void setlen(int l){
    if(l>=0)
    len = l;
    else
    len = 0;
}

void setbre(int b){
    if(b>=0)
    bre = b;
    else
    bre = 0;
}

int getlen(){
    return len;
}
int getbre(){
    return bre;}
    
int area(){
    return len*bre;
}
};

int main(){
    int area;
    Rectangle r;
    r.setlen(10);
    r.setbre(5);
    
    cout<<r.area()<<endl;
    
}

