#include <iostream>

using namespace std;

long long sum_of_arithmetic_series(long long first, long long diff, int n) {
	long long last = first + (n - 1) * diff;
	return n * (first + last) / 2;
}

long long sum_multiples_of_3_and_5(long long n) {
	int class_3_series_last_element = n - (n % 3);
	int class_3_series_length = class_3_series_last_element / 3;
	long long class_3_series_sum = sum_of_arithmetic_series(3, 3, class_3_series_length);

	int class_5_series_last_element = n - (n % 5);
        int class_5_series_length = class_5_series_last_element / 5;
        long long class_5_series_sum = sum_of_arithmetic_series(5, 5, class_5_series_length);

	int class_15_series_last_element = n - (n % 15);
        int class_15_series_length = class_15_series_last_element / 15;
        long long class_15_series_sum = sum_of_arithmetic_series(15, 15, class_15_series_length);
	return class_3_series_sum + class_5_series_sum - class_15_series_sum;
}

int main() {

	cout << "#1 Multiples of 3 and 5 - Math Approach" << endl;
	long long n;
	cout << "Enter a value for n: ";
	cin >> n;

	long long sum = sum_multiples_of_3_and_5(n-1);
	cout << "The sum of the multiples of 3 and 5 below " << n << " is: " << sum << endl; 

	return 0;
}
