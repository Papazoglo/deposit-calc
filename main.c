#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"RUS");
	printf("Hello World\n");
	int m,t;
	printf("¬ведите вносимую сумму (>=10000 рублей): ");
	while(1)
	{
		scanf("%d",&m);
		if(m>=10000)
			break;
		printf("—умма введена неверно\n¬ведите взнос заново: ");
	}
	printf("¬ведите срок вклада (<=365 дней): ");
	while(1)
	{
		scanf("%d",&t);
		if(t<=365)
			break;
		printf("—рок вклада введЄн неверно\n¬ведите срок вклада заново: ");
	}
	return 0;
}
