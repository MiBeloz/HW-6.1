#include "math_functions.h"

long long int sum(long long int x, long long int y) {
	return x + y;
}

long long int subtraction(long long int x, long long int y) {
	return x - y;
}

long long int multiplication(long long int x, long long int y) {
	return x * y;
}

long double division(long long int x, long long int y) {
	return static_cast<long double>(x) / y;
}

long long int power(long long int x, long long int y) {
	long long int result{ 1 };

	for (long long int i = 0; i < y; i++) {
		result *= x;
	}

	return result;
}
