//#include <stdio.h>
////创捷结构体
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
//	//// scantf函数在此版本不适用，使用scant_s函数替代
//	//float b, c;
//	////scanf_s函数两输入间用空格隔开,或按照指定要求书写，如%f,%f等
//	//scanf_s("%f %f", &b, &c);
//	//printf("b= %lf, c = %lf\n", b, c);
//
//	struct Stu s1 = { "zhangsan",20,95.5 };
//	//结构体对象.成员名     "."操作符
//	printf("Name: %s, Age: %d, Score: %.2f\n", s1.name, s1.age, s1.score);
//
//	//结构体指针->成员名    "->"操作符
//	struct Stu * ps ;
//	ps = &s1; 
//	printf("Name: % s, Age:% d, Score: % .2f\n", ps->name, ps->age, ps->score);
//	return 0;
//}


////不知道为什么无法正常输出0~100之间的奇数
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
//	//用Ctrl+Z 获取EOF 结束输入  
//	while ((ch = getchar()) != EOF)
//	{
//		putchar(ch);
//	}
//
//	return 0;
//}




//清除缓冲区，始终报错
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	//假设一密码是字符串
//	char password[20] = { 0 };
//	printf("Please input your password:\n");
//	scanf_s("%s", password[0]);
//
//	int c;
//	while ((c = getchar()) != '\n' && c != EOF); // 清除缓冲区
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




////测试反馈：getchar()返回的是int类型，而不是字符串类型
////          字符一定要用单引号，而不是双引号
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
//	printf("输入:\n");
//	scanf_s("%4d%2d%2d", &year, &month, &day);
//	printf("输出：");
//	printf("%4d年\n%02d月\n%02d日\n", year, month, day);
//
//	return 0;
//}



////计算阶乘和
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int result = 1;
//	long int sum = 0;
//	int sign = 0;
//	scanf_s("%d", &n);
//	for (; n > 0; n--)             //两层循环，重复计算过多
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




//二分查找
//。。。。。。



////求数组长度
//#include <stdio.h>	
//#include <string.h> // 引入字符串处理库
//int main()
//{
//	char arr1[] = "welcome to C!";
//	char arr2[] = "abc";
//
//	int length = 0;
//	int length1 = 0;
//	int length2 = 0;
//	// 1.计算字符串长度
//	//while (arr1[length] != '\0') // 计算字符串长度
//	//{
//	//	length++;
//	//}
//
//	//2.计算字符串长度    'c'下标是2
//	// 当数组是字符串时，strlen函数计算的是有效字符的长度，不包括结尾的'\0'字符
//	// 当数组是字符数组时，sizeof函数计算的是整个数组的长度，包括结尾的'\0'字符
//	// 当数组是字符串时，strlen函数和sizeof函数的结果不同
//	// 当存放数字时，strlen函数和sizeof函数的结果相同，因为没有结尾的'\0'字符
//	//{ a b c \0 }
//	// 0  1  2  3
//
//	length1 = strlen(arr2);   //
//	printf("%d\n", length1); // 输出长度  strlen  3   有三个有效字符\0不算
//	length2 = sizeof(arr2) / sizeof(arr2[0]);
//	printf("%d\n", length2); // 输出长度   sizeof   4   有四个字符，包括\0
//	return 0;
//}
//


//字符串从两侧向中间移动
#include <windows.h> // 引入Windows头文件以使用Sleep函数
#include <stdio.h>
#include <string.h> // 引入字符串处理库
#include <stdlib.h>	// 引入标准库以使用system函数
int main()
{
	char arr1[] = "welcome to my project!";
	char arr2[] = "**********************";
	int left = 0;
	int right = strlen(arr1) - 1;

	while (left < right)
	{
		printf("%s\n", arr2);
		Sleep(500); // 暂停0.5秒钟,500毫秒
		system("cls"); // 清屏
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		left++;
		right--;
	}
	printf("%s\n", arr2);
	return 0;
}