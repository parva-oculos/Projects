# include <stdio.h>

int main()
{
	int num;
	printf("������ �Է��Ͻÿ� : ");
	scanf_s("%d", &num);
	��f (num >= 0)
	{
		num = num;
	}
	else
	{
		num = -num;
	}
	printf("�Է��� ���� ���밪�� %d", num);
	return 0;
	//"||" or ����Ʈ ==�� �̰ų�? ��� ��(�������� ��)
	//"&&" and ����Ʈ 1=�� �ٸ���? ��� ��
	//e.g. (num%3==0||num%5==0)
	//e.g. if(num%3==0&&num%5==0)
}
