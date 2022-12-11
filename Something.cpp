#include <iostream>

using namespace std;

int num, complete, remain, space;

int main() {
	cout << "Please enter the number of rows: ";
	cin >> num;
	complete = num / 11;
	remain = num % 11;
	for(int m = 1; m <= complete; m++) {
		space = 10;
		for(int i = 1; i <= 6; i++) {
			for(int k = 0; k < space; k += 2) {
				cout << "  ";
			}
			space -= 2;
			for(int k = 0; k < i; k++) {
				cout << "*";
			}
			cout << endl;
		}
		space = 2;
		for(int i = 5; i > 0; i--) {
			for(int k = 0; k < space; k += 2) {
				cout << "  ";
			}
			space += 2;
			for(int k = 0; k < i; k++) {
				cout << "*";
			}
			cout << endl;
		}
	}
	if(remain > 6) {
		space = 10;
		for(int i = 1; i <= 6; i++) {
			for(int k = 0; k < space; k += 2) {
				cout << "  ";
			}
			space -= 2;
			for(int k = 0; k < i; k++) {
				cout << "*";
			}
			cout << endl;
		}
		remain -= 6;
		space = 2;
		for(int i = 5; i > 5 - remain; i--) {
			for(int k = 0; k < space; k += 2) {
				cout << "  ";
			}
			space += 2;
			for(int k = 0; k < i; k++) {
				cout << "*";
			}
			cout << endl;
		}
	}
	else {
		space = 10;
		for(int i = 1; i <= remain; i++) {
			for(int k = 0; k < space; k += 2) {
				cout << "  ";
			}
			space -= 2;
			for(int k = 0; k < i; k++) {
				cout << "*";
			}
			cout << endl;
		}
	}
	cout<<endl;system("PAUSE");return 0;
}
