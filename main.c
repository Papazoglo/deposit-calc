#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"RUS");
	printf("Hello World\n");
	int m,t;
	printf("������� �������� ����� (>=10000 ������): ");
	scanf("%d",&m);
	printf("������� ���� ������ (<=365 ����): ");
	scanf("%d",&t);
	return 0;
}
