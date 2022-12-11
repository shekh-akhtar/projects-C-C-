//======================== Number Puzzle Game ================================
#include <stdio.h>
#include <windows.h>
#include <time.h>
#include <conio.h>
#include <string.h>

void gameInfo();                                  // for game information
void SetColor(int ForgC);                         //  text color change
void randomNumber(int x[15], int y[4][4]);        //   random number generator
void displayMatrix(int d[4][4]);                  //    Matrix display function
void swapNumber(int, int, int, int, int d[4][4]); //     for 2 numbers swap

int main()
{
    int a[15], b[4][4];
    char name[30];
    printf("Enter player name : ");
    fflush(stdin); //  input buffer clean
    fgets(name, 30, stdin);
    name[strlen(name) - 1] = '\0'; // assigining NULL character end of string because fgets() gets enter key as a character
    while (1)
    {
        system("cls");  // Clear console window
        int round = 10; // number of round remaining

        gameInfo();         // game information function
        randomNumber(a, b); // random number generate function

        int x = 3, y = 3, tempx, tempy, flag = 0;

        while (1)
        {
            tempx = x;
            tempy = y;
            printf("Player name : %s,  Move Remaining : %d \n\n", name, round);
            displayMatrix(b);
            if (b[0][0] == 1 && b[0][1] == 2 && b[0][2] == 3 && b[0][3] == 4 && b[1][0] == 5 && b[1][1] == 6 && b[1][2] == 7 && b[1][3] == 8 && b[2][0] == 9 && b[2][1] == 10 && b[2][2] == 11 && b[2][3] == 12 && b[3][0] == 13 && b[3][1] == 14 && b[3][2] == 15 && b[3][3] == 0)
            {
                system("cls");
                SetColor(2);
                printf("You Win!\n");
                SetColor(1);
                printf("Want to play again ?\n");
                SetColor(7);
                printf("Enter \'y\' to play again : ");
                char y = getchar();
                if (y == 'y' || y == 'Y')
                {
                    break;
                }
                else
                {
                    flag = 1;
                    break;
                }
            }
            else
            {
                if (round == 0)
                {
                    system("cls");
                    SetColor(4);
                    printf("You Lose !\n");
                    SetColor(1);
                    printf("Want to play again ?\n");
                    SetColor(7);
                    printf("Enter \'y\' to play again : ");
                    char y = getchar();
                    if (y == 'y' || y == 'Y')
                    {
                        break;
                    }
                    else
                    {
                        flag = 1;
                        break;
                    }
                }
            }
            char ch; // variable for 1 character input
            getch();
            ch = getch(); //  for 1 character input
            switch (ch)
            {
            case 72: // up aero
                x++;
                break;
            case 75: // left aero
                y++;
                break;
            case 80: // down aero
                x--;
                break;
            case 77: // rigth aero
                y--;
                break;
            case 27: // esc key
                exit(0);
            case 'e':
                exit(0);
            case 'E':
                exit(0);
            default:
                ch = 0;
                SetColor(4); // red color
                printf("Invalid Input!\n");
                SetColor(7); // white color
                printf("Enter any key to continue...");
                getch(); // console window hold
                system("cls");
                continue;
            }
            if ((ch == 72 || ch == 75 || ch == 80 || ch == 77) && (x >= 0 && x <= 3 && y >= 0 && y <= 3)) //(x != -1 && x != 4 && y != -1 && y != 4))
            {
                round--; //  remaining move decreased by 1
                swapNumber(x, y, tempx, tempy, b);
            }
            else
            {
                if (x < 0)
                    x++;
                else if (x > 3)
                    x--;
                else if (y < 0)
                    y++;
                else if (y > 3)
                    y--;
            }
            system("cls");
        }
        if (flag == 1)
            break;
    }

    return 0;
}

// Displaying Matrix with random number
void displayMatrix(int d[4][4])
{
    printf("_____________________________\n\n");
    for (int i = 0; i < 4; i++)
    {
        printf("|  ");
        for (int j = 0; j < 4; j++)
        {
            if (d[i][j] != 0)
                printf("%2d  |  ", d[i][j]);
            else
                printf("    |  ", d[i][j]);
        }
        printf("\n");
    }
    printf("_____________________________\n");
}

// below function random number generate for array
void randomNumber(int x[15], int y[4][4])
{
    int i, j, temp;
    srand(time(0)); // provide initial value
    for (i = 0; i < 15; i++)
    {
        temp = rand() % 100 + 1; // rand function generate random many digit number
        for (j = 0; j <= i - 1; j++)
        {
            if (temp == x[j]) // to check duplicate value
                break;
        }
        if (i == j && temp <= 15)
            x[i] = temp; //  assign x-Array non-duplicate value
        else
            i--; //  i is decreased by 1 because duplicate value
    }
    //=============below for loop assigining random number in 2D-Array===================
    int k = -1;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            if (i == 3 && j == 3)
                y[i][j] = 0; // last posotion of 2D-Array will be always zero
            else
                y[i][j] = x[++k]; // non-zero value 1-15 numbers will be assigned
        }
    }
}

// gameInfo function is use to see game rules and information
void gameInfo()
{
    system("cls");
    SetColor(5);
    printf("                          ");
    printf("NUMBER PUZZLE\n\n");
    printf("                        ");
    SetColor(6);
    printf("RULE OF THIS GAME\n\n");
    printf("1. You can move only 1 step at a time by aero key\n");
    printf("            ");
    SetColor(5);
    printf("Move Up     :   by Up aero key\n");
    printf("            ");
    printf("Move Down   :   by Down aero key\n");
    printf("            ");
    printf("Move Left   :   by Left aero key\n");
    printf("            ");
    printf("Move Right  :   by Right aero key\n\n");
    SetColor(6);
    printf("2. You can move number at empty position only\n");
    printf("3. For each valid move  :   Your total number of move will decreased by 1\n");
    printf("4. Winning situation    :   Number in a 4 x 4 matrix should be in order from 1 to 15\n\n");
    printf("                 ");
    SetColor(10);
    printf("Winning situation:\n");
    SetColor(12);
    printf("         _________________________________\n\n");
    printf("         |   1   |   2   |   3   |   4   |\n");
    printf("         |   5   |   6   |   7   |   8   |\n");
    printf("         |   9   |   10  |   11  |   12  |\n");
    printf("         |   13  |   14  |   15  |       |\n");
    printf("         _________________________________\n\n");
    SetColor(5);
    printf("5. You can exit game at any time by pressing \"Esc key\" or \"E\" or \"e\"\n");
    printf("So try to win in minimum number of move\n");
    printf("Enter any key to start..............");
    getch();
    system("cls");
    SetColor(7);
}

// for color change
void SetColor(int ForgC)
{
    WORD wColor;

    HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_SCREEN_BUFFER_INFO csbi;

    // We use csbi for the wAttributes word.
    if (GetConsoleScreenBufferInfo(hStdOut, &csbi))
    {
        // Mask out all but the background attribute, and add in the forgournd color
        wColor = (csbi.wAttributes & 0xF0) + (ForgC & 0x0F);
        SetConsoleTextAttribute(hStdOut, wColor);
    }
    return;
}

// swap values in 2D-Array
void swapNumber(int a, int b, int tempa, int tempb, int z[4][4])
{
    int temp;
    temp = z[a][b];
    z[a][b] = z[tempa][tempb];
    z[tempa][tempb] = temp;
}
