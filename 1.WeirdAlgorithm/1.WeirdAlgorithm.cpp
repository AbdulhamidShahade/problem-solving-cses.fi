//Author: Abdulhamid Shahade
//Created: Aug 27, 2024
//Problem Link: https://cses.fi/problemset/task/1068

#include<iostream>
using namespace std;


int main() {

	long long n = 0LL;
	cin >> n;

	if (n != 1) {

		while (n != 1) {

			cout << n << " ";

			if (n % 2 == 0) {

				n /= 2;
			}
			else {

				n = n * 3 + 1;
			}
		}
	}

	cout << n;

	return 0;
}