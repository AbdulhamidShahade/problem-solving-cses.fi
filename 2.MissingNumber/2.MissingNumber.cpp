//Author: Abdulhamid Shahade
//Created: Aug 28, 2024
//Problem Link: https://cses.fi/problemset/task/1083

#include<iostream>
#include<vector>
using namespace std;


long long sum(long long n) {

	return (n * (n + 1)) / 2;
}

long long sum(vector<long long> a) {

	long long res = 0LL;

	for (int i = 0; i < a.size(); ++i) {

		res += a[i];
	}

	return res;
}

long long readNumber() {

	long long number = 0x0LL;
	cin >> number;

	return number;
}

void readVector(vector<long long>& a) {

	for (int i = 0; i < a.size() - 1; ++i) {

		cin >> a[i];
	}
}

int main() {

	long long n = readNumber();

	long long sumFrom1ToN = sum(n);

	vector<long long> a(n);

	readVector(a);

	long long sumInputs = sum(a);

	long long result = sumFrom1ToN - sumInputs;

	cout << result;

	return 0;
}
