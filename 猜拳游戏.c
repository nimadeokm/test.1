//#define  _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>  // srand      rand
//#include<time.h>  //time
//
//enum PK{ʯͷ,����,��};//ʯͷ=0  ����=1  ��=2
//
//int main()
//{
//	enum PK computer, player;//computer����   player���
//	//unsigned j = 1;//����ϵͳ��ʱ�䣬������ȥ�仯
//
//	srand((unsigned)time(NULL));//�������������
//	//time(NULL) ����ϵͳ��ʱ�� ��λ����
//	//1970��1��1��0ʱ��ʼ��ʱ
//	while (1)
//	{
//		//���������ֵ
//		//j += 2;
//	
//
//			//rand() �õ�һ�����ֵ
//		computer = rand() % 3;//0~2
//
//		printf("\n��ȭ��Ϸ��\n0��ʯͷ\n1������\n2����\n���ȭ:");
//
//		//������ҵ�����  
//		scanf("%d", &player);
//
//		//��ȭ���ж�
//		switch (player)
//		{
//		case ʯͷ:printf("���:ʯͷ\n");
//			switch (computer)
//			{
//			case ʯͷ:printf("����:ʯͷ\n");
//				printf("ƽ��!\n\n");
//				break;
//			case ����:printf("����:����\n");
//				printf("���Ӯ��!\n\n");
//				break;
//			case ��:printf("����:��\n");
//				printf("�������!\n\n");
//				break;
//			}
//			break;
//		case ����:printf("���:����\n");
//			switch (computer)
//			{
//			case ʯͷ:printf("����:ʯͷ\n");
//				printf("�������!\n\n");
//				break;
//			case ����:printf("����:����\n");
//				printf("ƽ��!\n\n");
//				break;
//			case ��:printf("����:��\n");
//				printf("���Ӯ��!\n\n");
//				break;
//			}
//			break;
//		case ��:printf("���:��\n");
//			switch (computer)
//			{
//			case ʯͷ:printf("����:ʯͷ\n");
//				printf("���Ӯ��!\n\n");
//				break;
//			case ����:printf("����:����\n");
//				printf("�������!\n\n");
//				break;
//			case ��:printf("����:��\n");
//				printf("ƽ��!\n\n");
//				break;
//			}
//			break;
//		}
//
//	}
//	return 0;
//}