# include <stdio.h>

int main()
{
	double Word, Math, Eng, Ave;
	printf("[����, ����, ����]������ ������ �Է��Ͻÿ� : ");
	scanf_s("%lf %lf %lf", &Word , &Eng , &Math);
	Ave = (Word + Math + Eng) / 3;
	if (Ave >= 60)
	{
		printf("�հ��Դϴ�!\n");
	}
	else
	{
		printf("���հ��Դϴ�!\n");
	}
	return 0;
}