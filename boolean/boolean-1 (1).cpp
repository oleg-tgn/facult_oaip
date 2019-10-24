#include <iostream>
using namespace std;

/*
Boolean1. Дано целое число A. 
Проверить истинность высказывания: «Число A является положительным».
*/
int main() {
	int A;
	cin >> A;
	bool positive = A > 0;

	cout << boolalpha;
	cout << positive;
	system("pause");
	return 0;
}
