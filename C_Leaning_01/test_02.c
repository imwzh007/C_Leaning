//#include <stdio.h>
//#include <stdlib.h> // �����׼����ʹ��system����
//#include <string.h> // �����ַ��������
//int main()
//{
//	char ret[20] = { 0 };
//	system("shutdown -s -t 60"); // ����60���ػ�
//	//��whileѭ��ʵ��
//	//while (1)
//	//{
//	//	printf("ϵͳ����60���ػ����������Ǳ���ȡ���ػ���\n");
//	//	scanf_s("%19s", ret, (unsigned)_countof(ret)); // ʹ��scanf_s���scanf�Ա���C4996����
//	//	if (strcmp(ret, "���Ǳ���") == 0)
//	//	{
//	//		system("shutdown -a"); // ȡ���ػ�
//	//		printf("�ػ���ȡ����\n");
//	//		break; // �˳�ѭ��
//	//	}
//	//	
//	//}
//
//	//��gotoʵ��
//again:
//	printf("ϵͳ����60���ػ����������Ǳ���ȡ���ػ���\n");
//	scanf_s("%19s", ret, (unsigned)_countof(ret)); // ʹ��scanf_s���scanf�Ա���C4996����
//
//	if (strcmp(ret, "���Ǳ���") == 0)
//	{
//		system("shutdown -a"); // ȡ���ػ�
//		printf("�ػ���ȡ����\n");
//		return 0; // �˳�����
//	}
//	goto again;
//	return 0;
//}




//��������Ϸ

#include <stdio.h>
#include <time.h>
void menu()
{
	printf("**************************\n");
	printf("** ���������֣�         **\n");
	printf("** 1.��ʼ��Ϸ           **\n");
	printf("** 2.�˳���Ϸ           **\n");
	printf("**************************\n");
	printf("��ѡ��");
}

void game()
{
	int num = 0; // �洢�����
	int guess = 0; // �洢�û��²������
	num = rand() % 100 + 1; // ����1��100֮��������
	printf("��ӭ������������Ϸ��\n");
	printf("���Ѿ�ѡ����һ��1��100֮������֣��������¡�\n");
	do
	{
		printf("��������Ĳ²⣺");
		scanf_s("%d", &guess); // ��ȡ�û�����Ĳ²�����
		if (guess > num)
		{
			printf("��µ�����̫���ˣ�\n");
		}
		else if (guess < num)
		{
			printf("��µ�����̫С�ˣ�\n");
		}
		else
		{
			printf("��ϲ�㣬�¶��ˣ�\n");
			break; // �¶��ˣ��˳�ѭ��
		}
	} while (1); // ����ѭ��ֱ���¶�Ϊֹ
}
int main()
{
	int input = 0;
	srand((unsigned)time(NULL)); // ��ʼ�����������
	do
	{
		menu();
		scanf_s("%d", &input); // ��ȡ�û�����
		switch (input)
		{
		case(1):
			game();
			break;
		case(2):
			break;
		default:
			printf("�����������������\n");
			break;
		}
	} while (input != 2); // ���û����벻��2ʱ����ѭ��




	return 0;
}