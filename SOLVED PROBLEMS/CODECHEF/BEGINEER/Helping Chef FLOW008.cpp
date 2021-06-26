#include <iostream>
using namespace std;
int main() {
    int t,n;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        cin>>n;
        if(n<10)
        {
            cout<<"Thanks for helping Chef!"<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }
	return 0;
}
