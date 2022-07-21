#include<iostream>
using namespace std;
#include <string.h>
#include<conio.h>
#include"help.h"
#include <ctime>



void sleep(float seconds) {
	clock_t startClock = clock();
	float secondsAhead = seconds * CLOCKS_PER_SEC;
	// do nothing until the elapsed time has passed.
	while (clock() < startClock + secondsAhead);
	return;
}


void draw_cursor(int row, int col)
{
	myLine(col, row, col, row + 20, 0,0,255);      //use three 3 integers if you want colored lines.
	myLine(col, row, col + 20, row, 0, 0, 255);      //use three 3 integers if you want colored lines.
	myLine(col + 20, row, col + 20, row + 20, 0, 0, 255);      //use three 3 integers if you want colored lines.
	myLine(col, row + 20, col + 20, row + 20, 0, 0, 255);      //use three 3 integers if you want colored lines.
}


// ----------------------  draw numbers  -------------------------------//


void zero(int row, int col)
{
	row *= 20;
	row += 10;
	col *= 20;
	col += 14;
	myLine(col, row, col, row + 10, 255);      //use three 3 integers if you want colored lines.
	myLine(col - 1, row - 1, col + 10, row, 255);      //use three 3 integers if you want colored lines.
	myLine(col + 10, row, col + 10, row + 10, 255);      //use three 3 integers if you want colored lines.
	myLine(col, row + 10, col + 10, row + 10, 255);      //use three 3 integers if you want colored lines.

}


void one(int row, int col)
{
	row *= 20;
	row += 14;
	col *= 20;
	col += 14;
	myLine(col+5, row-5, col+5, row + 5, 255);      //use three 3 integers if you want colored lines.
}

void two(int row, int col)
{
	row *= 20;
	row += 14;
	col *= 20;
	col += 14;
	myLine(col+1 , row, col + 7, row, 255);      //use three 3 integers if you want colored lines.
	myLine(col + 7, row, col + 7, row + 4, 255);      //use three 3 integers if you want colored lines.
	myLine(col + 2, row + 4, col + 7, row + 4, 255);      //use three 3 integers if you want colored lines.
	myLine(col + 2, row + 4, col + 2, row + 8, 255);      //use three 3 integers if you want colored lines.
	myLine(col+1, row+8, col + 7, row+8 , 255);      //use three 3 integers if you want colored lines.
}

void three(int row, int col)
{
	row *= 20;
	row += 14;
	col *= 20;
	col += 14;
	myLine(col + 1, row, col + 7, row, 255);      //use three 3 integers if you want colored lines.
	myLine(col + 7, row, col + 7, row + 4, 255);      //use three 3 integers if you want colored lines.
	myLine(col + 2, row + 4, col + 7, row + 4, 255);      //use three 3 integers if you want colored lines.
	myLine(col + 7, row + 4, col + 7, row + 8, 255);      //use three 3 integers if you want colored lines.
	myLine(col + 1, row + 8, col + 7, row + 8, 255);      //use three 3 integers if you want colored lines.
}

void four(int row, int col)
{
	row *= 20;
	row += 14;
	col *= 20;
	col += 14;
	myLine(col + 1, row-1, col + 1, row+4, 255);      //use three 3 integers if you want colored lines.
	myLine(col + 1, row+4, col + 7, row + 4, 255);      //use three 3 integers if you want colored lines.
	myLine(col+6, row + 1, col + 6, row + 8, 255);      //use three 3 integers if you want colored lines.
}

void five(int row, int col)
{
	row *= 20;
	row += 14;
	col *= 20;
	col += 14;
	myLine(col , row, col + 6, row, 255);      //use three 3 integers if you want colored lines.
	myLine(col + 2, row, col + 2, row + 4, 255);      //use three 3 integers if you want colored lines.
	myLine(col + 1, row + 4, col + 7, row + 4, 255);      //use three 3 integers if you want colored lines.
	myLine(col + 7, row + 4, col + 7, row + 8, 255);      //use three 3 integers if you want colored lines.
	myLine(col , row + 8, col + 7, row + 8, 255);      //use three 3 integers if you want colored lines.
}

void six(int row, int col)
{
	row *= 20;
	row += 14;
	col *= 20;
	col += 14;
	myLine(col, row, col + 6, row, 255);      //use three 3 integers if you want colored lines.
	myLine(col + 1, row, col + 1, row + 8, 255);      //use three 3 integers if you want colored lines.
	myLine(col + 1, row + 4, col + 7, row + 4, 255);      //use three 3 integers if you want colored lines.
	myLine(col + 7, row + 4, col + 7, row + 8, 255);      //use three 3 integers if you want colored lines.
	myLine(col, row + 8, col + 7, row + 8, 255);      //use three 3 integers if you want colored lines.
}

void seven(int row, int col)
{
	row *= 20;
	row += 14;
	col *= 20;
	col += 14;
	myLine(col, row, col + 6, row, 255);      //use three 3 integers if you want colored lines.
	myLine(col + 6, row, col + 6, row + 8, 255);      //use three 3 integers if you want colored lines.
}

void eight(int row, int col)
{
	row *= 20;
	row += 14;
	col *= 20;
	col += 14;
	myLine(col, row, col + 6, row, 255);      //use three 3 integers if you want colored lines.
	myLine(col + 1, row, col + 1, row + 8, 255);      //use three 3 integers if you want colored lines.
	myLine(col + 1, row + 4, col + 7, row + 4, 255);      //use three 3 integers if you want colored lines.
	myLine(col + 7, row , col + 7, row + 8, 255);      //use three 3 integers if you want colored lines.
	myLine(col, row + 8, col + 7, row + 8, 255);      //use three 3 integers if you want colored lines.
}

void nine(int row, int col)
{
	row *= 20;
	row += 14;
	col *= 20;
	col += 14;
	myLine(col, row, col + 8, row, 255);      //use three 3 integers if you want colored lines.
	myLine(col+8, row, col + 8, row+8, 255);      //use three 3 integers if you want colored lines.
	myLine(col+1, row, col+1, row+4, 255);      //use three 3 integers if you want colored lines.
	myLine(col + 1, row + 4, col + 6, row + 4, 255);      //use three 3 integers if you want colored lines.
	myLine(col, row+8, col + 8, row+8, 255);      //use three 3 integers if you want colored lines.
}

void bomb(int row, int col)
{
	row *= 20;
	row += 10;
	col *= 20;
	col += 14;
	myTriangle(col, row, col + 7, row + 10, 255, 0, 0);
}


// ----------------------------------- number print end  ------------------------- /




//----------------------------------   Beginner game functions   --------------------------------//

void set_neighbours_beg(int beg[10][10], static int i = 0, static int j = 0)	// set the neighbour of the bomb according to number of bombs
{
	int count = 0;

	if (i < 10 && j < 10)
	{
		if (beg[i][j] != -1)
		{
			if (i - 1 > -1 && j - 1 > -1)             // left up
			{
				if (beg[i - 1][j - 1] == -1)
					count++;
			}
			if (i - 1 > -1 )        // up
			{
				if (beg[i - 1][j] == -1)
					count++;
			}
			if (i - 1 > -1 && j + 1 < 10)      // right up
			{
				if (beg[i - 1][j + 1] == -1)
					count++;
			}
			if ( j - 1 > -1)         // left
			{
				if (beg[i][j - 1] == -1)
					count++;
			}
			if (j + 1 < 10)         // right
			{
				if (beg[i][j + 1] == -1)
					count++;
			}

			if (i + 1 < 10 && j - 1 > -1)      // left down
			{
				if (beg[i + 1][j - 1] == -1)
					count++;
			}
			if (i + 1 < 10 )         // down
			{
				if (beg[i + 1][j] == -1)
					count++;
			}
			if (i + 1 < 10 && j + 1 < 10)      // right down
			{
				if (beg[i + 1][j + 1] == -1)
					count++;
			}
		}
	}
	if (i>-1 && i<10 && j>-1 && j<10 && beg[i][j] != -1)
		beg[i][j] = count;

	if (j < 10)
	{
		set_neighbours_beg(beg, i, j + 1);
		return;
	}

	if (i < 10)
	{
		i++;
		j = 0;
		set_neighbours_beg(beg, i, j);
		return;
	}
}


void draw_grid_beg(int x, int y)		// drawing graphical grid
{
	int pre_x = x;
	int pre_y = y;
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			myRect(x, y, x + 20, y + 20, 4, 100, 40);
			x = x + 20;
		}
		x = x - 200;
		y = y + 20;
	}
}

void draw_opened_bed(int beg_array[10][10], bool grid_status[10][10])
{
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (grid_status[i][j])
			{
				if (beg_array[i][j] == 0)
				{
					zero(i, j);
				}
				if (beg_array[i][j] == 1)
				{
					one(i, j);
				}
				if (beg_array[i][j] == 2)
				{
					two(i, j);
				}
				if (beg_array[i][j] == 3)
				{
					three(i, j);
				}
				if (beg_array[i][j] == 4)
				{
					four(i, j);
				}
				if (beg_array[i][j] == 5)
				{
					five(i, j);
				}
				if (beg_array[i][j] == 6)
				{
					six(i, j);
				}
				if (beg_array[i][j] == 7)
				{
					seven(i, j);
				}
				if (beg_array[i][j] == 8)
				{
					eight(i, j);
				}
				if (beg_array[i][j] == 9)
				{
					nine(i, j);
				}
				if (beg_array[i][j] == -1)
				{
					bomb(i, j);		// print bomb at i th j th position
				}
			}
		}
	}
}

void box_opening(int beg_array[10][10],bool status[10][10], int row, int col)	// open all the adjacent boxes if zero box is opened
{
	status[row][col] = 1;
	if (beg_array[row][col] == 0)
	{
		if (row - 1 > -1 && col - 1 > -1)
		{
				status[row-1][col-1] = 1;
		}
		if (row - 1 > -1 && col > -1)
		{
				status[row-1][col] = 1;
		}
		if (row - 1 > -1 && col + 1 < 10)
		{
				status[row-1][col+1] = 1;
		}
		if (row > -1 && col + 1 <10)
		{
				status[row][col+1] = 1;
		}
		if (row + 1 <10 && col + 1 <10)
		{
				status[row+1][col+1] = 1;
		}
		if (row + 1 <10 && col > -1)
		{
				status[row-1][col-1] = 1;
		}
		if (row + 1 <10 && col - 1 > -1)
		{
				status[row+1][col-1] = 1;
		}
		if (row  > -1 && col - 1 > -1)
		{
				status[row][col-1] = 1;
		}
	}
	else
		return;
}

void fill_array_for_beg(int beg[10][10], int bombs)		// placing bombs at random places
{
	srand(time(0));
	for (int i = 0; i < bombs; i++)
	{
		int x = rand() % 10;
		int y = rand() % 10;
		beg[x][y] = -1;
	}
	 set_neighbours_beg(beg);	// setting neighbours accordingly
}




//----------------------------- Game functions for Pro  ----------------------------------//

void set_neighbours_pro(int pro[20][20], static int i = 0, static int j = 0)
{
	int count = 0;

	if (i < 20 && j < 20)
	{
		if (pro[i][j] != -1)
		{
			if (i - 1 > -1 && j - 1 > -1)             // left up
			{
				if (pro[i - 1][j - 1] == -1)
					count++;
			}
			if (i - 1 > -1)        // up
			{
				if (pro[i - 1][j] == -1)
					count++;
			}
			if (i - 1 > -1 && j + 1 < 20)      // right up
			{
				if (pro[i - 1][j + 1] == -1)
					count++;
			}
			if ( j - 1 > -1)         // left
			{
				if (pro[i][j - 1] == -1)
					count++;
			}
			if ( j + 1 < 20)         // right
			{
				if (pro[i][j + 1] == -1)
					count++;
			}

			if (i + 1 < 20 && j - 1 > -1)      // left down
			{
				if (pro[i + 1][j - 1] == -1)
					count++;
			}
			if (i + 1 < 20 )         // down
			{
				if (pro[i + 1][j] == -1)
					count++;
			}
			if (i + 1 < 20 && j + 1 < 20)      // right down
			{
				if (pro[i + 1][j + 1] == -1)
					count++;
			}
		}
	}
	if (i > -1 && i<20 && j>-1 && j < 20 && pro[i][j] != -1)
		pro[i][j] = count;



	if (j < 20)
	{
		set_neighbours_pro(pro, i, j + 1);
		return;
	}

	if (i < 20)
	{
		i++;
		j = 0;
		set_neighbours_pro(pro, i, j);
		return;
	}
}

void draw_grid_pro(int x, int y)		// drawing graphical grid
{
	int pre_x = x;
	int pre_y = y;
	for (int i = 0; i < 20; i++)
	{
		for (int j = 0; j < 20; j++)
		{

			myRect(x, y, x + 20, y + 20, 4, 100, 40);
			x = x + 20;
		}
		x = x - 400;
		y = y + 20;
	}
}

void fill_array_for_pro(int pro[20][20], int bombs)		// placing bomb at random places
{
	srand(time(0));
	for (int i = 0; i < bombs; i++)
	{
		int x = rand() % 20;
		int y = rand() % 20;
		pro[x][y] = -1;
	}

	set_neighbours_pro(pro, 0, 0);
}


void draw_opened_pro(int pro_array[20][20], bool grid_status[20][20])
{
	for (int i = 0; i < 20; i++)
	{
		for (int j = 0; j < 20; j++)
		{
			if (grid_status[i][j])
			{
				if (pro_array[i][j] == 0)
				{
					zero(i, j);
				}
				if (pro_array[i][j] == 1)
				{
					one(i, j);
				}
				if (pro_array[i][j] == 2)
				{
					two(i, j);
				}
				if (pro_array[i][j] == 3)
				{
					three(i, j);
				}
				if (pro_array[i][j] == 4)
				{
					four(i, j);
				}
				if (pro_array[i][j] == 5)
				{
					five(i, j);
				}
				if (pro_array[i][j] == 6)
				{
					six(i, j);
				}
				if (pro_array[i][j] == 7)
				{
					seven(i, j);
				}
				if (pro_array[i][j] == 8)
				{
					eight(i, j);
				}
				if (pro_array[i][j] == 9)
				{
					nine(i, j);
				}
				if (pro_array[i][j] == -1)
				{
					bomb(i, j);
				}
			}
		}
	}
}



// ---------------------------  main  ----------------------------//


int main()
{
	
		int row = 0;
		int col = 0;

		bool game_end = 0;
		bool win = 0;
		int score = 0;

		int level = 0;    // level=2 for pro, level=1 for beginners
		int bombs = 0;    // number of bombs
		int current_cursor_x = 5;
		int current_cursor_y = 10;


		while (level != 1 && level != 2)
		{
			system("cls");
			cout << "Press 1 to play for beginners.\n";           // cehcking for level...
			cout << "Press 2 to play for pro.\n";
			cin >> level;
		}

		if (level == 1)                                    // beginner level
		{
			system("cls");
			
			while (bombs < 1 || bombs>10)          // taking number of bombs
			{
				system("cls");
				cout << "Enter number of bombs between 1 to 10: \n";
				cin >> bombs;
			}

			int grid[10][10] = { {0} };
			bool grid_status[10][10] = { {0} };

			fill_array_for_beg(grid, bombs);

			system("cls");
			draw_grid_beg(10, 5);    // end points x, y

			current_cursor_x = 5;
			current_cursor_y = 10;

			draw_cursor(current_cursor_x, current_cursor_y);	// cursor
									//zero(30, 30);
			int key = -1;
			while (!game_end)
			{
				if (isCursorKeyPressed(key))
				{
					if (key == 1)	// left
					{
						if (current_cursor_y > 25)
						{
							col--;

							draw_grid_beg(10, 5);    // end points x, y
							draw_opened_bed(grid, grid_status);

							current_cursor_y = current_cursor_y - 20;
							draw_cursor(current_cursor_x, current_cursor_y);
						}
					}
					if (key == 2)  // up
					{
						if (current_cursor_x > 10)
						{
							row--;

							draw_grid_beg(10, 5);    // end points x, y
							draw_opened_bed(grid, grid_status);

							current_cursor_x = current_cursor_x - 20;
							draw_cursor(current_cursor_x, current_cursor_y);
						}
					}
					if (key == 3)  // right
					{
						if (current_cursor_y < 175)
						{
							col++;

							draw_grid_beg(10, 5);    // end points x, y
							draw_opened_bed(grid, grid_status);

							current_cursor_y = current_cursor_y + 20;
							draw_cursor(current_cursor_x, current_cursor_y);
						}
					}
					if (key == 4)  // down
					{
						if (current_cursor_x < 170)
						{
							row++;

							draw_grid_beg(10, 5);    // end points x, y
							draw_opened_bed(grid, grid_status);

							current_cursor_x = current_cursor_x + 20;
							draw_cursor(current_cursor_x, current_cursor_y);
						}
					}
					if (key == 5)		// 'o' pressed
					{
						if (grid[row][col] == -1)
						{
							game_end = true;
							grid_status[row][col] = 1;
							system("cls");
							draw_grid_beg(10, 5);    // end points x, y
							draw_opened_bed(grid, grid_status);
							draw_cursor(current_cursor_x, current_cursor_y);
							sleep(2);
						}
						else
						{
							box_opening(grid,grid_status, row, col);	// manage opening of boxes
							system("cls");
							draw_grid_beg(10, 5);    // end points x, y
							draw_opened_bed(grid, grid_status);
							draw_cursor(current_cursor_x, current_cursor_y);
							score += 10;
							if (score+10 == 1000 - (bombs * 10))
							{
								game_end = true;
								win = true;
							}
						}
					}
					if (key == 6)
						break;
				}
			}
		}



		else             // pro level
		{
			system("cls");

			while (bombs < 1 || bombs>20)          // taking number of bombs
			{
				system("cls");
				cout << "Enter number of bombs between 1 to 20: \n";
				cin >> bombs;
			}

			int grid[20][20] = { {0} };
			bool grid_status[20][20] = { {0} };

			fill_array_for_pro(grid, bombs);

			system("cls");
			draw_grid_pro(10, 5);    // end points x, y

			current_cursor_x = 5;
			current_cursor_y = 10;

			draw_cursor(current_cursor_x, current_cursor_y);	// cursor
									//zero(30, 30);
			int key = -1;
			while (!game_end)
			{
				if (isCursorKeyPressed(key))
				{
					if (key == 1)	// left
					{
						if (current_cursor_y > 25)
						{
							col--;

							draw_grid_pro(10, 5);    // end points x, y
							draw_opened_pro(grid, grid_status);

							current_cursor_y = current_cursor_y - 20;
							draw_cursor(current_cursor_x, current_cursor_y);
						}
					}
					if (key == 2)  // up
					{
						if (current_cursor_x > 10)
						{
							row--;

							draw_grid_pro(10, 5);    // end points x, y
							draw_opened_pro(grid, grid_status);

							current_cursor_x = current_cursor_x - 20;
							draw_cursor(current_cursor_x, current_cursor_y);
						}
					}
					if (key == 3)  // right
					{
						if (current_cursor_y < 375)
						{
							col++;

							draw_grid_pro(10, 5);    // end points x, y
							draw_opened_pro(grid, grid_status);

							current_cursor_y = current_cursor_y + 20;
							draw_cursor(current_cursor_x, current_cursor_y);
						}
					}
					if (key == 4)  // down
					{
						if (current_cursor_x < 370)
						{
							row++;

							draw_grid_pro(10, 5);    // end points x, y
							draw_opened_pro(grid, grid_status);

							current_cursor_x = current_cursor_x + 20;
							draw_cursor(current_cursor_x, current_cursor_y);
						}
					}
					if (key == 5)				// 'o' pressed
					{
						if (grid[row][col] == -1)
						{
							game_end = true;
							grid_status[row][col] = 1;
							system("cls");
							draw_grid_pro(10, 5);    // end points x, y
							draw_opened_pro(grid, grid_status);
							draw_cursor(current_cursor_x, current_cursor_y);
							sleep(2);
						}
						else
						{
							grid_status[row][col] = 1;
							system("cls");
							draw_grid_pro(10, 5);    // end points x, y
							draw_opened_pro(grid, grid_status);
							draw_cursor(current_cursor_x, current_cursor_y);
							score += 10;
							if (score + 10 == 4000 - (bombs * 10))
							{
								game_end = true;
								win = true;
							}
						}
					}
					if (key == 6)
						break;
				}
			}
		}

		

		if (win)
		{
			cout << "Congradulations!\n You won!!!\n";
		}
		else
		{
			cout << "Game Over!!!\n" << "Your score is:  " << score << endl;
		}


		system("pause");
		return 0;
}
