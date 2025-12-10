#include <iostream>
#include <string>
using namespace std;

int main() {
	int dial = 50;
	int code = 0;

	string input;
	while(cin >> input) {
		char direction = input[0];
		int rotation = stoi(input.substr(1,input.length()));

		if(direction == 'L') // Left
			dial -= rotation;
		else if(direction == 'R') // Right
			dial += rotation;
		
		while(dial > 99) {
			dial -= 100; ++code;
		}
		while(dial < 0) {
			dial += 100; ++code; 
		}
	}
	cout << "The solution is: " << code << endl;
	// ?
}
