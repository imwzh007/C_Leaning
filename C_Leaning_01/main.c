#include <stdio.h>
int main()
{
	printf("Hello World!\n");
	int a = 5;
	// scantf�����ڴ˰汾�����ã�ʹ��scant_s�������
	float b, c;
	//scanf_s���������������ÿո����
	scanf_s("%f %f", &b, &c);
	printf("b= %lf, c = %lf\n", b, c);

	return 0;
}