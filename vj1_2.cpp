#include <iostream>

int funkcija(int a, int low, int high) {
	if (a < low) {
		return low;
	}
	else if (a > high) {
		return high;
	}
	else {
		return a;
	}
}

double funkcija(double b, double low, double high) {
	if (b < low) {
		return low;
	}
	else if (b > high) {
		return high;
	}
	else {
		return b;
	}
}

int main() {
	int a = 12;
	double b = 7.63;
	std::cout << "int:" << funkcija(a,5,10)<< std::endl;
	std::cout<< "double:" << funkcija(b, 5.1, 10.4) << std::endl;

	return 0;

}