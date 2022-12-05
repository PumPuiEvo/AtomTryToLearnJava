#include<iostream>
using namespace std;

int main(){
	int n,m,k,x=1;
	while(x==1){
	cin>>n;
	m=n*2+1;
	k=m*2+1;
	for(int i=1;i<=m;i++){
		for(int j=1;j<=m;j++){
			if(j==n+1||i==n+1){
			cout<<"+";
			}else if(j==1||j==m||i==1||i==m){
			cout<<".";	
			}else if(i+j<=m-n || i-j>n || j-i>n || i+j>n+m+1){
			cout<<" ";
			}else {cout<<"*";}
		}
		cout<<"+";
		for(int j=1;j<=m;j++){
			if(j==n+1||i==n+1){
			cout<<"+";
			}else if(j==1||j==m||i==1||i==m){
			cout<<".";	
			}else if(i+j<=m-n || i-j>n || j-i>n || i+j>n+m+1){
			cout<<" ";
			}else {cout<<"*";}
		}
		cout<<"\n";
	}
	for(int j=1;j<=k;j++){
		cout<<"+";	
	}
	cout<<"\n";
	for(int i=1;i<=m;i++){
		for(int j=1;j<=m;j++){
			if(j==n+1||i==n+1){
			cout<<"+";
			}else if(j==1||j==m||i==1||i==m){
			cout<<".";	
			}else if(i+j<=m-n || i-j>n || j-i>n || i+j>n+m+1){
			cout<<" ";
			}else {cout<<"*";}
		}
		cout<<"+";
		for(int j=1;j<=m;j++){
			if(j==n+1||i==n+1){
			cout<<"+";
			}else if(j==1||j==m||i==1||i==m){
			cout<<".";	
			}else if(i+j<=m-n || i-j>n || j-i>n || i+j>n+m+1){
			cout<<" ";
			}else {cout<<"*";}
		}
		cout<<"\n";
	}
}
}
