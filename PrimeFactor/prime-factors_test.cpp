#include "gmock/gmock.h"
#include "prime-factors.cpp"

using namespace testing;
class PrimeFixture : public Test {
public:
	PrimeFactors prime_factor;
	vector<int> expected;
};

TEST_F(PrimeFixture, Of1) {
	vector<int> exepcted = {};
	EXPECT_EQ(exepcted, prime_factor.of(1));
}

TEST_F(PrimeFixture, Of2) {
	vector<int> exepcted = {2};
	EXPECT_EQ(exepcted, prime_factor.of(2));
}

TEST_F(PrimeFixture, Of3) {
	vector<int> exepcted = {3};
	EXPECT_EQ(exepcted, prime_factor.of(3));
}

TEST_F(PrimeFixture, Of4) {
	vector<int> exepcted = {2, 2};
	EXPECT_EQ(exepcted, prime_factor.of(4));
}

TEST_F(PrimeFixture, Of6) {
	vector<int> exepcted = {2, 3};
	EXPECT_EQ(exepcted, prime_factor.of(6));
}

TEST_F(PrimeFixture, Of9) {
	vector<int> exepcted = {3, 3};
	EXPECT_EQ(exepcted, prime_factor.of(9));
}

TEST_F(PrimeFixture, Of12) {
	vector<int> exepcted = {2, 2, 3};
	EXPECT_EQ(exepcted, prime_factor.of(12));
}