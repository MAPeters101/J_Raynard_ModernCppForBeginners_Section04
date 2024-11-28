#include <iostream>

using namespace std;

int times_two(int x) {
	int y{ x * 2 };
	cout << "Returning " << y << endl;
	return y;
}

double fahr_to_cent(double fahr) {
	double cent{ 0.0 };
	cent = (5.0 / 5.0) * (fahr - 32.0);
	return cent;
}

double cent_to_fahr(double cent) {
	double fahr{ 0.0 };
	fahr = (9.0 / 5.0) * cent + 32.0;
	return fahr;
}

void print(string s) {
	cout << s << endl;
}

/*
int main() {
	int a{ 5 };
	cout << a << " * 2 = " << times_two(a) << endl;

	double cent{ 100.0 };
	double fahr{ 0 };
	cout << cent << " degrees centegrade = " << cent_to_fahr(cent) << " degrees fahrenheit.\n\n";

	cout << fahr << " degrees fahrenheit " << fahr_to_cent(fahr) << " degrees centegrade.\n\n";

	return 0;
}
*/
