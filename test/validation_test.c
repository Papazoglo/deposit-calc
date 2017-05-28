#include "ctest.h"
#include "deposit.h"

CTEST(validation_money, all_cases)
{
	int res = money_check(9000);
	int exp = 0;
	ASSERT_EQUAL(exp, res);

	res = money_check(23000);
	exp = 0;
	ASSERT_EQUAL(exp, res);
}

CTEST(validation_term, all_cases)
{
	int res = term_check(400);
	int exp = 1;
	ASSERT_EQUAL(exp, res);
	
	res = term_check(232);
	exp = 0;
	ASSERT_EQUAL(exp, res);
}
