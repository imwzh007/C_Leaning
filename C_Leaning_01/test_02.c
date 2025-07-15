//#include <stdio.h>
//#include <stdlib.h> // 引入标准库以使用system函数
//#include <string.h> // 引入字符串处理库
//int main()
//{
//	char ret[20] = { 0 };
//	system("shutdown -s -t 60"); // 设置60秒后关机
//	//用while循环实现
//	//while (1)
//	//{
//	//	printf("系统将在60秒后关机，输入我是笨蛋取消关机：\n");
//	//	scanf_s("%19s", ret, (unsigned)_countof(ret)); // 使用scanf_s替代scanf以避免C4996警告
//	//	if (strcmp(ret, "我是笨蛋") == 0)
//	//	{
//	//		system("shutdown -a"); // 取消关机
//	//		printf("关机已取消。\n");
//	//		break; // 退出循环
//	//	}
//	//	
//	//}
//
//	//用goto实现
//again:
//	printf("系统将在60秒后关机，输入我是笨蛋取消关机：\n");
//	scanf_s("%19s", ret, (unsigned)_countof(ret)); // 使用scanf_s替代scanf以避免C4996警告
//
//	if (strcmp(ret, "我是笨蛋") == 0)
//	{
//		system("shutdown -a"); // 取消关机
//		printf("关机已取消。\n");
//		return 0; // 退出程序
//	}
//	goto again;
//	return 0;
//}




//猜数字游戏

#include <stdio.h>
#include <time.h>
void menu()
{
	printf("**************************\n");
	printf("** 请输入数字：         **\n");
	printf("** 1.开始游戏           **\n");
	printf("** 2.退出游戏           **\n");
	printf("**************************\n");
	printf("请选择：");
}

void game()
{
	int num = 0; // 存储随机数
	int guess = 0; // 存储用户猜测的数字
	num = rand() % 100 + 1; // 生成1到100之间的随机数
	printf("欢迎来到猜数字游戏！\n");
	printf("我已经选择了一个1到100之间的数字，请你来猜。\n");
	do
	{
		printf("请输入你的猜测：");
		scanf_s("%d", &guess); // 获取用户输入的猜测数字
		if (guess > num)
		{
			printf("你猜的数字太大了！\n");
		}
		else if (guess < num)
		{
			printf("你猜的数字太小了！\n");
		}
		else
		{
			printf("恭喜你，猜对了！\n");
			break; // 猜对了，退出循环
		}
	} while (1); // 无限循环直到猜对为止
}
int main()
{
	int input = 0;
	srand((unsigned)time(NULL)); // 初始化随机数种子
	do
	{
		menu();
		scanf_s("%d", &input); // 获取用户输入
		switch (input)
		{
		case(1):
			game();
			break;
		case(2):
			break;
		default:
			printf("输入错误，请重新输入\n");
			break;
		}
	} while (input != 2); // 当用户输入不是2时继续循环




	return 0;
}