#include <bits/stdc++.h>
using namespace std;
int main()
{
 ios_base::sync_with_stdio(false); 
 cin.tie(NULL); 
 
    int i,j,m,n,l,k;
    char ch1,ch2;
    cin >> ch1;
    cin >> ch2;
    cin >> n;
    cin >> l;
    k = 2*l;
    int start_s=clock();

    for (i=0;i<n;i++)
    {
        for (j=0;j<k*n;j++)
            if (i+(j%(2*n))==2*n-1 || ((i==(j%(2*n))))) cout << ch1; else
            if (i+(j%(2*n))==n-1 || ((i+n==(j%(2*n))))) cout << ch2; else
               cout << ".";
        cout << endl;
    }
 int stop_s=clock();
 cout << "time: " << (stop_s-start_s)/1000.0 << "\n";
    
    return 0;
}
