#include <iostream>
using namespace std;

int add(int x, int y){
    int z =x+y;
    return z;
}

int main(){
    int x,y,z;
    cin>>x>>y;
    z=add(x,y);
    cout<<z<<endl;
    return 0;
}


#include <iostream>
using namespace std;

void display(){
    cout<<"Hey Boies! :)"<<endl;
}

int main(){
    display();
    // return 0;
}

#include <iostream>
using namespace std;

float add(float x, float y){
    float z = x+y;
    return z;
}

int main(){
    float x, y, z;
    cin>>x>>y;
    z = add(x,y);
    cout<<z<<endl;
    //return 0;
}


#include <iostream>
using namespace std;

int max(int a, int b, int c){
    if(a>b && a>b){
        return a;
        
    }
    else if(b>c){
        return b;
    }
    else
    return c;
};

int main(){
    int a,b,c;
    cin>>a>>b>>c;
    
    int abc = max(a,b,c);
    
    cout<<abc<<endl;
    return 0;
    
}

#include <iostream>
using namespace std;

int add(int a, int b){
    return a+b;
    
}
int add(int a, int b, int c){
    return a+b+c;
}

float add(float i, float j){
    return i+j;
}

int main(){
    int a,b,c,d;
    cin>>a>>b;
    c=add(a,b);
    d=add(a,b,c);
    
    int i,j,k;
    cin>>i>>j;
    k=add(i,j);
    
    cout<<c<<" "<<d<<" "<<k<<endl;
    return 0;
}



