#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int a;
	cin >>a;
	if (fmod(a,4)!=0){
		cout<<"Not Feb29";	
	}
	else if(fmod(a,4)==0 && fmod (a,100)!=0){
		cout<<"Feb29";
	}
    else {
    	cout<<"Not Feb29";
	}
}
