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

		if(direction == 'L') { // Left
			for(int i = 0; i < rotation; ++i) {
				--dial;
				if(dial == 0) ++code;
				if(dial < 0) dial = 99;
			}
		}
		else if(direction == 'R') { // Right
			for(int i = 0; i < rotation; ++i) {
				++dial;
				if(dial > 99) {
					dial = 0;
					++code;
				}
			}
		}
	}
	cout << "The solution is: " << code << endl;
	// 6027
}