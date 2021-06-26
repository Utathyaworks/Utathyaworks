#include <iostream>
using namespace std;

int main() {
    long int n,k,t,i;
    int c=0;
    cin>>n>>k;
    for(i=1;i<=n;i++)
    {
        cin>>t;
        if((t%k)==0)
        {
            c=c+1;
        }
    }
    cout<<c<<endl;
	return 0;
}
