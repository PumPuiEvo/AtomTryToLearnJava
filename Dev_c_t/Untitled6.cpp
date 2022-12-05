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
	int n,m,sum,a,h;
	cin>>n;
	vector<int> v;
	vector<int> v2;
	v2.push_back(3);
	v2.push_back(5);
	v2.push_back(6);
	v2.push_back(8);
	
	for(int i=0;i<n;i++){
		h=v2[i]+v2[i+1];
		v2.push_back(h);
	}
	
	for(int i=1;i<=n;i++){
		cin>>m;
		v.push_back(m);
	}
	
	for(int r=0;r<n;r++){
		sum=v2[r];
	
	
	cout<<sum<<"\n";	
	sum=0;
	}
}

