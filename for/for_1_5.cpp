#include <iostream>
using namespace std;
/*For5?.
���� ������������ ����� � ���� 1 �� ������. 
������� ��������� 0.1,0.2, . . . , 1 �� ������.*/

int main() {
	double price;
	cin >> price;

	for (int i = 1; i <= 10; i++) {
		double w = (double)i / 10;
		cout << w << " : " <<  w * price << endl;
	}
		
	system("pause");
	return 0;
}

/*For1. ���� ����� ����� K � N (N > 0). ������� N ��� ����� K.*/

//int main() {
//
//	int k, n;
//
//	return 0;
//}

/*

for (int i = 1; i <= 10; i++) {
		double w = (double)i / 10;
		cout << w << " : " << w * price << endl;
	}
	
	*/