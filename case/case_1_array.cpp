#include <iostream>
#include <string>
using namespace std;

int main() {
	int n;
	
	string days[] = { "понедельник", "вторник", "среда", "четверг", "пятница", "суббота", "воскресенье"  };
	
	cin >> n;
	if (n >= 1 && n <= 7)
		cout << days[n - 1];
	else
		cout << "такого дня нет";
	
	return 0;
}#include <iostream>
#include <string>
using namespace std;

int main() {
	int n;
	
	string days[] = { "понедельник", "вторник", "среда", "четверг", "пятница", "суббота", "воскресенье"  };
	
	cin >> n;
	if (n >= 1 && n <= 7)
		cout << days[n - 1];
	else
		cout << "такого дня нет";
	
	return 0;
}