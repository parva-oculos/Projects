# include <stdio.h>

int main()
{
	double a,b,result;
	printf("���� �ΰ� �Է��ϼ���\n");
	scanf_s("%lf %lf",&a,&b);
	result = a*b;
	printf("%lf*%lf=%lf\n",a,b,result);
	printf("%lf/%lf=%lf\n", a, b, a / b);
	//%d�� ������ ���� �ҷ����� %lf�� �Ǽ��� ���� �ҷ�����//
	//int�� 4����Ʈ double�� 8����Ʈ char�� 1����Ʈ//
	//1����Ʈ�� 8��Ʈ//
	//unsigned : ����ũ�⸸ŭ ����� ���ܾ���//
	//&������ : �ּ� �ҷ�����//
	//scanf ���� \n ������//

}