#include<iostream>
#include<algorithm>
using namespace std;

int main (){
	int myints[]={3,7,2,5,6,1,9};
	
	cout <<"The smallest elements from all is"<<*min_element(myints,myints+7)
	     <<'\n';
	cout <<"The largest elements from all is" <<*max_element(myints,myints+7)
         <<'\n';
    
    cout <<"The smallest elements from pointer 1 to 5 is "
         <<*min_element(myints+1,myints+5)<<'\n';
    cout <<"The largest elements from pointer 1 to 5 is "
	     <<*max_element(myints+1,myints+5)<<'\n';
    
    return 0;
}
 


