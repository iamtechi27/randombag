#include <iostream>
#include <cstdio>
#include <ctime>
#include <string>
#include <cstdlib>
using namespace std;

int leftInBag, randomnumber;
string bag;

void init() {
	bag = "OISZLJT";
	leftInBag = 7;
}

char draw() {
	char result;
	if (leftInBag == 0) {
		init();
	}
	randomnumber = rand() % leftInBag;
	result = bag.at(randomnumber);
	bag.erase(bag.begin()+randomnumber);
	leftInBag--;
	return result;
}

int main() {
	srand(time(NULL));
	for (int i = 0; i < 50; i++) {
		printf("%c", draw());
	}
	cout << endl;
}
