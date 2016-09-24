//============================================================================
// Name        : FastPrime.cpp
// Author      : Rafael Moraes
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	int size;
	cin >> size;

	for (int var = 0; var < size; ++var) {
		long long in;
		cin >> in;

		if(in < 2){
			cout << "Not Prime" << endl;
			continue;
		}

		if (in % 2 == 0) {
			if (in == 2) {
				cout << "Prime" << endl;
				continue;
			} else {
				cout << "Not Prime" << endl;
				continue;
			}
		}

		bool isPrime = true;
		for (int it = 3; (it * it) <= in; it += 2) {
			if (in % it == 0) {
				cout << "Not Prime" << endl;
				isPrime = false;
				break;
			}
		}

		if(isPrime){
			cout << "Prime" << endl;
		}
		continue;
	}

	return 0;
}
