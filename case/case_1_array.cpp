#include <iostream>
#include <string>
using namespace std;

int main() {
	int n;
	
	string days[] = { "�����������", "�������", "�����", "�������", "�������", "�������", "�����������"  };
	
	cin >> n;
	if (n >= 1 && n <= 7)
		cout << days[n - 1];
	else
		cout << "������ ��� ���";
	
	return 0;
}#include <iostream>
#include <string>
using namespace std;

int main() {
	int n;
	
	string days[] = { "�����������", "�������", "�����", "�������", "�������", "�������", "�����������"  };
	
	cin >> n;
	if (n >= 1 && n <= 7)
		cout << days[n - 1];
	else
		cout << "������ ��� ���";
	
	return 0;
}