#define _CRT_SECURE_NO_WARNINGS
//#define ROW 10
//#define COL 10
#include <stdio.h>
//int main()
//{
//	//�������
//	int arr[ROW][COL] = { 0 };
//	int i = 0;
//	int j = 0;
//	arr[0][0] = 1;
//	for (i = 0; i < ROW; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			if (j == i || j == 0)//��ӡ����
//			{
//				arr[i][j] = arr[0][0];
//				printf("%d ", arr[i][j]);
//			}
//			else//��ӡ�м�
//			{
//				arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
//				printf("%d ", arr[i][j]);
//			}
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

//#define ROW 8
//#define COL 8
//#include <stdio.h>
//
//void YH_sanjiao(int arr[ROW][COL], int row, int col)
//{
//	//�����������
//	int i = 0;
//	int j = 0;
//	arr[0][0] = 1;
//	for (i = 0; i < ROW; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			if (j == i || j == 0)
//			{
//				arr[i][j] = arr[0][0];
//			}
//			else
//			{
//				arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
//			}
//		}
//	}
//}
//
//void lingxin(int arr[ROW][COL], int row, int col)//��ӡ������ǵĺ���
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < row; i++)//��ӡһ��
//	{
//		for (j = 0; j < col - i - 1; j++)//��ӡ�ո�
//		{
//			printf(" ");
//		}
//		for (j = 0; j < i; j++)
//		{
//			printf("%d ", arr[i][j]);//��ӡ����
//		}
//		printf("\n");
//	}
//}
//
//
//int main()
//{
//	int arr[ROW][COL] = { 0 };
//	YH_sanjiao(arr, ROW, COL);
//	lingxin(arr, ROW, COL);
//	return 0;
//}

//int Add(int x, int y)
//{
//	return x + y;
//}

//void test(char* str)
//{
//	;
//}
//int main()
//{
//	int a = 5;
//	int b = 10;
//	Add(a, b);
//	printf("%p\n", &Add);
//	printf("%p\n", Add);
//
//	//pfΪ����ָ�����
//	int (*pf)(int, int) = &Add;
//	printf("%p\n", pf);
//
//	char (*pt)(char*) = &test;
//	printf("%p\n", pt);
//	printf("%p\n", test);
//
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int (*pf)(int, int) = &Add;
////	int c = (*pf)(a, b);//�����*���������
//	int c = pf(a, b);
//	printf("%d\n", c);
//	return 0;
//}
//int main()
//{
//	//����(*(void(*)())0)();
//	//void(*)() -- ����ָ������
//	//( void(*)() )0 -- �Ե�ַ0����ǿ������ת����������Ϊһ��������ַ
//	//*(void(*)())0 -- ��0��ַ���н����ò���
//	//(*(void(*)())0)() -- ����0��ַ���ĺ���
//
//	//����void(*signal(int, void(*)(int)))(int);
//	//1��signal�Ⱥ�()��ϣ�˵��signal�Ǻ�����
//	//2��signal�����ĵ�һ����������Ϊint���ڶ�����������Ϊ����ָ������
//	//�ú���ָ�룬ָ��һ������Ϊint����������Ϊvoid�ĺ���
//	//3��signal�����ķ�������Ҳ��һ������ָ��
//	//�ú���ָ�룬ָ��һ������Ϊint������������void�ĺ���
//	// signal��һ������������
//	return 0;
//}

//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int Sub(int x, int y)
//{
//	return x - y;
//}
//
//int Mul(int x, int y)
//{
//	return x * y;
//}
//
//int Div(int x, int y)
//{
//	return x / y;
//}
//
//void menu()
//{
//	printf("****************************\n");
//	printf("*****  1����  2����  *******\n");
//	printf("*****  3����  4����  *******\n");
//	printf("********* 0���˳� **********\n");
//	printf("****************************\n");
//}
//
//int main()
//{
//	int input = 0;
//	do 
//	{
//		int (*fpArr[5])(int, int) = { 0,Add,Sub,Mul,Div };
//		int x = 0;
//		int y = 0;
//		menu();
//		printf("��ѡ��>");
//		scanf("%d", &input);
//		printf("����������������<");
//		scanf("%d %d", &x, &y);
//		int ret = fpArr[input](x, y);
//		printf("ret=%d\n", ret);
//	} while (input);
//	return 0;
//}

//int main()
//{
//	int (*pf1)(int, int) = Add;
//	int (*pf2)(int, int) = Sub;
//	//���ͬ���͵ĺ���ָ��
//	int(*pfArr[2])(int, int) = { pf1,Sub };//pfArr����ָ������
//	int* p = pfArr[1];
//	printf("%p\n%p\n", p, pf2);
//	return 0;
//}

