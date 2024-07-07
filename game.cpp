#include<iostream>

using namespace std;

int trial = 0;

void guess(int a, int z) {



	if (a > 100 || a < 1) {

		cout << "please enter number between 1 and 100: ";

		cin >> a;

		guess(a, z);
		trial += 1;
	}



	else if (a > z) {

		cout << "too high" << endl;

		cout << "enter new number: ";

		cin >> a;

		trial += 1;

		guess(a, z);
	}

	else if (a < z) {

		cout << "too low" << endl;

		cout << "enter new number: ";

		cin >> a;

		trial++;

		guess(a, z);

	}

	else if (a == z) {
		if (trial == 0) {
			cout << "congratulations you got it from the first time";
		}
		else {
			cout << "correctly" << endl << "you got it in " << trial + 1 << " times";
		}
	}

}
int main() {

	int x, y ;
	cout << "let your friend enter number for you to guess";
	cin >> y;
	cout << "\033[2J\033[1;1H";
    cout << "Let's start\n";
	cout << "guess a number between 1 and 100: ";

	cin >> x;

	guess(x, y);
	return 0;
}
