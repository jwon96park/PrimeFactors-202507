#include <iostream>
#include "gmock/gmock.h"
#include "prime-factors.cpp"

using namespace testing;

int main() {
	InitGoogleMock();
	return RUN_ALL_TESTS();
}