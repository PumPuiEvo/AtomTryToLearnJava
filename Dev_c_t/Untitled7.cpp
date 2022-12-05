
#include<iostream>
using namespace std;

int main(){
	 int n,m;
	 cin>>n;
	 m=n*2;
	for(int i=0;i<m;i++){
		for(int r=0;r<m;r++){
			if(i==n/2 && r==n/2  || i==n/2 && r==n+n/2){
			cout<<"  ";
			}else cout<<"/ ";
		}
		cout<<"\n";
	}
	 return 0;
}
