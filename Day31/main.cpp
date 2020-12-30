#include <iostream>
using namespace std;

class Base{
    public:
    int x;
    
    void show(){
        cout<<x<<endl;
    }
};

class Derived : public Base{
    public:
    int y;
    
    void display(){
        cout<<x<<" "<<y<<endl;
    }
};

int main(){
    Base b;
    b.x = 10;
    b.show();
    
    Derived d;
    d.x = 15;
    d.y = 20;
    d.display();
}


#include <iostream>
using namespace std;

class Base{
    public:
    int a;
    
    void show(){
        cout<<a<<endl;
    }
};

class Derived : public Base{
    public:
    int y;
    
    void display(){
        cout<<"show of Derived!"<<endl;
    }
};

int main(){
   
    Derived d;
    d.a = 15;
   // d.y = 20;
   d.show();
    d.display();
    
}

#include <iostream>
using namespace std;

class Base{
    public:
    void fun1();
    void fun2();
    void fun3();
};

class Derived : public Base{
    public:
    
    void fun4();
    void fun5();
    
};

int main(){
    Base *p;
    p->fun1();
    p->fun2();
    p->fun3();
   // p->fun4();
  // p->fun5();
}





