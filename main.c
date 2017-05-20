#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"RUS");
	int money, time; float bPercent = 0;
	printf("¬ведите вносимую сумму (>=10000 рублей): ");
	while(1)
	{
		scanf("%d",&money);
		if(money>=10000)
			break;
		printf("—умма введена неверно\n¬ведите взнос заново: ");
	}
	printf("¬ведите срок вклада (<=365 дней): ");
	while(1)
	{
		scanf("%d",&time);
		if(time<=365)
			break;
		printf("—рок вклада введЄн неверно\n¬ведите срок вклада заново: ");
	}
	if (money >= 100000)
		bPercent = 0.01;
	if (time <= 30)
		money *= 0.9;
	else if (time <= 120)
		money *= 1 + 0.02 + bPercent * 1;
	else if (time <= 240)
		money *= 1 + 0.6 + bPercent * 2;
	else if (time <= 365)
		money *= 1 + 0.12 + bPercent * 3;
	printf("—умма вклада на момент окончани€ срока: %d", money);
	return 0;
}
