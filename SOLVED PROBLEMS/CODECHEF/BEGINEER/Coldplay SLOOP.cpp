#include <iostream>
using namespace std;

int main() {
	int T,M,S;
	cin>>T;
	for(int i=1;i<=T;i++)
	{
	    cin>>M>>S;
	    if(M<S)
	    {
	        cout<<0<<endl;;
	    }
	    else{
	    if(M%S==0){
	        cout<<M/S<<endl;;
	    }
	    else
	    {
	        cout<<(M-(M%S))/S<<endl;;
	    }
	}
	}
	return 0;
}
