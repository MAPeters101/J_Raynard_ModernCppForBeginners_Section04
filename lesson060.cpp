#include <iostream>

using namespace std;

string is_odd_or_even(int n) {
	if (n % 2 == 0) {
		return "even";
	}
	else {
		return "odd";
	}
}

/*
int main() {
	int i{ 0 };
	int secret(42);

	cout << "Enter your guess: ";
	while (cin >> i) {
		if (i == secret) {
			break;
		}

		cout << "I'm sorry, " << i << " is not correct.  Please try again: " << flush;
	}

	if (i == secret) {
		cout << "Yes!  That's the right answer!\n";
	}
	cout << "\n\n";

	cout << "Enter some numbers\n";
	while (cin >> i) {
		if (i % 2 == 0) {
			continue;
		}
		cout << i << "\n";
	}
	cout << "\n\n";

	cout << is_odd_or_even(4) << endl;
	cout << is_odd_or_even(3) << endl;


	return 0;
}

*/


