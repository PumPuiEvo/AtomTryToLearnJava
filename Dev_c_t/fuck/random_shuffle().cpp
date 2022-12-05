#include <iostream>
#include <algorithm> //random_shuffle()
#include <ctime> //time
#include <cstdlib> //rand,strand
using namespace std;

int main(){
	srand(unsigned(time(0)));
	int n[]={1,2,3,4,5,6,7,8,9};
	
	//using built-in random generator:
    random_shuffle(n,n+9);
    
    //print out content;
    for(int i=0;i<9;++i)
          cout<<"   "<< n[i];
         
    return 0;
}



