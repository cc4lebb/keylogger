#include <iostream>
#include <conio.h>

void readKey() {
	int key = _getch();


	// special keys 
	if (key == 0 || key == 224) {
		int specialKey = _getch();

		switch (specialKey) {
		case 72: 
			std::cout << "[up]" << '\n'; 
			break;
		case 80: 
			std::cout << "[DOWN]" << '\n'; 
			break;
		case 75: 
			std::cout << "[LEFT]" << '\n';
			break;
		case 77:
			std::cout << "[RIGHT]" << '\n';
			break;
		// need to add cases for F keys for more clarity later 
		default:
			std::cout << " SP: [" << specialKey << '] ' << '\n';
			break;
		}
	}
	else {
		_putch(key); // used to show each output without buffering 
	}


}

int main() {
	
	bool running = true;

	while (running) {
		readKey();
	}

	
	return 0;
}