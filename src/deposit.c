int money_check(int money)
{
	if(money < 10000)
		return 1;
	else
		return 0;
}

int term_check(int term)
{
	if(term >= 365)
		return 1;
	else
		return 0;
}

int value_count(int money, int term)
{
	float bPercent = 0;
	if (money >= 100000)
		bPercent = 0.01;
	if (term <= 30)
		money *= 0.9;
	else if (term <= 120)
		money *= 1 + 0.02 + bPercent * 1;
	else if (term <= 240)
		money *= 1 + 0.6 + bPercent * 2;
	else if (term <= 365)
		money *= 1 + 0.12 + bPercent * 3;
	return money;
}
