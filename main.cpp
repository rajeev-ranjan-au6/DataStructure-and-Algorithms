#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	vector <int> vec {4,3,5,2,6,1};
	vector <int>::iterator it = find(vec.begin(), vec.end(),9);
	
	if(it==vec.end()){
	    cout<<"not found"<<endl;
	}else{
	    cout<<"found"<<endl;
	}
	return 0;
}

