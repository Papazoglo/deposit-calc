#include "ctest.h"
#include "deposit.c"

CTEST(calculations_suite, all_cases)
{
	double res = value_count(10000, 30);
	double exp = 9000;
	ASSERT_DBL_NEAR_TOL(exp, res, 1);
	
	res = value_count(15000, 45);
	exp = 15300;
	ASSERT_DBL_NEAR_TOL(exp, res, 1);
	
	res = value_count(23000, 143);
	exp = 24380;
	ASSERT_DBL_NEAR_TOL(exp, res, 1);
	
	res = value_count(16000, 261);
	exp = 17920;
	ASSERT_DBL_NEAR_TOL(exp, res, 1);

	res = value_count(100000, 30);
	exp = 90000;
	ASSERT_DBL_NEAR_TOL(exp, res, 1);

	res = value_count(100000, 51);
	exp = 103000;
	ASSERT_DBL_NEAR_TOL(exp, res, 1);
	
	res = value_count(100000, 200);
	exp = 108000;
	ASSERT_DBL_NEAR_TOL(exp, res, 1);

	res = value_count(100000, 340);
	exp = 115000;
	ASSERT_DBL_NEAR_TOL(exp, res, 1);
}
