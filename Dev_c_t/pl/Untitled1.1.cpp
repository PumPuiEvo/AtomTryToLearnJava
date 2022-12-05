#include<iostream>
using namespace std;

int main(){
	int n,m,x,k,p,u,nn=1;
	while(nn=1){
	cin>>n;
	m=n*2+1;
	x=n*6;
	k=n*4+1;
	p=(m-n)/2;
	u=n+p;
	for(int i=1;i<=n;i++){
		for(int o=1;o<=n;o++){
			cout<<" ";
		}
		for(int j=1;j<=m;j++){
			if(j>=n-i+2 && j<=n+i){cout<<"*";
			}else cout<<" ";
		}		
		cout<<"\n";
	}
	
	for(int i=1;i<=x-n;i++){
		for(int o=1;o<=n;o++){
			cout<<" ";
		}
		for(int j=1;j<=m;j++){
			cout<<"*";
		}
		cout<<"\n";
	}
	for(int i=1;i<=n;i+=2){
		for(int j=1;j<=k;j++){
			if(j>=i && j<=k-i+1){
			cout<<"*";
			}else cout<<" ";
		}
		cout<<"\n";
	}
	
	for(int i=1;i<=m;i++){
		for(int o=1;o<=u;o++){
			cout<<" ";
		}
		for(int o=1;o<=n;o++){
			cout<<"*";
		}
		cout<<"\n";
	}
}
}
