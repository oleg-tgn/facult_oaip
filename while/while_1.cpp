#include <iostream>
using namespace std;

int main() {
	int a, b;
	cin >> a >> b;
	
	while (a >= b)
		a -= b;
	
	cout << a;
	
	return 0;
}