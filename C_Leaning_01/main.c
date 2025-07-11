#include <stdio.h>
int main()
{
	printf("Hello World!\n");
	int a = 5;
	// scantf函数在此版本不适用，使用scant_s函数替代
	float b, c;
	//scanf_s函数两输入间必须用空格隔开
	scanf_s("%f %f", &b, &c);
	printf("b= %lf, c = %lf\n", b, c);

	return 0;
}