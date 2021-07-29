#include <iostream>

using namespace std;

extern const int a, b, c, d;

int main() {

	// the task two 

	int number;
	cout << "Enter integer: ";
	cin >> number;
	const int numLimit = 21;
	const int answer = (number<= numLimit) ? (number- numLimit) : (number- numLimit) << 1;
	cout << "the task two = " << answer << endl;

	// the task three

	const int FIELD = 3;
	int battle[FIELD][FIELD][FIELD] = { 0 };

	int* PArr = nullptr;

	PArr = &battle[1][1][1];

	*PArr = 1'000'000;

	cout << "task three = " << battle[1][1][1] << endl;
	cout << "task three = " << *PArr << endl;

	// the task one - four
	
	
	const float i = a * (b + (static_cast<float> (c) / d));

	cout << "task one - four = " << i << endl;
	

	return 0;
}
