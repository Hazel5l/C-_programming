
//------�q���@ 109323010 ���a�o �{������:���e�e�j�Գǥ��t------

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

	printf("%s","���e�eOOXX �C���}�l�հհ�!!"
		"\n������ť�_�ӴN�ܼF�`���W�r�a  ('���s��)/ ����̦h���r�G");
	scanf_s("%s", &Myname, 11);
	printf("\n\n�~���� �o %s �A�ڬO�A�����ǥ��t �ǥ� �ǥ�"
		"\n�n���n��ڤ���e�e���AĹ�F�ܧڴN��A�����_�_����"
		"\n\n���ާ@����: ��J������m 1  2  3 �N�i�H�e�X���e�e��"
		"\n                         4  5  6"
		"\n                         7  8  9"
		"\n\n��F��F ���ɫe���ݧA�A�A���S���}�ǻ������u������Ҧ��v??"
		"\n���F�ܿ�J1�A�S���F�ܿ�J2: ", Myname, 11);
	scanf_s("%d", &IfGolden);

	while(IfGolden !=1 && IfGolden !=2)
	{
	puts("1�M2�A�A��o�ӬO����O?�����C�j�A���@��:");
	scanf_s("%d", &IfGolden);
	}

	puts("\n-------------�C���}�l-----------\n");

	//------�����-------
	if (IfGolden == 1)
	{
		while (1)
		{
			//-------���a������--------
			printf("\n%s ť���A�}�F������A��.jpg"
				"\n�A�X�ۧa �p�O�@�I:", Myname, 11);
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
				puts("�޳޳� �ڳ����ۤ��ʤF�A�A�٥��� �A���@��:");
				continue;
				scanf_s("%d", &a);
				if (play[a - 1] == ' ')
				{
					play[a - 1] = 'X';
				}
			}

			cout << "+----+----+----+\n"
				"�U  " << play[0] << "�U  " << play[1] << "�U" << play[2] << "  �U\n"
				"+----+----+----+\n"
				"�U  " << play[3] << "�U  " << play[4] << "�U" << play[5] << "  �U\n"
				"+----+----+----+\n"
				"�U  " << play[6] << "�U  " << play[7] << "�U" << play[8] << "  �U\n"
				"+----+----+----+\n";
			if (end() != 0)
			{
				break;
			}
			printf("%s","����������@�w�ܱj�A�ڴN���ۤ���\n");
		}
		if (end() == 1)
		{
			printf("%s","\n�ٹ٦�A�A�}��������ڧ�@�Ӥk�B�ͦn���n?���U��_(:_�v��)_\n\n");
		}
		
	}


	//------���q�Ҧ�-------	
	if (IfGolden == 2)
	{
		while (1)
		{
			//-------���a������--------
			printf("%s �X�ۧa!!���F���s�ο��A��L�ڳ����Ȱ�:", Myname, 11);
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
				puts("�޳޳� �A��J���F��~�A���A�@�����|:");
				continue;
				scanf_s("%d", &a);
				if (play[a - 1] == ' ')
				{
					play[a - 1] = 'X';
				}
			}

			cout << "+----+----+----+\n"
				"�U  " << play[0] << "�U  " << play[1] << "�U" << play[2] << "  �U\n"
				"+----+----+----+\n"
				"�U  " << play[3] << "�U  " << play[4] << "�U" << play[5] << "  �U\n"
				"+----+----+----+\n"
				"�U  " << play[6] << "�U  " << play[7] << "�U" << play[8] << "  �U\n"
				"+----+----+----+\n";
			if (end() != 0)
			{
				break;
			}

			//-------�ǥ��t�ɶ�-------
			int b;
			b = rand() % 9;
			printf("%s","���ڰ� �q�@�i:\n");

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
				"�U  " << play[0] << "�U  " << play[1] << "�U" << play[2] << "  �U\n"
				"+----+----+----+\n"
				"�U  " << play[3] << "�U  " << play[4] << "�U" << play[5] << "  �U\n"
				"+----+----+----+\n"
				"�U  " << play[6] << "�U  " << play[7] << "�U" << play[8] << "  �U\n"
				"+----+----+----+\n";

			if (end() != 0)
			{
				break;
			}

		}
		if (end() == 1)
		{
			printf("\n�ӱj�F�a%s �ڿ�F! �n�էڷ�A���٦�\n\n", Myname, 15);
		}
		if (end() == 2)
		{
			printf("\n�ҥH�ڻ� %s �A�A�����򤣶}������O?\n\n", Myname, 15);
		}
		if (end() == 3)
		{
			puts("\n�����! �U�L�U�����O�ܦn��?\n\n ");
		}
	}
}