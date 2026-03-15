#include <iostream>
#include <conio.h>
#include <fstream>


std::string readKey() {
	int key = _getch();
	

	// handle the space for the exit
	if (key == 27) {
		return "ESC";
	}

	// special keys 
	if (key == 0 || key == 224) {
		int specialKey = _getch();

		switch (specialKey) {
		case 72: 
			return "[up]"; 
			break;
		case 80: 
			return "[DOWN]"; 
			break;
		case 75: 
			return "[LEFT]";
			break;
		case 77:
			return "[RIGHT]";
			break;
		// need to add cases for F keys for more clarity later 
		
		default:
			return "[unspecified in code]";
			break;
		}
	}
	

	return std::string(1, char(key)); // creates a string of 1 and converts the ascii to char 	


}

void writeFile(std::ofstream& file, std::string& key) {
	if (file.is_open()) {
		file << key;
		file.flush();
	}
	else {
		std::cout << "file could not open. " << '\n';
	}

}

int main() {

	std::ofstream logFile("file.txt");

	while (true) {
		std::string key = readKey();
		
		if (key == "ESC") { // end program 
			break;
		}
		
		
		writeFile(logFile, key);

		std::cout << "logged" << key << '\n';
	}

	
	return 0;
}