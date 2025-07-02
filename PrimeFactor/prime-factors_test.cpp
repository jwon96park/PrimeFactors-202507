#include "gmock/gmock.h"
#include "prime-factors.cpp"

TEST(PrimeFactors, Of1) {
	PrimeFactors prime_factor;
	vector<int> exepcted = {};
	EXPECT_EQ(exepcted, prime_factor.of(1));
}

TEST(PrimeFactors, Of2) {
	PrimeFactors prime_factor;
	vector<int> exepcted = {2};
	EXPECT_EQ(exepcted, prime_factor.of(2));
}