#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath> 

using namespace std;

void input_vector(vector<int>& v) {
	int broj;
	cout << "Unesite brojeve (0 za kraj): ";
	while (true) {
		cin >> broj;
		if (broj == 0)
			break;
		v.push_back(broj);
	}
}

void print_vector(const vector<int>& v) {
	for (int x : v)
		cout << x << " ";
	cout << endl;
}

int main() {
	vector<int> v;
	input_vector(v);

	cout << "Originalni vektor: ";
	print_vector(v);

	
	vector<int> jedinstveni;
	for (int x : v) {
		if (find(jedinstveni.begin(), jedinstveni.end(), x) == jedinstveni.end())
			jedinstveni.push_back(x);
	}

	cout << "Jedinstveni elementi: ";
	print_vector(jedinstveni);

	
	sort(jedinstveni.begin(), jedinstveni.end(), [](int a, int b) {
		return abs(a) < abs(b);
	});

	cout << "Sortirani po apsolutnoj vrijednosti: ";
	for (int x : jedinstveni)
		cout << x << " ";
	cout << endl;

	return 0;
}
