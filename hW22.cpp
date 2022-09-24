#include <iostream>
using namespace std;

template <typename T>
void show_arr(T arr[], const int length) {
	for (int i = 0; i < length; i++)
		cout << *(arr+i) << ", ";
	cout << "\b\b.\n";
}
template <typename T>
void change_arr(T arr[], const int length) {
	for (int i = 0; i < length; i+=2) {
		swap(*(arr + i), *(arr+i+1));
	}
}
template <typename T>
void func(T *num, int deg) {
	if (deg == 0) {
		*num = 1;
		return;
	}
	T tmp = *num;
	for (int i = 1; i < deg; i++) {
		*num*=tmp;
	}
}
int main() {
	setlocale(LC_ALL, "Russian");
	int n, m;

	cout << "Домашнее задание №22.\n\nЗадача №1.\n";

	const int size = 10;
	int arr[size]{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	cout << "Изначальный массив: \n";
	show_arr(arr, size);
	cout << "Итоговый массив: \n";
	change_arr(arr, size);
	show_arr(arr, size);

	cout << "\nЗадача №2.\nВведите число: ";
	cin >> n;
	cout << "В какую степень возвести? ";
	cin >> m;
	if (m < 0)
		cout << "ERROR\n";
	else{
		cout << "Число " << n << " в степени " << m << " = ";
		func(&n, m);
		cout << n << endl;
	}

	return 0;
}