#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int grade{ 0 };
	double sum{ 0.0 };
	vector<int> grades;
	cout << "Please enter the grades (-1 to finish)\n";
	while (cin >> grade && grade >= 0) {
		if (grade > 100) {
			cout << "Please enter a grade between 0 and 100." << endl;
		}
		else {
			grades.push_back(grade);
			sum += grade;
		}
	}
	sort(grades.begin(), grades.end());
	for (auto it : grades) {
		cout << it << ", ";
	}
	cout << "\n";

	if (grades.size() == 0) {
		cout << "No valid grades entered." << endl;
	}
	else {
		cout << grades.size() << " grades enterd." << endl;
		cout << "Average grade is " << sum / grades.size() << endl;
	}
	return 0;
}

