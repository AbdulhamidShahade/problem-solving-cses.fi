//Author: Abdulhamid Shahade
//Created: Aug 29, 2024
//Problem Link: https://cses.fi/problemset/task/1621


#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int readNumber() {

	int number = 0x0;
	cin >> number;
	return number;
}

int main() {

	int n = readNumber();

	vector<int> x(n);

	for (int i = 0; i < n; ++i) {

		cin >> x[i];
	}

	sort(x.begin(), x.end());

	int res = 1;

	for (int i = 1; i < n; ++i) {

		if (x[i] != x[i - 1]) {

			++res;
		}
	}

	cout << res;

	return 0;
}