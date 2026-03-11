#include <iostream>
#include <conio.h>

void readKey() {
	int key = _getch();

	std::cout << char(key);

}

int main() {
	
	bool running = true;

	while (running) {
		readKey();
	}

	
	return 0;
}