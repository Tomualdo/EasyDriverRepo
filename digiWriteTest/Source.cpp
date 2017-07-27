#include<iostream>
#include <bitset>

using namespace std;
#define HIGH 1
#define LOW 0

uint8_t _pin[2] = { 8,9 };

void outTest(int mask) {
	uint8_t numpins = 2; // DRIVER
	uint8_t i;
	uint8_t tab = 0b1001;
	for (i = 0; i < numpins; i++)
	{
		cout << "PIN No: " << int(_pin[i]) << "    Output: " << (mask & (1 << i)) ? HIGH : LOW; 
		cout << tab<< tab;
	}
	cout << endl; 
}

int main() {
/*
	int a = 1;
	cout << bitset<8>(a) << endl;

	for (int i = 0; i < 10; i++)
	{
		a = 1 << i;
		cout << bitset<8>(a) << endl;
	}
	*/

	outTest(0b00);
	outTest(0b01);
	outTest(0b00);
	return 0; 
}