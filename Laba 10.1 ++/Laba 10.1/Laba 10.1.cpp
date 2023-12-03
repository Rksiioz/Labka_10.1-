#include <iostream>
#include <fstream>
#include <string>

using namespace std;

bool Find(string fname){
	ifstream file(fname);
	if (!file.is_open()) {
		cout << "Cannot open file.\n";
		return false;
	}

	string s;
	size_t pos = 0;
	while (getline(file, s)) {
		while (
			(pos = s.find('o', pos)) != -1
			|| (pos = s.find('n', pos)) != -1
			) {
			pos++;
			return true;
		}
	}

	while (getline(file, s)) {
		while (
			(pos = s.find('n', pos)) != -1
			|| (pos = s.find('o', pos)) != -1
			) {
			pos++;
			return true;
		}
	}

	file.close();
	return false;
}

int main() {
	string fname;
	cout << "Filename: ";
	cin >> fname;

	cout << "Umova: " << boolalpha << Find(fname) << endl;

	return 0;
}
