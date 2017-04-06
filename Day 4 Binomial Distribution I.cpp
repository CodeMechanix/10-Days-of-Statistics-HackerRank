#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

long factorial(int a, int b) {
	long n=1, r1=1, r2=1;
	for (int i = 1;i <= a;i++) {
		n *= long(i);
	}
	for (int i = 1; i <= b; i++) {
		r1 *= long(i);
	}
	for (int i = 1; i <= (a - b);i++) {
		r2 *= long(i);
	}
	return n / (r1*r2);
}

double pq(int p, int q) {
	return pow((1.09 / 2.09), double(p))*pow((1 / 2.09), double(q));
}

int main() {
	double ans = factorial(6, 3)*pq(3, 3) + factorial(6, 4)*pq(4, 2) + factorial(6, 5)*pq(5, 1) + factorial(6, 6)*pq(6, 0);
	cout.precision(3);
	cout << fixed << ans;


	return 0;
}

