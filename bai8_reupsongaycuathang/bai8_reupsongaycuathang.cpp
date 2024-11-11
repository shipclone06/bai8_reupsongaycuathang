#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int so;
	cout << "so ngay cua thang: ";
	cin >> so;
	switch (so)
	{
	case 1:
		cout << "thang 1 co 31 ngay\n";
		break;
	case 2:
		cout << "thang 2 co 28 ngay\n";
		break;
	case 3:
		cout << "thang 3 co 31 ngay\n";
		break;
	case 4:
		cout << "thang 4 co 30 ngay\n";
		break;
	case 5:
		cout << "thang 5 co 31 ngay\n";
		break;
	case 6:
		cout << "thang 6 co 30 ngay\n";
		break;
	case 8:
		cout << "thang 7 co 31 ngay\n";
		break;
	case 9:
		cout << "thang 8 co 31 ngay \n";
		break;
	case 10:
		cout << "thang 9 co 30 ngay\n";
		break;
	case 11:
		cout << "thang 11 co 30 ngay\n";
		break;
	case 12:
		cout << "thang 12 co 31 ngay\n";
		break;
	default:
		cout << "thang ko ton tai\n";
		return 0;
	}
}