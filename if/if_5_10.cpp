#include <iostream>
using namespace std;
/*If10. ���� ��� ���������� ������ ����: A � B.
- ���� �� �������� �� �����,
�� ��������� ������ ���������� ����� ���� ��������,
- � ���� �����,
�� ��������� ���������� ������� ��������.
������� ����� �������� ���������� A � B*/

int main() {
	int a, b;
	
	cin >> a >> b;

	a = b = (a != b) ? a + b : 0;
	/*if (a != b) 
		a = b = a + b;
	else

		a = b = 0;*/

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	system("pause");
	return 0;
}


/*If5. ���� ��� ����� �����.
����� ���������� ������������� � ����������
������������� ����� � �������� ������.*/

//int main() {
//	int a, b, c;
//	int pos = 0;
//	int neg = 0;
//
//	cin >> a >> b >> c;
//		
//	if (a < 0) neg++; else if (a != 0) pos++;
//	if (b < 0) neg++; else if (b != 0) pos++;
//	if (c < 0) neg++; else if (c != 0) pos++;
//
//	cout << "positive: " << pos << endl;
//	cout << "negative: " << neg << endl;
//
//	system("pause");
//	return 0;
//}