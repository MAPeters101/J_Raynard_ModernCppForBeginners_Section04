#include <iostream>

using namespace std;

string number_to_text(int number) {
	string text{ "" };
	switch (number) {
	case 0:
		text = "zero";
		break;
	case 1:
		text = "one";
		break;
	case 2:
		text = "two";
		break;
	case 3:
		text = "three";
		break;
	case 4:
		text = "four";
		break;
	case 5:
		text = "five";
		break;
	}
	return text;
}

int calc_dollars(int change) {
	int dollars{ change / 100 };
	if (dollars) {
		cout << number_to_text(dollars) << ((dollars > 1) ? " dollars" : " dollar") << endl;
	}
	return change % 100;
}

int calc_halves(int change) {
	int halves{ change / 50 };
	if (halves) {
		cout << number_to_text(halves) << ((halves > 1) ? " halves" : " half") << endl;
	}
	return change % 50;
}

int calc_quarters(int change) {
	int quarters{ change / 25 };
	if (quarters) {
		cout << number_to_text(quarters) << ((quarters > 1) ? " quarters" : " quarter") << endl;
	}
	return change % 25;
}

int calc_dimes(int change) {
	int dimes{ change / 10 };
	if (dimes) {
		cout << number_to_text(dimes) << ((dimes > 1) ? " dimes" : " dime") << endl;
	}
	return change % 10;
}

int calc_nickles(int change) {
	int nickles{ change / 25 };
	if (nickles) {
		cout << number_to_text(nickles) << ((nickles > 1) ? " nickles" : " nickle") << endl;
	}
	return change % 5;
}

void calc_pennies(int change) {
	int pennies{ change };
	if (pennies) {
		cout << number_to_text(pennies) << ((pennies > 1) ? " pennies" : " penny") << endl;
	}
	return;
}

int get_input() {
	int input{ 0 };
	do {
		cout << "Please enter the amount of change (between 1 and 499), or -1 to exit" << endl;
		cin >> input;
	} while (input < -1 || input == 0 || input > 499);
	return input;
}


void show_change_usa(int change) {
	int remaining{ change };
	remaining = calc_dollars(remaining);
	remaining = calc_halves(remaining);
	remaining = calc_quarters(remaining);
	remaining = calc_dimes(remaining);
	remaining = calc_nickles(remaining);
	calc_pennies(remaining);
	return;
}


/*
int main() {
	int remaining{ get_input() };
	show_change_usa(remaining);

	return 0;
}
*/

