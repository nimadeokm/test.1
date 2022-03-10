//#define  _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>  // srand      rand
//#include<time.h>  //time
//
//enum PK{石头,剪刀,布};//石头=0  剪刀=1  布=2
//
//int main()
//{
//	enum PK computer, player;//computer电脑   player玩家
//	//unsigned j = 1;//打乱系统的时间，不以秒去变化
//
//	srand((unsigned)time(NULL));//播下随机的种子
//	//time(NULL) 返回系统的时间 单位是秒
//	//1970年1月1日0时开始计时
//	while (1)
//	{
//		//给电脑随机值
//		//j += 2;
//	
//
//			//rand() 得到一个随机值
//		computer = rand() % 3;//0~2
//
//		printf("\n猜拳游戏：\n0、石头\n1、剪刀\n2、布\n请猜拳:");
//
//		//输入玩家的数据  
//		scanf("%d", &player);
//
//		//猜拳的判断
//		switch (player)
//		{
//		case 石头:printf("玩家:石头\n");
//			switch (computer)
//			{
//			case 石头:printf("电脑:石头\n");
//				printf("平局!\n\n");
//				break;
//			case 剪刀:printf("电脑:剪刀\n");
//				printf("玩家赢了!\n\n");
//				break;
//			case 布:printf("电脑:布\n");
//				printf("玩家输了!\n\n");
//				break;
//			}
//			break;
//		case 剪刀:printf("玩家:剪刀\n");
//			switch (computer)
//			{
//			case 石头:printf("电脑:石头\n");
//				printf("玩家输了!\n\n");
//				break;
//			case 剪刀:printf("电脑:剪刀\n");
//				printf("平局!\n\n");
//				break;
//			case 布:printf("电脑:布\n");
//				printf("玩家赢了!\n\n");
//				break;
//			}
//			break;
//		case 布:printf("玩家:布\n");
//			switch (computer)
//			{
//			case 石头:printf("电脑:石头\n");
//				printf("玩家赢了!\n\n");
//				break;
//			case 剪刀:printf("电脑:剪刀\n");
//				printf("玩家输了!\n\n");
//				break;
//			case 布:printf("电脑:布\n");
//				printf("平局!\n\n");
//				break;
//			}
//			break;
//		}
//
//	}
//	return 0;
//}