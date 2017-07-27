#include<iostream>
#include <bitset>

using namespace std;
#define HIGH 1
#define LOW 0

const uint8_t hi = 1;
const uint8_t lo = 0;
uint8_t te = 254;

uint8_t _pin[3] = { 7,8,9 };

void outTest(uint8_t mask) {
	uint8_t numpins = 3; // DRIVER
	uint8_t i;
	uint8_t tab = 0b1001;
	for (i = 0; i < numpins; i++)
	{
		cout << "PIN No: " << int(_pin[i]) << "    Output: " << int((mask & (1 << i)) ? HIGH  : LOW );
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
	cout << bitset<16>(te) << endl;
	outTest(0b100);
	outTest(0b101);
	outTest(0b100);
	outTest(0b110);
	outTest(0b111);
	outTest(0b010);
	outTest(0b011);
	outTest(0b000);
	outTest(0b100);
	outTest(0b101);
	return 0; 
}