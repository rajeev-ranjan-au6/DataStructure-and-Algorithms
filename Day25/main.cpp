#include <iostream>
using namespace std;

int main(){
    cout<<"Hello"<<endl;
    return 0;
    
}

#include <iostream>
using namespace std;

int main(){
    string name;
    cin>>name;
    cout<<"Hy it's"<<name<<endl;
    return 0;
    
}

#include <iostream>
using namespace std;

int main(){
    string name;
    getline(cin,name);
    cout<<"Hy it's"<<" "<<name<<endl;
    return 0;
    
}

#include <iostream>
using namespace std;

int main(){
    int a,b,sum;
    sum=0;
    cin>>a>>b;
    sum = a+b;
    cout<<sum<<endl;
    return 0;
    
}

#include <iostream>
using namespace std;

int main(){
    int a,b,sum;
    sum=0;
    cout<<"Enter a and b man!"<<endl;
    cin>>a>>b;
    sum = a+b;
    cout<<sum<<endl;
    return 0;
    
}

#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int breath, height, Area;
    
    cin>>breath>>height;
    Area =(breath*height)/2;
    cout<<Area;
}

#include <iostream>
using namespace std;

int main(){
    int len,brea, peri;
    cin>>len>>brea;
    peri = 2*(len+brea);
    cout<<peri<<endl;
    return 0;
}

#include <iostream>
using namespace std;

int main(){
    int n, sum;
    cin>>n;
    sum = n*(n+1)/2;
    cout<<sum<<endl;
    return 0;
}

#include <iostream>
using namespace std;

int main(){
    int n, t, a,d;
    cin>>a>>n>>d;
    t=a+(n-1)*d;
    cout<<t<<endl;
    return 0;
}

//Conditional statement

#include <iostream>
using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    if(a>b)
    cout<<a<<endl;
    else
    cout<<b<<endl;
    
    return 0;
}


#include <iostream>
using namespace std;

int main(){
    int a,b,c;
    cin>>a>>b>>c;
    if(a>b && a>c)
    cout<<a<<endl;
    else if(b>c)
    cout<<b<<endl;
    else
    cout<<c<<endl;
    
    return 0;
}

#include <iostream>
using namespace std;

int main(){
    int a,b,div;
    cin>>a>>b;
    if(a==0)
        cout<<"A can't be Null:"<<endl;
        else
        div=a/b;
        cout<<div<<endl;
    
}

#include <iostream>
using namespace std;

int main(){
    int hr;
    cin>>hr;
    if(hr>20)
    cout<<"Adult"<<endl;
    else
    cout<<"Baby"<<endl;
    
}

//Looping:

#include <iostream>
using namespace std;

int main(){
    int i,n;
    cin>>n;
    for(i=0; i<10; i++){
        cout<<i<<endl;
    }
    return 0;
}

#include <iostream>
using namespace std;

int main(){
    int i,n;

    cin>>n;
    while(i<n){
        i++;
    cout<<i<<endl;    
    }
    return 0;
}

#include <iostream>
using namespace std;

int main(){
    int i,n;
    i = 0;
    cin>>n;
    do{
        cout<<i<<endl;
        i++;
    }
    while(i<n);
    //return 0;
}


#include <iostream>
using namespace std;

int main(){
    int i,n;
    cin>>n;
    for(i=1;i<=n;i++){
        cout<<"Table of" <<" "<<n<<"-> "<<i*n<<endl;
        
    }
    return 0;
}

#include <iostream>
using namespace std;

int main(){
    int i,n;
    int sum;
    cin>>n;
    for(i=1;i<=n;i++){
        sum+=i;
    }
    std::cout << sum << std::endl;
    return 0;
}

#include <iostream>
using namespace std;

int main(){
    int i = 0;
    ;for(;;){
        cout<<"Hello"<<endl;
        i++;
    }
    return 0;
}

#include <iostream>
using namespace std;

int main(){
    int i, n, fact=1;
    cin>>n;
    for(i=1;i<=n;i++){
        fact*=i;
        
    }
    cout<<fact<<endl;
}

#include <iostream>
using namespace std;

int main(){
    int i, n;
    cin>>n;
    for(i=1;i<=n;i++){
        if(n%i==0)
        cout<<i<<endl;
    }
    return 0;
}

#include <iostream>
using namespace std;

int main(){
    int i, n;
    int sum=0;
    cin>>n;
    for(i=1;i<=n;i++){
        if(n%i==0)
        sum+=i;
    }
    if(2*n==sum){
        cout<<"perfect no:"<<endl;
    }
    else{
        cout<<"not a perfect no:"<<endl;
    }
    return 0;
}

#include <iostream>
using namespace std;

int main(){
    int i, n;
    int count=0;
    
    cin>>n;
    for(i=1;i<=n;i++){
      
    if(2%i==0){
        count++;
    }
    if(count==2){
        cout<<"its prime:"<<endl;
    }
    else{
        cout<<"not a perfect no:"<<endl;
    }
    return 0;}
}

