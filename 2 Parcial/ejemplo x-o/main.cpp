#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

void DisplayBoard(char array[][3], int size);
void GrabInput(char player);
void UpdateBoard(char array[][3], int size, char player, char currentMove);
int PrintBoard(char array[][3], int size, char currentMove);

char board[3][3] = { {'1','2','3' }, {'4','5','6'}, {'7','8','9'} };

char player1, player2;
char firstMove = 0;
char currentMove;
int currentPlayer;

int main()
{
	char* pMove = &currentMove;
	*pMove = currentMove;

	DisplayBoard(board, 3);
	GrabInput('1');
	cout<<*pMove<<endl;
	system("pause");
	UpdateBoard(board, 3, '1', *pMove);
	PrintBoard(board, 3, *pMove);
	GrabInput(2);
	UpdateBoard(board, 3, 2, currentMove);
	PrintBoard(board, 3, currentMove);

	system("pause");
	return 0;
}

void DisplayBoard(char array[][3], int size)
{
	system("cls");
	cout<<"::Tic Tac Toe::\n\n";

	for (int x = 0; x < size; x++)
	{
		for (int y = 0; y < size; y++)
		{
			cout<<array[x][y];
			cout<<" ";
		}
		cout<<endl;
	}
	cout<<endl;
}

void GrabInput(char player)
{
	char* pMove = &currentMove;

	if (player == '1')
	{
		cout<<"\n";
		cout<<"Your Move:\n\n";
		cout<<"Player 1 (1-9): ";
		cin>>player1;
		//currentPlayer = player1;
		*pMove = currentMove = player1;
	}
	if (player == '2')
	{
		cout<<"\n";
		cout<<"Your Move:\n\n";
		cout<<"Player 2 (1-9): ";
		cin>>player2;
		//currentPlayer = player2;
		*pMove = currentMove = player2;
	}
}

void UpdateBoard(char array[][3], int size, char player, char currentMove)
{
	for (int x = 0; x < size; x++)
	{
		for (int y = 0; y < size; y++)
		{
			switch(player1)
			{
				case '1': array[0][0] = 'X'; break;
				case '2': array[1][0] = 'X'; break;
				case '3': array[2][0] = 'X'; break;
				case '4': array[1][0] = 'X'; break;
				case '5': array[1][1] = 'X'; break;
				case '6': array[1][2] = 'X'; break;
				case '7': array[2][0] = 'X'; break;
				case '8': array[2][1] = 'X'; break;
				case '9': array[2][2] = 'X'; break;
			}
			switch(player2)
			{
				case '1': array[0][0] = 'O'; break;
				case '2': array[1][0] = 'O'; break;
				case '3': array[2][0] = 'O'; break;
				case '4': array[1][0] = 'O'; break;
				case '5': array[1][1] = 'O'; break;
				case '6': array[1][2] = 'O'; break;
				case '7': array[2][0] = 'O'; break;
				case '8': array[2][1] = 'O'; break;
				case '9': array[2][2] = 'O'; break;
			}
		}
	}
}

int PrintBoard(char array[][3], int size, char currentMove)
{
	system("cls");
	cout<<"::Tic Tac Toe::\n\n";

	for (int x = 0; x < size; x++)
	{
		for (int y = 0; y < size; y++)
		{
			if (currentMove == array[x][y])
			{
				return x;

			}

		}
		cout<<endl;
	}
	cout<<endl;
}
