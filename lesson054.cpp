#include <iostream>

using namespace std;

int main() {
	int x{ 5 };
	if (x >= 1 && x <= 10)
		cout << x << " is between 1 and 10\n\n";

	string entered_password{ "topsecret" }, user_password{ "topsecret" };
	if (entered_password == "topsecret" && user_password == "topsecret")
		cout << "Password accepted.\n\n";

	char c{ 'z' };
	if (c != ' ' && c != '\t')
		cout << c << " is a non-space character.\n\n";
		
	if (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u')
		cout << c << " is not a vowel.\n\n";

	return 0;
}


