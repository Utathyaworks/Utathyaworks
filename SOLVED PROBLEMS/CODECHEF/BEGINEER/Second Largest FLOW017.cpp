#include <iostream>
using namespace std;
int main() {
    int a,b,c,t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        cin>>a>>b>>c;
        if(a>=b && a>=c)
        {
            if(b>=c)
            {
                cout<<b<<endl;
            }
            else{
                cout<<c<<endl;
            }
        }
        else if (b>=a && b>=c)
        {
            if(a>=c)
            {
                cout<<a<<endl;
            }
            else{
                cout<<c<<endl;
            }
            
        }
        else if (c>=a && c>=b)
        {
            if(b>=a)
            {
                cout<<b<<endl;
            }
            else{
                cout<<a<<endl;
            }
            
        }
    }
	return 0;
}
