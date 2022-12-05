#include<iostream>
#include<cstring>
using namespace std;

int main (){
	int i,j,cou=0,bird=0,ex=1;
	char n;
	for(i=0;i<5;i++){
		cou=0;
		for(j=1;j<=31;j++){
			if((j&ex)==ex){
				cout<<j<<" ";
				cou++;
				
				if(cou%5==0)cout<<endl;
				
			}
		}
		
		cout<<"\n"<<"Enter ";
		
		cin>>n;
		if(n=='y')bird+=ex;
		
		ex*=2;
	}
		cout<<bird;
	return 0;
}
