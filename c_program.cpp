
//------電機一 109323010 陳冠穎 程式期末:圈圈叉叉大戰傑尼龜------

#include<iostream>
#include<time.h>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

char play[9] = { ' ',' ',' ',' ', ' ',' ', ' ',' ', ' ' };
int end()
{
	if (play[0] == play[1] && play[1] == play[2] && play[0] != ' ')
	{
		if (play[0] == 'X')
		{
			return 1;
		}
		else if (play[0] == 'O')
		{
			return 2;
		}
	}
	if (play[3] == play[4] && play[4] == play[5] && play[3] != ' ')
	{
		if (play[3] == 'X')
		{
			return 1;
		}
		else if (play[3] == 'O')
		{
			return 2;
		}
	}
	if (play[6] == play[7] && play[7] == play[8] && play[6] != ' ')
	{
		if (play[6] == 'X')
		{
			return 1;
		}
		else if (play[6] == 'O')
		{
			return 2;
		}
	}
	if (play[0] == play[3] && play[3] == play[6] && play[0] != ' ')
	{
		if (play[0] == 'X')
		{
			return 1;
		}
		else if (play[0] == 'O')
		{
			return 2;
		}
	}
	if (play[0] == play[4] && play[4] == play[8] && play[0] != ' ')
	{
		if (play[0] == 'X')
		{
			return 1;
		}
		else if (play[0] == 'O')
		{
			return 2;
		}
	}
	if (play[2] == play[5] && play[5] == play[8] && play[2] != ' ')
	{
		if (play[2] == 'X')
		{
			return 1;
		}
		else if (play[2] == 'O')
		{
			return 2;
		}
	}
	if (play[1] == play[4] && play[4] == play[7] && play[1] != ' ')
	{
		if (play[1] == 'X')
		{
			return 1;
		}
		else if (play[1] == 'O')
		{
			return 2;
		}
	}
	if (play[2] == play[4] && play[4] == play[6] && play[2] != ' ')
	{
		if (play[2] == 'X')
		{
			return 1;
		}
		else if (play[2] == 'O')
		{
			return 2;
		}
	}
	if (play[0] !=' ' && play[1] != ' ' && play[2] != ' ' && play[3] != ' ' && play[4] != ' ' && play[5] != ' ' && play[6] != ' ' && play[7] != ' ' && play[8] != ' ')
	{
		return 3;
	}
	return 0;
}
int main(void)
{
	char Myname[11];
	int IfGolden;
	int a;
	srand(time(NULL));

	printf("%s","圈圈叉叉OOXX 遊戲開始啦啦啦!!"
		"\n先取個聽起來就很厲害的名字吧  ('˙ω˙)/ 中文最多五字：");
	scanf_s("%s", &Myname, 11);
	printf("\n\nㄏㄚˇ 囉 %s ，我是你的對手傑尼龜 傑尼 傑尼"
		"\n要不要跟我比圈圈叉叉阿，贏了話我就當你的神奇寶貝啦"
		"\n\n※操作講解: 輸入對應位置 1  2  3 就可以畫出圈圈叉叉※"
		"\n                         4  5  6"
		"\n                         7  8  9"
		"\n\n對了對了 比賽前先問你，你有沒有開傳說中的「金手指模式」??"
		"\n有了話輸入1，沒有了話輸入2: ", Myname, 11);
	scanf_s("%d", &IfGolden);

	while(IfGolden !=1 && IfGolden !=2)
	{
	puts("1和2，你選這個是什麼呢?眼睛睜大再打一次:");
	scanf_s("%d", &IfGolden);
	}

	puts("\n-------------遊戲開始-----------\n");

	//------金手指-------
	if (IfGolden == 1)
	{
		while (1)
		{
			//-------玩家的部分--------
			printf("\n%s 聽說你開了金手指，怕.jpg"
				"\n你出招吧 小力一點:", Myname, 11);
			scanf_s("%d", &a);
			if (play[a - 1] != 'O' && play[a - 1] != 'X')
			{
				if (play[a - 1] == ' ')
				{
					play[a - 1] = 'X';
				}
			}
			else
			{
				puts("喂喂喂 我都站著不動了，你還打錯 再打一次:");
				continue;
				scanf_s("%d", &a);
				if (play[a - 1] == ' ')
				{
					play[a - 1] = 'X';
				}
			}

			cout << "+----+----+----+\n"
				"｜  " << play[0] << "｜  " << play[1] << "｜" << play[2] << "  ｜\n"
				"+----+----+----+\n"
				"｜  " << play[3] << "｜  " << play[4] << "｜" << play[5] << "  ｜\n"
				"+----+----+----+\n"
				"｜  " << play[6] << "｜  " << play[7] << "｜" << play[8] << "  ｜\n"
				"+----+----+----+\n";
			if (end() != 0)
			{
				break;
			}
			printf("%s","有金手指的一定很強，我就站著不動\n");
		}
		if (end() == 1)
		{
			printf("%s","\n嗨夥伴，你開金手指幫我抓一個女朋友好不好?拜託啦_(:_」∠)_\n\n");
		}
		
	}


	//------普通模式-------	
	if (IfGolden == 2)
	{
		while (1)
		{
			//-------玩家的部分--------
			printf("%s 出招吧!!除了扣零用錢，其他我都不怕啦:", Myname, 11);
			scanf_s("%d", &a);
			if (play[a - 1] != 'O' && play[a - 1] != 'X')
			{
				if (play[a - 1] == ' ')
				{
					play[a - 1] = 'X';
				}
			}
			else
			{
				puts("喂喂喂 你輸入錯了啦~再給你一次機會:");
				continue;
				scanf_s("%d", &a);
				if (play[a - 1] == ' ')
				{
					play[a - 1] = 'X';
				}
			}

			cout << "+----+----+----+\n"
				"｜  " << play[0] << "｜  " << play[1] << "｜" << play[2] << "  ｜\n"
				"+----+----+----+\n"
				"｜  " << play[3] << "｜  " << play[4] << "｜" << play[5] << "  ｜\n"
				"+----+----+----+\n"
				"｜  " << play[6] << "｜  " << play[7] << "｜" << play[8] << "  ｜\n"
				"+----+----+----+\n";
			if (end() != 0)
			{
				break;
			}

			//-------傑尼龜時間-------
			int b;
			b = rand() % 9;
			printf("%s","換我啦 秀一波:\n");

			if (play[b] != 'O' && play[b] != 'X')
			{
				if (play[b] == ' ')
				{
					play[b] = 'O';
				}
			}
		
			else
			{
				while (play[b] == 'O' || play[b] == 'X')
				{
					b = (rand() % 9 + 1) % 9;
				}
				
				if (play[b] == ' ')
				{
					play[b] = 'O';
				}
				
			}
		
			cout << "+----+----+----+\n"
				"｜  " << play[0] << "｜  " << play[1] << "｜" << play[2] << "  ｜\n"
				"+----+----+----+\n"
				"｜  " << play[3] << "｜  " << play[4] << "｜" << play[5] << "  ｜\n"
				"+----+----+----+\n"
				"｜  " << play[6] << "｜  " << play[7] << "｜" << play[8] << "  ｜\n"
				"+----+----+----+\n";

			if (end() != 0)
			{
				break;
			}

		}
		if (end() == 1)
		{
			printf("\n太強了吧%s 我輸了! 好啦我當你的夥伴\n\n", Myname, 15);
		}
		if (end() == 2)
		{
			printf("\n所以我說 %s ，你為什麼不開金手指呢?\n\n", Myname, 15);
		}
		if (end() == 3)
		{
			puts("\n平手啦! 各過各的不是很好嗎?\n\n ");
		}
	}
}