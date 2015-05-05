#include <iostream>

using namespace std;

#define NUM_OF_COLUMN		5
#define NUM_OF_ROW			3

void ticTacToe(void);

int main()
{
	ticTacToe();

    return 0;
}

void ticTacToe(void)
{
	int player, x, y;
	int theArray[NUM_OF_ROW][NUM_OF_COLUMN] = {0};
	int winner = 0;

	while(!winner)
	{
		cout << "please choose an element (player, row, column)" << endl;
		cout << "player: ";
		cin >> player;

		while(true)
		{
			cout << "row: ";
			cin >> x;
			if(x < 1 || x > NUM_OF_ROW)
				cout << "Please enter a number between 1 and " << NUM_OF_ROW << endl;
			else
				break;
		}
		while(true)
		{
			cout << "column: ";
			cin >> y;
			if(y < 1 || y > NUM_OF_COLUMN)
				cout << "Please enter a number between 1 and " << NUM_OF_COLUMN << endl;
			else
				break;
		}

		x--;
		y--;

		if(theArray[x][y])
		{
			cout << "this element has been occupied, please choose another one." << endl;
		}
		else
		{
			theArray[x][y] = player;

			// Checking for row
			for(int row = 0; row < NUM_OF_ROW; row++)
			{
				int cnt = 0;
				for(int column = 0; column < NUM_OF_COLUMN; column++)
					if(theArray[row][column] == player)
						cnt ++;

				if(cnt == NUM_OF_COLUMN)
				{
					cout << "player " << player << " wins!" << endl;
					winner = player;
				}
			}

			// Checking for column
			for(int column = 0; column < NUM_OF_COLUMN; column++)
			{
				int cnt = 0;
				for(int row = 0; row < NUM_OF_ROW; row++)
					if(theArray[row][column] == player)
						cnt ++;

				if(cnt == NUM_OF_ROW)
				{
					cout << "player " << player << " wins!" << endl;
					winner = player;
				}
			}

			// Checking for diagonal
			if(NUM_OF_ROW >= NUM_OF_COLUMN)
			{
				for(int shift = 0; shift <= (NUM_OF_ROW - NUM_OF_COLUMN); shift++)
				{
					int cnt1 = 0, cnt2 = 0;
					for(int index = 0; index < NUM_OF_COLUMN; index++)
						if(theArray[index + shift][index] == player)
							cnt1 ++;
					for(int index = 0; index < NUM_OF_COLUMN; index++)
						if(theArray[index + shift][NUM_OF_COLUMN - index - 1] == player)
							cnt2 ++;

					if(cnt1 == NUM_OF_COLUMN || cnt2 == NUM_OF_COLUMN)
					{
						cout << "player " << player << " wins!" << endl;
						winner = player;
					}
				}
			}
			else
			{
				for(int shift = 0; shift <= (NUM_OF_COLUMN - NUM_OF_ROW); shift++)
				{
					int cnt1 = 0, cnt2 = 0;
					for(int index = 0; index < NUM_OF_ROW; index++)
						if(theArray[index][index + shift] == player)
							cnt1 ++;
					for(int index = 0; index < NUM_OF_ROW; index++)
						if(theArray[NUM_OF_ROW - index - 1][index + shift] == player)
							cnt2 ++;

					if(cnt1 == NUM_OF_ROW || cnt2 == NUM_OF_ROW)
					{
						cout << "player " << player << " wins!" << endl;
						winner = player;
					}
				}
			}
		}

		for(int i = 0; i < NUM_OF_ROW; i++)
		{
			for(int j = 0; j < NUM_OF_COLUMN; j++)
			{
				cout << theArray[i][j] << " ";
			}
			cout << endl;
		}

	}
}
