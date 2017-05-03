#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"RUS");
	printf("Hello World\n");
	int m,t;
	printf("¬ведите вносимую сумму (>=10000 рублей): ");
	scanf("%d",&m);
	printf("¬ведите срок вклада (<=365 дней): ");
	scanf("%d",&t);
	return 0;
}
