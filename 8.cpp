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
	int bitwise_and = a & b;
	cout<<"AND operator: "<<bitwise_and<<endl;
	int bitwise_or = a | b;
	cout<<"OR operator: "<<bitwise_or<<endl;
	int bitwise_xor = a^b;
	cout<<"XOR operator: "<<bitwise_xor<<endl;
	int bitwise_not = ~a;
	cout<<"NOT operator: "<<bitwise_not<<endl;
	int left_shift = a<<1;
	cout<<"LEFT SHIFT operator: "<<left_shift<<endl;
	int right_shift = a>>9;
	cout<<"RIGHT SHIFT operator: "<<right_shift<<endl;
	return 0;
}
/* OUTPUT:
Enter the value of a: 10
Enter the value of b: 11
AND operator: 10
OR operator: 11
XOR operator: 1
NOT operator: -11
LEFT SHIFT operator: 20
RIGHT SHIFT operator: 0

--------------------------------
Process exited after 3.179 seconds with return value 0
Press any key to continue . . . */
