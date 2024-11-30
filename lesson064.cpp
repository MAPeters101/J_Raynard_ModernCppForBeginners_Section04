#include <iostream>

using namespace std;

int main() {
	int grade{ 0 };
	int count{ 0 };
	double sum{ 0.0 };
	cout << "Please enter the grades (-1 to finish)\n";
	while (cin >> grade && grade >= 0) {
		if (grade > 100) {
			cout << "Please enter a grade between 0 and 100." << endl;
		}
		else {
			sum += grade;
			++count;
		}
	}
	if (count == 0)
		cout << "No valid grades entered." << endl;
	else {
		cout << count << " grades enterd." << endl;
		cout << "Average grade is " << sum / count << endl;
	}
	return 0;
}

