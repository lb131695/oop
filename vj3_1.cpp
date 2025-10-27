#include <iostream>
#include <cstddef> 


inline bool ascending(int a, int b) {
	return a < b;
}

inline bool descending(int a, int b) {
	return a > b;
}


void sortt(int niz[], std::size_t size, bool(*cmp)(int, int)) {
	for (std::size_t i = 0; i < size - 1; ++i) {
		for (std::size_t j = 0; j < size - i - 1; ++j) {
			if (!cmp(niz[j], niz[j + 1])) {
				int temp = niz[j];
				niz[j] = niz[j + 1];
				niz[j + 1] = temp;
			}
		}
	}
}

int main() {
	int niz[] = { 5, 2, 9, 1, 7 };
	std::size_t velicina = sizeof(niz) / sizeof(niz[0]);

	sortt(niz, velicina, ascending);
	std::cout << "Uzlazno\n";
	for (std::size_t i = 0; i < velicina; ++i)
		std::cout << niz[i] << " ";
	std::cout << "\n";

	sortt(niz, velicina, descending);
	std::cout << "Silazno\n";
	for (std::size_t i = 0; i < velicina; ++i)
		std::cout << niz[i] << " ";
	std::cout << "\n";

	return 0;
}
