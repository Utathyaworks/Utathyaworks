#include <iostream>
using namespace std;

int main() {
    int t,c=0;
    long int n;
    cin>>t;
    for(int i =1;i<=t;i++)
    {
        cin>>n;
        while(n>0)
        {
            if((n%10)==4)
            {
                c=c+1;
                n=n/10;
            }
            else
            {
                n=n/10;
                        }
            
        }
        cout<<c<<endl;
        c=0;
        
    }
	return 0;
}
