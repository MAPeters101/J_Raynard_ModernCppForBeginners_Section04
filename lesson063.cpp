#include <iostream>
#include <vector>

using namespace std;

/*
void show_box(string output, char symbol, size_t nblanks) {
	const string CORNER(nblanks + 1, symbol);
	const string PAD(nblanks, ' ');
	const string LHS{ symbol + PAD }, RHS{ PAD + symbol };
	size_t content_len = output.size();
	const string BLANKS(content_len, ' ');
	const string SYMBOLS(content_len, symbol);

	string all_symbols{ CORNER + SYMBOLS + CORNER };
	string symbols_blanks{ LHS + BLANKS + RHS };
	string content(LHS + output + RHS);
	vector<string> lines;
	lines.push_back(all_symbols);
	lines.push_back(symbols_blanks);
	lines.push_back(content);
	lines.push_back(symbols_blanks);
	lines.push_back(all_symbols);
	for (auto it : lines) {
		cout << it << endl;
	}


}

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
	cout << "\n\n";

	//vector<string> lines;
	//size_t content_len = outstr.size();
	//size_t width = content_len;
	//string top(width, '*');
	//lines.push_back(top);
	//string top_blanks(content_len-4, ' ');
	//string below_top{ "* " + top_blanks + " *" };
	//lines.push_back(below_top);
	//string content{ outstr };
	//lines.push_back(content);
	//string lower_blanks(content_len-4, ' ');
	//string above_bottom{ "* " + lower_blanks + " *" };
	//lines.push_back(above_bottom);
	//string bottom(width, '*');
	//lines.push_back(bottom);
	//for (auto it : lines) {
	//	cout << it << endl;
	//}
	//cout << "\n\n";


	const string CORNER{ "**" };
	const string LHS{ "* " }, RHS{ " *" };
	string content_str{ "Hello, " + instr};
	size_t content_len = content_str.size();
	const string STARS(content_len, '*');
	const string BLANKS(content_len, ' ');

	string all_stars{ CORNER + STARS + CORNER };
	string star_blanks{ LHS + BLANKS + RHS };
	string content(LHS + content_str + RHS);
	vector<string> lines;
	lines.push_back(all_stars);
	lines.push_back(star_blanks);
	lines.push_back(content);
	lines.push_back(star_blanks);
	lines.push_back(all_stars);
	for (auto it : lines) {
		cout << it << endl;
	}
	cout << "\n\n";

	show_box("Hello, " + instr, '*', 1);
	cout << "\n\n";

	show_box("Hello, James", '=', 3);
	cout << "\n\n";


	return 0;
}
*/
