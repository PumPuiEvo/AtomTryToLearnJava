#include<iostream>
using namespace std;

void think(char a,char b,char c,int n){
	
	if(n>0){
		think(a,b,c,n-1);
		cout<<"M  "<<n<<" F  "<<a<<" to "<<c<<endl;
		think(b,a,c,n-1);
	}
}

int main(){
	
	think('A','B','C',4);
	return 0;
}
