#include <iostream>
using namespace std;

int main() {
	int a, b;
	cin >> a >> b;
	int sum = a ^ b;
	int carry = (a & b) << 1;
	while (carry != 0) {
		int temp = sum;
		sum ^= carry;
		carry = (temp & carry) << 1;
	}
	cout << sum<<endl;
	return 0;
}