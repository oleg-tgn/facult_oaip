#include <iostream>
#include <fstream>
using namespace std;
/*Integer30. Дан номер некоторого года 
(целое положительное число). 
Определить соответствующий ему номер столетия, учитывая, что, 
к примеру,началом 20 столетия был 1901 год.*/
/*int main() {
	int year;
	cin >> year;
	int century = year / 100 + 1; 
	cout << century;
	system("pause");
	return 0;
}*/


/*Integer25. 
Дни недели пронумерованы следующим образом: 
0 — воскресенье,
1 — понедельник, 
2 — вторник,. . ., 
3 - среда
4 - четверг
5 - пятница
6 — суббота. Дано целое число K,лежащее в диапазоне 1–365.
Определить номер дня недели для K-го дня года, 
если известно, что в этом году 1 января было четвергом.*/
/*int main() {
	int K;
	cin >> K;
	
	
	//???? int day = (K % 7) + 3; ???
	
	
	cout << day;

	system("pause");
	return 0;
}*/

/*Integer20. С начала суток прошло N секунд (N— целое). 
Найти количество полных часов, прошедших с начала суток*/
/*int main() {
	int seconds;
	cin >> seconds;
	
	int hours = seconds / 60 / 60;
	
	cout << hours;

	system("pause");
	return 0;
}*/


/*Integer15. Дано трехзначное число. 
Вывести число, полученное при перестановке цифр сотен и десятков исходного числа 
(например, 123 перейдет в 213).*/
/*int main() {
	int A;
	cin >> A;
	
	int hundreds = A / 100;// сотни
	int decades = A / 10 % 10;// десятка
	int units = A % 10;// единицы

	//cout << decades << hundreds << units;//вывод цифр друг за другом
	cout << decades * 100 + hundreds * 10 + units;//формируем новое число

	system("pause");
	return 0;
}*/

/*Integer10. Дано трехзначное число. 
Вывести вначале его последнюю цифру(единицы), 
а затем — его среднюю цифру (десятки).*/
/*int main() {
	int A;
	cin >> A;
	cout << A % 10 << endl; // последняя цифра
	cout << A / 10 % 10 << endl; // средняя цифра

	system("pause");
	return 0;
}*/

/*
Integer5. Даны целые положительные числа A и B (A>B). 
На отрезке длины A размещено  максимально  возможное  количество  отрезков  длины B 
(без наложений). Используя операцию взятия остатка от деления нацело, 
найти длину незанятой части отрезка A.*/
/*int main() {
	int A, B;
	cin >> A >> B;
	cout << A % B << endl;

	system("pause");
	return 0;
}*/

/*Integer1.  Дано  расстояние L в  сантиметрах.  
Используя  операцию  делениянацело, найти количество полных метров в нем
(1 метр = 100 см)*/

/*int main() {
	int L;
	cin >> L;
	cout << L / 100 << endl;
	system("pause");
	return 0;
}/*

/*ACMP #1*/
/*int main() {
	ifstream fin("INPUT.TXT");
	ofstream fout("OUTPUT.TXT");

	int a, b;
	fin >> a >> b;
	fout << a + b;

	fin.close();
	fout.close();
	return 0;
}*/