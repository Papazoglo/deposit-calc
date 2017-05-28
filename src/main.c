#include <stdio.h>
#include "deposit.h"

int main()
{

	int money, term;
	printf("Введите сумму, которую хотите вложить ( >=10000 рублей ): ");
	scanf("%d", &money);
	printf("Введите срок вклада ( <=365 дней ): ");
	scanf("%d", &term);
	while(1)
	{
		if (money_check(money) == 1)
		{
			printf("Введите сумму, которую хотите вложить ( >=10000 рублей ): ");
			scanf("%d", &money);
		}
		else
			break;
	}
	while(1)
	{
		if (term_check(term) == 1)
		{
			printf("Введите срок вклада ( <=365 дней ): ");
			scanf("%d", &term);
		}
		else
			break;
	}
	printf("Сумма вклада на момент окончания срока: %d рублей", value_count(money, term));
	return 0;
}
