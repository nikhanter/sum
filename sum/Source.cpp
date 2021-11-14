#include <iostream>

using namespace std;

int main() {
	int a = 0;
	int b = 1;
	for (; b != 0;) {
		cin >> b;
		a = a + b;
	}
	cout << a;
}
