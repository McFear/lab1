#include <conio.h>
#include <iostream>

using namespace std;


int summ(int a, int b) {
	return a + b;
}


int minn(int a, int b) {
	return a - b;
}

int umnozh(int a, int b) {
	int sum = 0;
	for (int i = 0; i < b; ++i) {
		sum = sum + a;
	}
	return sum;
}


int delle(int a, int b) {
	int zn = 0;
	for (int i = 0; a != 0; ++i) {
		int z = a;
		a = a - b;
		if (a <= 0) {
			break;
		}
		else {
			++zn;
		}
	
	}
	return zn;	
}


void main() {
	int a, b;
	cout << "A: " << endl;
	cin >> a;
	cout << "B: " << endl;
	cin >> b;
	cout << "Summa: " << summ(a, b) << endl;
	cout << "Raznost: " << minn(a, b) << endl;
	cout << "Umnozhenie: " << umnozh(a, b) << endl;
	cout << "Delenie: " << delle(a, b) << endl;
	cout << "Raznost Summu u rasnost: " << summ(a, b) - minn(a, b) << endl;
	system("pause");
}