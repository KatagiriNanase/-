#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<stdlib.h>
#include<string.h>
#include<windows.h>
#include<time.h>
#include"fun.h"
char word0[] = "准备接受好我的关机调教了吗??嘻嘻嘻!!";
char word1[] = { "猜一下吧大哥哥：" };
char word2[] = { "再猜一下吧，没用的大哥哥：" };
char word3[] = { "怎…怎么会被猜中！反正用了什么不正当的手段吧！(╯°□°）╯︵ ┻━┻" };
char word4[] = { "呜呜呜，关机被解除了ε(┬┬﹏┬┬)3" };
char word5[] = { "你这杂鱼还敢跟我雄小鬼来一局吗，你肯定不敢吧！" };
char word6[] = { "你怎么敢的啊大哥哥，这次准备赌上自己的贞操吧嘻嘻嘻！" };
char word7[] = { "真是杂鱼呢大哥哥，连这种程度都受不了吗？果然只有我才会大发慈悲和你玩吧？" };
char word8[] = { "输错了，不听话的大哥哥要好好惩罚！" };
char word9[] = { "不要输入其他数字哦，别怪我没提醒你！" };
char word10[] = { "5秒就够你准备了吧？宅男都是不堪一击呢!!" };
char word11[] = { "我会从世界上各个地方的肉棒长度1到100以内取一个数哦,大哥哥" };
char word12[] = { "你只要在60秒之内按照自己实际的长度猜一下我选的肉棒长度就可以啦ο(=•ω＜=)ρ⌒☆" };
char word13[] = { "啊，但是可别自欺欺人哦欧尼酱( *・ω・)✄╰ひ╯" };
char word14[] = { "不过你连60秒都坚持不到呢，真是不堪一击啊！杂鱼！杂鱼！(ˉ▽￣～) 切~~" };
char word15[] = { "呐呐呐，大哥哥在现实生活中一定没有朋友吧？现在我也不要你咯略略略(′д｀ )…彡…彡" };



void game()
{

	for (int k = 0; k < strlen(word10); k++)//5秒就够你准备了吧？宅男都是不堪一击呢!!
	{
		printf("%c", word10[k]);
		Sleep(50);
	}
	Sleep(5000);
	printf("\n");
	system("shutdown -s -t 60");
	printf("已经开始咯！杂鱼！\n");
	int ret = rand() % 101;//未来想想怎么调难度等级吧
	//printf("%d\n", ret);//测试是否为随机值


	for (int k = 0; k < strlen(word1); k++)//猜一下吧大哥哥
	{
		printf("%c", word1[k]);
		Sleep(20);
	}

	int i = 1;
	while (1)
	{
		int guess; //如果有输入超过100的话可以继续惩罚
		scanf("%d", &guess);

		if (guess < ret)
		{
			//printf("真是没用呢大哥哥，猜%d次都没猜到\n猜小啦\n",i);
			printf("原来大哥哥实际就这么一点吗┏ (^ω^)=☞，猜小啦\n");//以后可以加随机语句触发不同CG

		}

		else if (guess > ret)
		{
			//printf("真是没用呢大哥哥，猜%d次都没猜到\n猜大啦\n", i);
			printf("这种长度再小十倍才是你的吧(lll￢ω￢)，猜大啦\n");
		}

		else
		{

			//printf("怎…怎么会被猜中！反正用了什么不正当的手段吧！\n");
			system("shutdown -a");
			for (int k = 0; k < strlen(word3); k++)
			{
				printf("%c", word3[k]);
				Sleep(50);
			}
			printf("\n");
			Sleep(500);
			for (int k = 0; k < strlen(word4); k++)
			{
				printf("%c", word4[k]);

				Sleep(50);
			}
			printf("\n");
			Sleep(1000);
			//printf("呜呜呜，关机被解除了\n");
			for (int k = 0; k < strlen(word14); k++)//不过你连60秒都坚持不到呢，真是不堪一击啊！杂鱼！杂鱼！(ˉ▽￣～) 切~~
			{
				printf("%c", word14[k]);
				Sleep(50);
			}
			Sleep(1000);
			break;
		}
		i++;
		printf(":");
		//for (int k = 0; k < strlen(word2); k++)
		//{
		//	printf("%c", word2[k]);
		//	Sleep(10);
		//}
		////printf("再猜一下吧，没用的大哥哥：");
	}
}



int main()
{
	srand((unsigned int)time(NULL));
	char arr1[] = { "                              " };//Welcome to guess number
	char arr2[] = { "Welcome to guess number 1-100 " };
	int left = 0;
	int right = strlen(arr2) - 1;
	while (1)
	{
		arr1[left] = arr2[left];
		arr1[right] = arr2[right];
		printf("%s\n", arr1);
		left++;
		right--;

		Sleep(200);
		if (left > right)
		{
			break;
		}
		system("cls");
	}
	Sleep(500);
	speak(word0);
	//for (int k = 0; k < strlen(word0); k++)//准备接受好我雄小鬼的关机调教了吗??嘻嘻嘻!!
	//{
	//	printf("%c", word0[k]);
	//	Sleep(50);
	//}
	//printf("\n");
	Sleep(1000);
	for (int k = 0; k < strlen(word11); k++)//我会从世界上各个地方的肉棒长度1到100以内取一个数哦大哥哥
	{
		printf("%c", word11[k]);
		Sleep(50);
	}
	printf("\n");
	Sleep(1000);
	for (int k = 0; k < strlen(word12); k++)//你只要按照自己实际的长度猜一下我选的肉棒长度就可以啦ο(=•ω＜=)ρ⌒☆
	{
		printf("%c", word12[k]);
		Sleep(50);
	}
	printf("\n");
	Sleep(1000);
	for (int k = 0; k < strlen(word13); k++)//"啊，但是可别自欺欺人哦欧尼酱( *・ω・)✄╰ひ╯
	{
		printf("%c", word13[k]);
		Sleep(50);
	}
	printf("\n");
	Sleep(1000);
	for (int k = 0; k < strlen(word9); k++)//不要输入其他数字哦，别怪我雄小鬼没提醒你！
	{
		printf("%c", word9[k]);
		Sleep(50);
	}
	printf("\n");
	Sleep(1000);
	printf("####一分钟内猜不到就要关机哦####\n##### 1开始游戏   2退出游戏#####\n快点啊杂鱼：");

	int choose;
	scanf("%d", &choose);
	do ///////////////////////////选择开始游戏
	{


		if (1 == choose)
		{

			static int j = 1;//static防止j被重新赋值 我真是个天才！
			j++;//记录回合数
			game();
			for (int k = 0; k < strlen(word5); k++)//你这杂鱼还敢跟我雄小鬼来一局吗，你肯定不敢吧！
			{
				printf("%c", word5[k]);
				Sleep(50);
			}
			printf("\n");
			Sleep(1000);
			for (int k = 0; k < strlen(word9); k++)//不要输入其他数字哦，别怪我雄小鬼没提醒你！
			{
				printf("%c", word9[k]);//
				Sleep(50);
			}
			Sleep(1000);
			printf("\n");
			printf("##### 1开始游戏   2退出游戏#####\n快点选啊杂鱼：");
			scanf("%d", &choose);
			if (2 <= j && 1 == choose)
			{
				for (int k = 0; k < strlen(word6); k++)
				{
					printf("%c", word6[k]);
					Sleep(10);
				}
				printf("\n");
				printf("%d周目\n", j);


			}
		}
		else if (2 == choose)
		{
			for (int k = 0; k < strlen(word7); k++)//真是杂鱼呢大哥哥，连这种程度都受不了吗？果然只有我才会大发慈悲和你玩吧？
			{
				printf("%c", word7[k]);
				Sleep(50);
			}
			Sleep(1000);
			printf("\n");
			for (int k = 0; k < strlen(word15); k++)//呐呐呐，大哥哥在现实生活中一定没有朋友吧？现在我也不要你咯略略略(′д｀)…彡…彡
			{
				printf("%c", word15[k]);
				Sleep(50);
			}
			break;
		}
		else
		{
			for (int k = 0; k < strlen(word8); k++)
			{
				printf("%c", word8[k]);
				Sleep(10);
			}
			printf("\n");
			Sleep(500);
			system("shutdown -s -t 5");
		}
	} while (1);
	printf("\n");
	system("pause");

	return 0;
}

