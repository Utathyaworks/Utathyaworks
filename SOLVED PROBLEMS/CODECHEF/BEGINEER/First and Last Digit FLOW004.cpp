#include <iostream>
using namespace std;

int main() {
	int t,n,l;
	cin>>t;
	for(int i=1;i<=t;i++)
	{
	    cin>>n;
	    l=n%10;
	    while(n>=10)   
	    {
	        n=n/10;
	    }
	   cout<<l+n<<endl;
	   l=0;
	}
	return 0;
}
