#include <iostream>

using namespace std;

int main() {
	string instr{ "" };
	cin >> instr;
	cout << "\n\n";

	string outstr{ "* Hello, " + instr + " *"};
	size_t outstr_len = outstr.size();
	string stars(outstr_len, '*');
	string spaces((outstr_len - 2), ' ');
	string stars_spaces{ "*" + spaces + "*" };
	cout << stars << endl;
	cout << stars_spaces << endl;
	cout << outstr << endl;
	cout << stars_spaces << endl;
	cout << stars << endl;


	return 0;
}

