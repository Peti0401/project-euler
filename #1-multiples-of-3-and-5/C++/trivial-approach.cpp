#include <iostream>
using namespace std;

long long sum_multiples_of_3_and_5(int n) {
	long long sum = 0;
	for (int i = 1; i < n; i++)
		if ((i % 3 == 0) || (i % 5 == 0))
			sum += i;
	return sum;
}

int main() {
	int n;
	cout << "#1 Multiples of 3 and 5 - Trivial Solution" << endl;
	cout << "Enter a value for n: ";
	cin >> n;
	long long sum = sum_multiples_of_3_and_5(n);
	cout << "The sum of multiples of 3 and 5 below " << n << " is: " << sum << endl;
	return 0;
}
