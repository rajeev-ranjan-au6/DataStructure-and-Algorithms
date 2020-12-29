#include <iostream>
using namespace std;

int add(int x, int y){
    int z;
    z=x+y;
    return z;
}

int main(){
    int a=10,b=11,c;
    c=add(a,b);
    cout<<c<<endl;
}


#include <iostream>
using namespace std;

int add(int x, int y){
    int z;
    z=x+y;
    return z;
}

int main(){
    int x,y,z;
    cin>>x>>y;
    z=add(x,y);
    
    cout<<z;
}

#include <iostream>
using namespace std;

void display(){
    cout<<"hy Boies!!"<<endl;
}

int main(){
    display();
    return 0;
}


#include <iostream>
using namespace std;

int maxim(int a, int b, int c){
    if(a>b && a>c){
        return a;
    }
    else if(b>c){
        return b;
    }
    else
    return c;
}

int main(){
    int a,b,c;
    cin>>a>>b>>c;
    int r=maxim(a,b,c);
    
    cout<<r<<endl;
    return 0;
}


#include <iostream>
using namespace std;

int add(int x, int y){
    return x+y;
}

int add(int x, int y, int z){
    return x+y+z;
}

float add(float x, float y){
    return x+y;
}

int main(){
    int a=10, b=5, c,d;
    c=add(a,b);
    d=add(a,b,c);
    int i=2.5f, j=3.5f, k;
    k= add(i,j);
    cout<<" "<<c<<" "<<d<<" "<<k<<endl;
}


