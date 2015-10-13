#include <iostream>
#include <cstdio>
#include <ctime>
#include <string>
#include <cstdlib>
using namespace std;

string bag;

void init() {
	bag = "OISZLJT";
}

char draw() {
	int randomNumber;
	char result;
	if (bag.length() == 0) {
		init();
	}
	randomNumber = rand() % bag.length();
	result = bag.at(randomNumber);
	bag.erase(bag.begin()+randomNumber);
	return result;
}

int main() {
	srand(time(NULL));
	for (int i = 0; i < 50; i++) {
		if (i % 7 == 0) {
			cout << " ";
		}
		printf("%c", draw());
	}
	cout << endl;
}
