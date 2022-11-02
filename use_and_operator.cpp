#include <iostream>
using namespace std;

int main() {int t,a,b;
cin>>t;
    while(t--){
        cin>>a;
        cin>>b;
        if(b>=a && b<=a+200){
            cout<<"yes"<<endl;
        }
        else
        cout<<"no"<<endl;
        }

	return 0;
}
