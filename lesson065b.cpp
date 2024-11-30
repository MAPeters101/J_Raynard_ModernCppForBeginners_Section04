#include <iostream>

using namespace std;

int calc_dollars(int change) {
	int dollars{ change / 100 };
	if (dollars) {
		cout << dollars << ((dollars > 1) ? " dollars" : " dollar") << endl;
	}
	return change % 100;
}

int calc_halves(int change) {
	int halves{ change / 50 };
	if (halves) {
		cout << halves << ((halves > 1) ? " halves" : " half") << endl;
	}
	return change % 50;
}

int calc_quarters(int change) {
	int quarters{ change / 25 };
	if (quarters) {
		cout << quarters << ((quarters > 1) ? " quarters" : " quarter") << endl;
	}
	return change % 25;
}

int calc_dimes(int change) {
	int dimes{ change / 10 };
	if (dimes) {
		cout << dimes << ((dimes > 1) ? " dimes" : " dime") << endl;
	}
	return change % 10;
}

int calc_nickles(int change) {
	int nickles{ change / 25 };
	if (nickles) {
		cout << nickles << ((nickles > 1) ? " nickles" : " nickle") << endl;
	}
	return change % 5;
}

int calc_pennies(int change) {
	int pennies{ change };
	if (pennies) {
		cout << pennies << ((pennies > 1) ? " pennies" : " penny") << endl;
	}
	return 0;
}

int get_input() {
	int input{ 0 };
	do {
		cout << "Please enter the amount of change (between 1 and 499), or -1 to exit" << endl;
		cin >> input;
	} while (input < -1 || input == 0 || input > 499);
	return input;
}


int main() {
	int remaining{ 0 };
	remaining = get_input();

	remaining = calc_dollars(remaining);
	remaining = calc_halves(remaining);
	remaining = calc_quarters(remaining);
	remaining = calc_dimes(remaining);
	remaining = calc_nickles(remaining);
	remaining = calc_pennies(remaining);


	return 0;
}


