#include<iostream>
#include<cstring>
using namespace std;
char st[10];
int m=3,code=36;
char base[]="0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";


void think(int n){
	int i;
	if(n>0){
	for(i=0;i<code;i++){
		st[m-n]=base[i];
		think(n-1);
	}
		
	}else cout<<"\n"<<(st);
}

int main (){
	st[m]=0;
	think(m);
	
	return 0;
}
