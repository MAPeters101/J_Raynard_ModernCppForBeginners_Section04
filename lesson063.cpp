#include <iostream>

using namespace std;

int main() {
	string instr{ "" };
	cin >> instr;
	string outstr{ "Hello, " + instr };
	size_t outstr_len = outstr.size();
	string stars(outstr_len, '*');
	cout << outstr << endl;
	cout << stars << endl;


	return 0;
}

