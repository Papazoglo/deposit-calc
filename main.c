#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"RUS");
	printf("Hello World\n");
	int m,t;
	printf("������� �������� ����� (>=10000 ������): ");
	while(1)
	{
		scanf("%d",&m);
		if(m>=10000)
			break;
		printf("����� ������� �������\n������� ����� ������: ");
	}
	printf("������� ���� ������ (<=365 ����): ");
	while(1)
	{
		scanf("%d",&t);
		if(t<=365)
			break;
		printf("���� ������ ����� �������\n������� ���� ������ ������: ");
	}
	return 0;
}
