//#include <stdio.h>
////���ݽṹ��
//struct Stu
//{
//	char name[20];
//	int age;
//	float score;
//};
//int main()
//{
//	printf("Hello World!\n");
//	int a = 5;
//
//	//// scantf�����ڴ˰汾�����ã�ʹ��scant_s�������
//	//float b, c;
//	////scanf_s������������ÿո����,����ָ��Ҫ����д����%f,%f��
//	//scanf_s("%f %f", &b, &c);
//	//printf("b= %lf, c = %lf\n", b, c);
//
//	struct Stu s1 = { "zhangsan",20,95.5 };
//	//�ṹ�����.��Ա��     "."������
//	printf("Name: %s, Age: %d, Score: %.2f\n", s1.name, s1.age, s1.score);
//
//	//�ṹ��ָ��->��Ա��    "->"������
//	struct Stu * ps ;
//	ps = &s1; 
//	printf("Name: % s, Age:% d, Score: % .2f\n", ps->name, ps->age, ps->score);
//	return 0;
//}


////��֪��Ϊʲô�޷��������0~100֮�������
//#include <stdio.h>
//int main()
//{ 
//	int i = 1;
//	printf("Odd numbers from 1 to 100:\n");
//	for (i = 1; i <= 100; i++);
//	{
//		if (i % 2 == 1)
//			printf("%d ", i);
//	}
//	printf("over\n");
//	return 0;
//}
//


//#include <stdio.h>
//int main()
//{
//	int ch;
//
//	//��Ctrl+Z ��ȡEOF ��������  
//	while ((ch = getchar()) != EOF)
//	{
//		putchar(ch);
//	}
//
//	return 0;
//}




//�����������ʼ�ձ���
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	//����һ�������ַ���
//	char password[20] = { 0 };
//	printf("Please input your password:\n");
//	scanf_s("%s", password[0]);
//
//	int c;
//	while ((c = getchar()) != '\n' && c != EOF); // ���������
//
//	int ch = getchar();
//	printf("Please insure your password:Y/N?");
//	
//	if (ch == 'Y')
//		printf("YES\n");
//	else if (ch == 'N')
//	printf("NO\n");
//	return 0;
//}




////���Է�����getchar()���ص���int���ͣ��������ַ�������
////          �ַ�һ��Ҫ�õ����ţ�������˫����
//#include <stdio.h>	
//int main()
//{
//	int ch = "\n";
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch < '0' || ch > '9')
//			continue;
//		putchar(ch);
//	}
//
//	return 0;
//}




//#include <stdio.h>
//int main()
//{
//	int year, month, day;
//	printf("����:\n");
//	scanf_s("%4d%2d%2d", &year, &month, &day);
//	printf("�����");
//	printf("%4d��\n%02d��\n%02d��\n", year, month, day);
//
//	return 0;
//}



////����׳˺�
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int result = 1;
//	long int sum = 0;
//	int sign = 0;
//	scanf_s("%d", &n);
//	for (; n > 0; n--)
//	{
//		result = 1;
//		for (i = 1; i <= n; i++)
//		{
//			result = result * i;
//		}
//		if (sign == 0)
//		{
//			printf("result = %d\n", result);
//			sign += 1;
//		}
//		sum += result;
//	}
//	printf("sum = %ld\n", sum);
//
//	return 0;
//}