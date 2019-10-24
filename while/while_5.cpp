#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int k = 0;
	
/*	while (n > 1) {
		n /= 2; // поделить пополам
		k++; // увеличить на один
	}*/
	
	int p = 1;
	while (p < n) {
		p *= 2;
		k++;
	}
		
	cout << k;
	
	return 0;
}