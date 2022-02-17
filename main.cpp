#include <iostream>
using namespace std;


int main(void) {

	string letters;
	cout << "Enter a word: ";
	cin >> letters;

	for (int i = 0; i < letters.length(); i++) {
		if (int(letters[i]) > 96 && int(letters[i]) < 106) {
			cout << char(int(letters[i]) - 48);
		}
		else if (int(letters[i]) > 105 && int(letters[i]) < 116) {
			cout << char(49) << char(int(letters[i]) - 58) << endl;
		}
		else if (int(letters[i]) > 115 && int(letters[i]) < 123) {
			cout << char(50) << char(int(letters[i]) - 68) << endl;



		}
		else if (int(letters[i]) > 64 && int(letters[i]) < 74) {
			cout << char(int(letters[i]) - 16);
		}
		else if (int(letters[i]) > 73 && int(letters[i]) < 84) {
			cout << char(49) << char(int(letters[i]) - 26) << endl;
		}
		else if (int(letters[i]) > 83 && int(letters[i]) < 91) {
			cout << char(50) << char(int(letters[i]) - 36) << endl;
		}
		else {
			cout << "Error, you should enter letters only.\n";
			return 0;
		}
	}


	return 0;
}
