#include<iostream>

using namespace std;

int trial = 0;

string guess(int a, int z) {



	if (a > 100 || a < 1) {

		cout << "please enter number between 1 and 100: ";

		cin >> a;

		guess(a, z);

	}



	else if (a > z) {

		cout << "too high" << endl;

		cout << "enter new number";

		cin >> a;

		trial++;

		guess(a, z);
	}

	else if (a < z) {

		cout << "too low" << endl;

		cout << "enter new number";

		cin >> a;

		trial++;

		guess(a, z);

	}

	else if (a == z) {

		return "correctly";
	}
	return ".";
} 
int main() {

	int x, y = 70;

	cout << "guess a number between 1 and 100: ";

	cin >> x;

	cout << guess(x, y) << trial;
	return 0;
}