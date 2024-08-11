// Name: Saniya Chatterjee
// PRN: 23070123113
// Class: EnTC-B2
#include <iostream>
using namespace std;
int main() {
	int a, b;
	cout<<"Enter the value of a: ";
    cin>>a;
    cout<<"Enter the value of b: ";
    cin>>b;
    if (a<5 && b>10)
    	cout<<"True"<<endl;
    else
    	cout<<"False"<<endl;
    if (a>5 || b<10)
    	cout<<"True"<<endl;
    else
    	cout<<"False"<<endl;
    if (!(a<2 && b>0))
    	cout<<"True"<<endl;
    else 
    	cout<<"False"<<endl;
			return 0;
}
/* OUTPUT:
Enter the value of a: 8
Enter the value of b: 7
False
True
True

--------------------------------
Process exited after 3.236 seconds with return value 0
Press any key to continue . . . */
