#include "ctest.h"
#include "deposit.c"

CTEST(suite1, simple_test)
{
	float result = value_count(10000, 30);
	float expected = 9000;
	ASSERT_EQUAL_U(expected, result);
}
