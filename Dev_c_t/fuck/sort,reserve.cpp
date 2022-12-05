#include<iostream>
#include<algorithm>  //std::sort
using namespace std;

void print(int ar[],int n){
	    for(int i=0;i<n;i++)
     cout<<ar[i]<<"";
    cout<<endl;
}

int main (){
  int myints[] = {32,71,12,45,26,80,53,33};
	
  sort (myints, myints+8);
	
	//print out content:
  print(myints,8);
  printf(" ");
  reverse(myints,myints+8);
  print(myints,8);
	
  return 0;
}
