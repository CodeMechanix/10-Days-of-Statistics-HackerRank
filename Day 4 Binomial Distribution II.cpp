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
	return pow(0.12, double(p))*pow(0.88, double(q));
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    // P(X=0) + P(X=1) +P(X=2)
    double ans1 = factorial(10,0)*pq(0,10) + factorial(10,1)*pq(1,9) +factorial(10,2)*pq(2,8);
    double ans2 = 1.0 - factorial(10,0)*pq(0,10) - factorial(10,1)*pq(1,9);
    cout.precision(3);
    cout << fixed << ans1 << endl << ans2;
    return 0;
}
