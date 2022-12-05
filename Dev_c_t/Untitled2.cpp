/*
TASK:zigzag
LANG:C++
AUTHOR:Piyungkoon Sarapark
CENTER:SUT
*/
#include<iostream>
using namespace std;

int main(){
	 ios_base::sync_with_stdio(false); 
 	cin.tie(NULL); 
 
	 char a,b;
	 int n,m;

	 cin>>a>>b;
	 cin>>n>>m;
	 
	for(int i=0;i<n;i++){
		for(int r=0;r<m;r++){
		
		for(int j=0;j<n;j++){
			if(i==j){
				cout<<a;
			}else if(j+i==n-1){
				cout<<b;
			}else cout<<".";
		}
		for(int k=0;k<n;k++){
			if(i==k){
				cout<<b;
			}else if(k+i==n-1){
				cout<<a;
			}else cout<<".";
		}
		}
		cout<<"\n";
	}
	 return 0;
}
