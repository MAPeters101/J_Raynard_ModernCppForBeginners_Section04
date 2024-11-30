#include <iostream>

using namespace std;

int main() {
	int grade{ 0 };
	int count{ 0 };
	double sum{ 0.0 };
	cout << "Please enter the grades (-1 to finish)\n";
	while (cin >> grade && grade >= 0) {
		sum += grade;
		++count;
	}
	cout << count << " grades enterd." << endl;
	cout << "Average grade is " << sum / count << endl;

	return 0;
}

