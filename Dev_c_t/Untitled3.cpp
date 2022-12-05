/*
TASK:polite
LANG:C++
AUTHOR:Piyungkoon Sarapark
CENTER:SUT
*/
#include<iostream>
#include<vector>
#include<iterator>
#include<cmath>
using namespace std;

int main(){
	int n,m,sum,a;
	cin>>n;
	vector<int> v;
	for(int i=1;i<=n;i++){
		cin>>m;
		v.push_back(m);
	}

	for(int r=0;r<n;r++){
		if(r%2==0)a=2;
		else a=3;
		for(int i=3;i<=v[r]/a;i++){
				if((v[r]-i)>i){
				sum++;		
				}
		}
	
	
	cout<<sum<<"\n";	
	sum=0;
	}
	return 0;
}
