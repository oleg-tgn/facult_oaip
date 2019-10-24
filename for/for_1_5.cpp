#include <iostream>
using namespace std;
/*For5?.
Дано вещественное число — цена 1 кг конфет. 
Вывести стоимость 0.1,0.2, . . . , 1 кг конфет.*/

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

/*For1. Даны целые числа K и N (N > 0). Вывести N раз число K.*/

//int main() {
//
//	int k, n;//	cin >> k >> n;//		//	for (int i = 0; i < n; i++)//		cout << k << endl;////	system("pause");
//
//	return 0;
//}

/*

for (int i = 1; i <= 10; i++) {
		double w = (double)i / 10;
		cout << w << " : " << w * price << endl;
	}
	
	*/