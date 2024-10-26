// PPRG2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void zad2_1(int n) {
	int suma = 0;
	for (int i = 1; i <= n; i++) {
		suma += i;
		if (i == n) {
			cout << i << " = ";
			break;
		}
		cout << i << " + ";
	}
	cout << suma;
}

void zad2_2a() {
	int a, b;
	cout << "Wpisz liczby a i b: ";
	cin >> a >> b;
	cout << a << ", " << b;
}

void zad2_2b() {
	int a;
	cout << "Wpisz a: ";
	cin >> a;
	for (int i = 0; i < a; i++) {
		cout << "*";
	}
}

void zad2_2c() {
	int b;
	cout << "Wpisz b: ";
	cin >> b;
	for (int i = 0; i < b; i++) {
		cout << "*\n";
	}
}

void zad2_2d() {
	int a, b;
	cout << "Wpisz a i b: ";
	cin >> a >> b;
	for (int x = 0; x < b; x++) {
		for (int y = 0; y < a; y++) {
			cout << "*";
		}
		cout << "\n";
	}
}

void zad2_2e() {
	int a, b;
	cout << "Wpisz a i b: ";
	cin >> a >> b;
	for (int x = 0; x < b; x++) {
		for (int y = 0; y < a; y++) {
			if (x == 0 || x == b - 1) {
				cout << "*";
			}
			else {
				if (y == 0 || y == a - 1) {
					cout << "*";
				}
				else {
					cout << " ";
				}
			}
		}
		cout << "\n";
	}
}

void zad2_2f() {
	int a;
	cout << "Wpisz a: ";
	cin >> a;
	for (int i = 0; i < a; i++) {
		for (int j = 0; j < i + 1; j++) {
			cout << "*";
		}
		cout << "\n";
	}
}

void zad2_2g() {
	int a;
	cout << "Wpisz a: ";
	cin >> a;
	for (int i = a; i > 0; i--) {
		for (int x = 0; x < a - i; x++) {
			cout << " ";
		}
		for (int j = i; j > 0; j--) {
			cout << "*";
		}
		cout << "\n";
	}
}

void zad2_3() {
	int liczba;
	cout << "Wpisz liczbe od 1 do 12: ";
	cin >> liczba;
	switch (liczba) {
		case 1:
			cout << "Styczen, 31 dni, pochmurno.";
			break;
		case 2:
			cout << "Luty, 28 dni, pochmurno.";
			break;
		case 3:
			cout << "Marzec, 31 dni, pochmurno.";
			break;
		case 4:
			cout << "Kwiecien, 30 dni, slonecznie.";
			break;
		case 5:
			cout << "Maj, 31 dni, slonecznie.";
			break;
		case 6:
			cout << "Czerwiec, 30 dni, slonecznie.";
			break;
		case 7:
			cout << "Lipiec, 31 dni, slonecznie.";
			break;
		case 8:
			cout << "Sierpien, 31 dni, slonecznie.";
			break;
		case 9:
			cout << "Wrzesien, 30 dni, slonecznie.";
			break;
		case 10:
			cout << "Pazdziernik, 31 dni, pochmurno.";
			break;
		case 11:
			cout << "Listopad, 30 dni, pochmurno.";
			break;
		case 12:
			cout << "Grudzien, 31 dni, pochmurno.";
			break;
		default:
			cout << "Podana liczba jest nieprawidlowa.";
			break;
	}
}

int main()
{	
	zad2_1(10);
	zad2_2a();
	zad2_2b();
	zad2_2c();
	zad2_2d();
	zad2_2e();
	zad2_2f();
	zad2_2g();
	zad2_3();
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
