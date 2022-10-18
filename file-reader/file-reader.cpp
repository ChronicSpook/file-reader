//** sample file reader **/
#include <iostream> //cin, cour, cerr, endl
#include <fstream>	// ifstream
#include <string>	// string
int main() {
	using namespace std;

	ifstream file;
	char aCharacter = ' ';
	string fileName = "myFile.txt";

	file.open(fileName.c_str());
	if (file.fail()) {
		cerr << "Failed to open file: " << fileName << endl;
	}
	else {
		// loop through the file an print the contents.
		file.get(aCharacter);
		while (!file.eof()) {
			cout << aCharacter;
			file.get(aCharacter);
		}
		file.close();
	}

	return 0;
}