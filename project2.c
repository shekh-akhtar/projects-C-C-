// ============================== Tic tac toe ========================================
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int i, j, x = 0, n;
    static int tempi;
    char name[2][50];
    system("COLOR 2");
    while (1)
    {
        char a[3][3] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};
        printf("1. Play with friend\n");
        printf("2. Play with smart computer\n");
        printf("3. Play with evil computer\n");
        printf("4. Exit\n");
        printf("\nEnter your choice : ");
        fflush(stdin);
        scanf("%d", &x);
        if (x != 1 && x != 2 && x != 3 && x != 4)
        {
            printf("Invalid input\n\n");
            printf("Press any key...");
            getch();
            system("cls");
            continue;
        }
        switch (x)
        {
        case 1:
            printf("Enter 1st player name : ");
            fflush(stdin);
            fgets(name[0], 50, stdin);
            name[0][strlen(name[0]) - 1] = '\0';
            printf("Enter 2nd player name : ");
            fflush(stdin);
            fgets(name[1], 50, stdin);
            name[1][strlen(name[1]) - 1] = '\0';
            while (1)
            {
                system("cls");
                printf("\n\n                                                ######################### Tic Tac Toe #########################\n\n");
                printf("                                                                   %s (First player) X\n", name[0]);
                printf("                                                                  %s (Second player) O\n\n", name[1]);
                for (i = 1; i <= 13; i++)
                {
                    if (i == 1)
                    {
                        printf("                                                                      ");
                        for (j = 1; j <= 18; j++)
                        {
                            if (j == 1)
                                printf("%c", 201);
                            if (j > 1 && j < 17)
                                printf("%c", 205);
                            if (j == 6 || j == 11)
                                printf("%c", 203);
                            if (j == 18)
                                printf("%c", 187);
                        }
                        printf("\n");
                    }

                    if (i > 1 && i <= 4)
                    {
                        printf("                                                                      ");
                        for (int j = 1; j <= 19; j++)
                        {
                            if (i != 3)
                            {
                                if (j == 1 || j == 7 || j == 13 || j == 19)
                                    printf("%c", 186);
                                else
                                    printf(" ");
                            }
                            else
                            {
                                if (j == 4)
                                    printf("%c", a[0][0]);
                                else if (j == 10)
                                    printf("%c", a[0][1]);
                                else if (j == 16)
                                    printf("%c", a[0][2]);
                                else if (j == 1 || j == 7 || j == 13 || j == 19)
                                    printf("%c", 186);
                                else
                                    printf(" ");
                            }
                        }
                        printf("\n");
                    }

                    if (i == 5)
                    {
                        printf("                                                                      ");
                        for (int j = 1; j <= 20; j++)
                        {
                            if (j == 1)
                                printf("%c", 204);
                            else if (j == 7 || j == 13)
                                printf("%c", 206);
                            else if (j == 20)
                                printf("%c", 185);
                            else if (j > 1 && j < 19)
                                printf("%c", 205);
                        }
                        printf("\n");
                    }

                    if (i >= 6 && i <= 8)
                    {
                        printf("                                                                      ");
                        for (int j = 1; j <= 19; j++)
                        {
                            if (i != 7)
                            {
                                if (j == 1 || j == 7 || j == 13 || j == 19)
                                    printf("%c", 186);
                                else
                                    printf(" ");
                            }
                            else
                            {
                                if (j == 4)
                                    printf("%c", a[1][0]);
                                else if (j == 10)
                                    printf("%c", a[1][1]);
                                else if (j == 16)
                                    printf("%c", a[1][2]);
                                else if (j == 1 || j == 7 || j == 13 || j == 19)
                                    printf("%c", 186);
                                else
                                    printf(" ");
                            }
                        }
                        printf("\n");
                    }

                    if (i == 9)
                    {
                        printf("                                                                      ");
                        for (int j = 1; j <= 20; j++)
                        {
                            if (j == 1)
                                printf("%c", 204);
                            else if (j == 7 || j == 13)
                                printf("%c", 206);
                            else if (j == 20)
                                printf("%c", 185);
                            else if (j > 1 && j < 19)
                                printf("%c", 205);
                        }
                        printf("\n");
                    }

                    if (i >= 10 && i <= 12)
                    {
                        printf("                                                                      ");
                        for (int j = 1; j <= 19; j++)
                        {
                            if (i != 11)
                            {
                                if (j == 1 || j == 7 || j == 13 || j == 19)
                                    printf("%c", 186);
                                else
                                    printf(" ");
                            }
                            else
                            {
                                if (j == 4)
                                    printf("%c", a[2][0]);
                                else if (j == 10)
                                    printf("%c", a[2][1]);
                                else if (j == 16)
                                    printf("%c", a[2][2]);
                                else if (j == 1 || j == 7 || j == 13 || j == 19)
                                    printf("%c", 186);
                                else
                                    printf(" ");
                            }
                        }
                        printf("\n");
                    }

                    if (i == 13)
                    {
                        printf("                                                                      ");
                        for (j = 1; j <= 18; j++)
                        {
                            if (j == 1)
                                printf("%c", 200);
                            if (j == 18)
                                printf("%c", 188);
                            if (j > 1 && j < 17)
                                printf("%c", 205);
                            if (j == 6 || j == 11)
                                printf("%c", 202);
                        }
                        printf("\n");
                    }
                }

                printf("\n                                                ###############################################################\n");
                if ((a[0][0] == 'X' && a[0][1] == 'X' && a[0][2] == 'X') || (a[1][0] == 'X' && a[1][1] == 'X' && a[1][2] == 'X') || (a[2][0] == 'X' && a[2][1] == 'X' && a[2][2] == 'X') || (a[0][0] == 'X' && a[1][0] == 'X' && a[2][0] == 'X') || (a[0][1] == 'X' && a[1][1] == 'X' && a[2][1] == 'X') || (a[0][2] == 'X' && a[1][2] == 'X' && a[2][2] == 'X') || (a[0][0] == 'X' && a[1][1] == 'X' && a[2][2] == 'X') || (a[2][0] == 'X' && a[1][1] == 'X' && a[0][2] == 'X'))
                {
                    printf("\n                                                                     %s, won the game\n                                                                        Press any key...", name[0]);
                    getch();
                    break;
                }
                if ((a[0][0] == 'O' && a[0][1] == 'O' && a[0][2] == 'O') || (a[1][0] == 'O' && a[1][1] == 'O' && a[1][2] == 'O') || (a[2][0] == 'O' && a[2][1] == 'O' && a[2][2] == 'O') || (a[0][0] == 'O' && a[1][0] == 'O' && a[2][0] == 'O') || (a[0][1] == 'O' && a[1][1] == 'O' && a[2][1] == 'O') || (a[0][2] == 'O' && a[1][2] == 'O' && a[2][2] == 'O') || (a[0][0] == 'O' && a[1][1] == 'O' && a[2][2] == 'O') || (a[2][0] == 'O' && a[1][1] == 'O' && a[0][2] == 'O'))
                {
                    printf("\n                                                                     %s, won the game\n                                                                        Press any key...", name[1]);
                    getch();
                    break;
                }
                if (tempi == 9)
                {
                    printf("\n                                                                          Game Draw\n                                                                        Press any key...");
                    getch();
                    system("cls");
                    break;
                }
                while (tempi < 9)
                {
                    if (tempi == 0 || tempi == 2 || tempi == 4 || tempi == 6 || tempi == 8)
                    {
                        printf("                                                                 %s, Enter marking place : ", name[0]);
                        fflush(stdin);
                        scanf("%d", &n);
                        if (n == 1)
                        {
                            if (a[0][0] != 'X' && a[0][0] != 'O')
                            {
                                a[0][0] = 'X';
                                tempi++;
                                break;
                            }
                            else
                            {
                                printf("                                                                        Already entered\n                                                                       Press any key...");
                                getch();
                                break;
                            }
                        }
                        if (n == 2)
                        {
                            if (a[0][1] != 'X' && a[0][1] != 'O')
                            {
                                a[0][1] = 'X';
                                tempi++;
                                break;
                            }
                            else
                            {
                                printf("                                                                        Already entered\n                                                                       Press any key...");
                                getch();
                                break;
                            }
                        }
                        if (n == 3)
                        {
                            if (a[0][2] != 'X' && a[0][2] != 'O')
                            {
                                a[0][2] = 'X';
                                tempi++;
                                break;
                            }
                            else
                            {
                                printf("                                                                        Already entered\n                                                                       Press any key...");
                                getch();
                                break;
                            }
                        }
                        if (n == 4)
                        {
                            if (a[1][0] != 'X' && a[1][0] != 'O')
                            {
                                a[1][0] = 'X';
                                tempi++;
                                break;
                            }
                            else
                            {
                                printf("                                                                        Already entered\n                                                                       Press any key...");
                                getch();
                                break;
                            }
                        }
                        if (n == 5)
                        {
                            if (a[1][1] != 'X' && a[1][1] != 'O')
                            {
                                a[1][1] = 'X';
                                tempi++;
                                break;
                            }
                            else
                            {
                                printf("                                                                        Already entered\n                                                                       Press any key...");
                                getch();
                                break;
                            }
                        }
                        if (n == 6)
                        {
                            if (a[1][2] != 'X' && a[1][2] != 'O')
                            {
                                a[1][2] = 'X';
                                tempi++;
                                break;
                            }
                            else
                            {
                                printf("                                                                        Already entered\n                                                                       Press any key...");
                                getch();
                                break;
                            }
                        }
                        if (n == 7)
                        {
                            if (a[2][0] != 'X' && a[2][0] != 'O')
                            {
                                a[2][0] = 'X';
                                tempi++;
                                break;
                            }
                            else
                            {
                                printf("                                                                        Already entered\n                                                                       Press any key...");
                                getch();
                                break;
                            }
                        }
                        if (n == 8)
                        {
                            if (a[2][1] != 'X' && a[2][1] != 'O')
                            {
                                a[2][1] = 'X';
                                tempi++;
                                break;
                            }
                            else
                            {
                                printf("                                                                        Already entered\n                                                                       Press any key...");
                                getch();
                                break;
                            }
                        }
                        if (n == 9)
                        {
                            if (a[2][2] != 'X' && a[2][2] != 'O')
                            {
                                a[2][2] = 'X';
                                tempi++;
                                break;
                            }
                            else
                            {
                                printf("                                                                        Already entered\n                                                                       Press any key...");
                                getch();
                                break;
                            }
                        }
                        else
                        {
                            printf("\n                                                                        Invalid Input\n                                                                      Press any key...");
                            getch();
                            break;
                        }
                    }
                    else
                    {
                        printf("                                                                 %s, Enter marking place : ", name[1]);
                        fflush(stdin);
                        scanf("%d", &n);
                        if (n == 1)
                        {
                            if (a[0][0] != 'X' && a[0][0] != 'O')
                            {
                                a[0][0] = 'O';
                                tempi++;
                                break;
                            }
                            else
                            {
                                printf("                                                                        Already entered\n                                                                       Press any key...");
                                getch();
                                break;
                            }
                        }
                        if (n == 2)
                        {
                            if (a[0][1] != 'X' && a[0][1] != 'O')
                            {
                                a[0][1] = 'O';
                                tempi++;
                                break;
                            }
                            else
                            {
                                printf("                                                                        Already entered\n                                                                       Press any key...");
                                getch();
                                break;
                            }
                        }
                        if (n == 3)
                        {
                            if (a[0][2] != 'X' && a[0][2] != 'O')
                            {
                                a[0][2] = 'O';
                                tempi++;
                                break;
                            }
                            else
                            {
                                printf("                                                                        Already entered\n                                                                       Press any key...");
                                getch();
                                break;
                            }
                        }
                        if (n == 4)
                        {
                            if (a[1][0] != 'X' && a[1][0] != 'O')
                            {
                                a[1][0] = 'O';
                                tempi++;
                                break;
                            }
                            else
                            {
                                printf("                                                                        Already entered\n                                                                       Press any key...");
                                getch();
                                break;
                            }
                        }
                        if (n == 5)
                        {
                            if (a[1][1] != 'X' && a[1][1] != 'O')
                            {
                                a[1][1] = 'O';
                                tempi++;
                                break;
                            }
                            else
                            {
                                printf("                                                                        Already entered\n                                                                       Press any key...");
                                getch();
                                break;
                            }
                        }
                        if (n == 6)
                        {
                            if (a[1][2] != 'X' && a[1][2] != 'O')
                            {
                                a[1][2] = 'O';
                                tempi++;
                                break;
                            }
                            else
                            {
                                printf("                                                                        Already entered\n                                                                       Press any key...");
                                getch();
                                break;
                            }
                        }
                        if (n == 7)
                        {
                            if (a[2][0] != 'X' && a[2][0] != 'O')
                            {
                                a[2][0] = 'O';
                                tempi++;
                                break;
                            }
                            else
                            {
                                printf("                                                                        Already entered\n                                                                       Press any key...");
                                getch();
                                break;
                            }
                        }
                        if (n == 8)
                        {
                            if (a[2][1] != 'X' && a[2][1] != 'O')
                            {
                                a[2][1] = 'O';
                                tempi++;
                                break;
                            }
                            else
                            {
                                printf("                                                                        Already entered\n                                                                       Press any key...");
                                getch();
                                break;
                            }
                        }
                        if (n == 9)
                        {
                            if (a[2][2] != 'X' && a[2][2] != 'O')
                            {
                                a[2][2] = 'O';
                                tempi++;
                                break;
                            }
                            else
                            {
                                printf("                                                                        Already entered\n                                                                       Press any key...");
                                getch();
                                break;
                            }
                        }
                        else
                        {
                            printf("\n                                                                        Invalid Input\n                                                                      Press any key...");
                            getch();
                            break;
                        }
                    }
                }
                system("cls");
            }
            tempi = 0;
            break;
        case 2:
            printf("Enter your name : ");
            fflush(stdin);
            fgets(name[0], 50, stdin);
            if (strcmp(name[0], "\n") == 0 || name[0][0] == ' ')
            {
                printf("\nInvalid Input\nPress any key...");
                getch();
                break;
            }

            name[0][strlen(name[0]) - 1] = '\0';
            fflush(stdin);
            strcpy(name[1], "Computer");
            while (1)
            {
                system("cls");
                printf("\n\n                                                ######################### Tic Tac Toe #########################\n\n");
                printf("                                                                   %s (First player) X\n", name[0]);
                printf("                                                                  %s (Second player) O\n\n", name[1]);
                for (i = 1; i <= 13; i++)
                {
                    if (i == 1)
                    {
                        printf("                                                                      ");
                        for (j = 1; j <= 18; j++)
                        {
                            if (j == 1)
                                printf("%c", 201);
                            if (j > 1 && j < 17)
                                printf("%c", 205);
                            if (j == 6 || j == 11)
                                printf("%c", 203);
                            if (j == 18)
                                printf("%c", 187);
                        }
                        printf("\n");
                    }

                    if (i > 1 && i <= 4)
                    {
                        printf("                                                                      ");
                        for (int j = 1; j <= 19; j++)
                        {
                            if (i != 3)
                            {
                                if (j == 1 || j == 7 || j == 13 || j == 19)
                                    printf("%c", 186);
                                else
                                    printf(" ");
                            }
                            else
                            {
                                if (j == 4)
                                    printf("%c", a[0][0]);
                                else if (j == 10)
                                    printf("%c", a[0][1]);
                                else if (j == 16)
                                    printf("%c", a[0][2]);
                                else if (j == 1 || j == 7 || j == 13 || j == 19)
                                    printf("%c", 186);
                                else
                                    printf(" ");
                            }
                        }
                        printf("\n");
                    }

                    if (i == 5)
                    {
                        printf("                                                                      ");
                        for (int j = 1; j <= 20; j++)
                        {
                            if (j == 1)
                                printf("%c", 204);
                            else if (j == 7 || j == 13)
                                printf("%c", 206);
                            else if (j == 20)
                                printf("%c", 185);
                            else if (j > 1 && j < 19)
                                printf("%c", 205);
                        }
                        printf("\n");
                    }

                    if (i >= 6 && i <= 8)
                    {
                        printf("                                                                      ");
                        for (int j = 1; j <= 19; j++)
                        {
                            if (i != 7)
                            {
                                if (j == 1 || j == 7 || j == 13 || j == 19)
                                    printf("%c", 186);
                                else
                                    printf(" ");
                            }
                            else
                            {
                                if (j == 4)
                                    printf("%c", a[1][0]);
                                else if (j == 10)
                                    printf("%c", a[1][1]);
                                else if (j == 16)
                                    printf("%c", a[1][2]);
                                else if (j == 1 || j == 7 || j == 13 || j == 19)
                                    printf("%c", 186);
                                else
                                    printf(" ");
                            }
                        }
                        printf("\n");
                    }

                    if (i == 9)
                    {
                        printf("                                                                      ");
                        for (int j = 1; j <= 20; j++)
                        {
                            if (j == 1)
                                printf("%c", 204);
                            else if (j == 7 || j == 13)
                                printf("%c", 206);
                            else if (j == 20)
                                printf("%c", 185);
                            else if (j > 1 && j < 19)
                                printf("%c", 205);
                        }
                        printf("\n");
                    }

                    if (i >= 10 && i <= 12)
                    {
                        printf("                                                                      ");
                        for (int j = 1; j <= 19; j++)
                        {
                            if (i != 11)
                            {
                                if (j == 1 || j == 7 || j == 13 || j == 19)
                                    printf("%c", 186);
                                else
                                    printf(" ");
                            }
                            else
                            {
                                if (j == 4)
                                    printf("%c", a[2][0]);
                                else if (j == 10)
                                    printf("%c", a[2][1]);
                                else if (j == 16)
                                    printf("%c", a[2][2]);
                                else if (j == 1 || j == 7 || j == 13 || j == 19)
                                    printf("%c", 186);
                                else
                                    printf(" ");
                            }
                        }
                        printf("\n");
                    }

                    if (i == 13)
                    {
                        printf("                                                                      ");
                        for (j = 1; j <= 18; j++)
                        {
                            if (j == 1)
                                printf("%c", 200);
                            if (j == 18)
                                printf("%c", 188);
                            if (j > 1 && j < 17)
                                printf("%c", 205);
                            if (j == 6 || j == 11)
                                printf("%c", 202);
                        }
                        printf("\n");
                    }
                }

                printf("\n                                                ###############################################################\n");
                if ((a[0][0] == 'X' && a[0][1] == 'X' && a[0][2] == 'X') || (a[1][0] == 'X' && a[1][1] == 'X' && a[1][2] == 'X') || (a[2][0] == 'X' && a[2][1] == 'X' && a[2][2] == 'X') || (a[0][0] == 'X' && a[1][0] == 'X' && a[2][0] == 'X') || (a[0][1] == 'X' && a[1][1] == 'X' && a[2][1] == 'X') || (a[0][2] == 'X' && a[1][2] == 'X' && a[2][2] == 'X') || (a[0][0] == 'X' && a[1][1] == 'X' && a[2][2] == 'X') || (a[2][0] == 'X' && a[1][1] == 'X' && a[0][2] == 'X'))
                {
                    printf("\n                                                                     %s, won the game\n                                                                        Press any key...", name[0]);
                    getch();
                    break;
                }
                if ((a[0][0] == 'O' && a[0][1] == 'O' && a[0][2] == 'O') || (a[1][0] == 'O' && a[1][1] == 'O' && a[1][2] == 'O') || (a[2][0] == 'O' && a[2][1] == 'O' && a[2][2] == 'O') || (a[0][0] == 'O' && a[1][0] == 'O' && a[2][0] == 'O') || (a[0][1] == 'O' && a[1][1] == 'O' && a[2][1] == 'O') || (a[0][2] == 'O' && a[1][2] == 'O' && a[2][2] == 'O') || (a[0][0] == 'O' && a[1][1] == 'O' && a[2][2] == 'O') || (a[2][0] == 'O' && a[1][1] == 'O' && a[0][2] == 'O'))
                {
                    printf("\n                                                                     %s, won the game\n                                                                        Press any key...", name[1]);
                    getch();
                    break;
                }
                if (tempi == 9)
                {
                    printf("\n                                                                          Game Draw\n                                                                        Press any key...");
                    getch();
                    system("cls");
                    break;
                }
                while (tempi < 9)
                {
                    if (tempi == 0)
                    {
                        printf("                                                                 %s, Enter marking place : ", name[0]);
                        fflush(stdin);
                        scanf("%d", &n);
                        if (n == 1)
                        {
                            a[0][0] = 'X';
                            tempi++;
                            break;
                        }
                        if (n == 2)
                        {
                            a[0][1] = 'X';
                            tempi++;
                            break;
                        }
                        if (n == 3)
                        {
                            a[0][2] = 'X';
                            tempi++;
                            break;
                        }
                        if (n == 4)
                        {
                            a[1][0] = 'X';
                            tempi++;
                            break;
                        }
                        if (n == 5)
                        {
                            a[1][1] = 'X';
                            tempi++;
                            break;
                        }
                        if (n == 6)
                        {
                            a[1][2] = 'X';
                            tempi++;
                            break;
                        }
                        if (n == 7)
                        {
                            a[2][0] = 'X';
                            tempi++;
                            break;
                        }
                        if (n == 8)
                        {
                            a[2][1] = 'X';
                            tempi++;
                            break;
                        }
                        if (n == 9)
                        {
                            a[2][2] = 'X';
                            tempi++;
                            break;
                        }
                        else
                        {
                            printf("\n                                                                        Invalid Input\n                                                                      Press any key...");
                            getch();
                            break;
                        }
                    }
                    if (tempi == 1)
                    {
                        if (a[0][0] != 'X')
                        {
                            a[0][0] = 'O';
                            tempi++;
                            break;
                        }
                        else
                        {
                            a[0][2] = 'O';
                            tempi++;
                            break;
                        }
                    }
                    if (tempi == 2)
                    {
                        printf("                                                                 %s, Enter marking place : ", name[0]);
                        fflush(stdin);
                        scanf("%d", &n);
                        if (n == 1)
                        {
                            if (a[0][0] != 'X' && a[0][0] != 'O')
                            {
                                a[0][0] = 'X';
                                tempi++;
                                break;
                            }
                            else
                            {
                                printf("                                                                        Already entered\n                                                                       Press any key...");
                                getch();
                                break;
                            }
                        }
                        if (n == 2)
                        {
                            if (a[0][1] != 'X' && a[0][1] != 'O')
                            {
                                a[0][1] = 'X';
                                tempi++;
                                break;
                            }
                            else
                            {
                                printf("                                                                        Already entered\n                                                                       Press any key...");
                                getch();
                                break;
                            }
                        }
                        if (n == 3)
                        {
                            if (a[0][2] != 'X' && a[0][2] != 'O')
                            {
                                a[0][2] = 'X';
                                tempi++;
                                break;
                            }
                            else
                            {
                                printf("                                                                        Already entered\n                                                                       Press any key...");
                                getch();
                                break;
                            }
                        }
                        if (n == 4)
                        {
                            if (a[1][0] != 'X' && a[1][0] != 'O')
                            {
                                a[1][0] = 'X';
                                tempi++;
                                break;
                            }
                            else
                            {
                                printf("                                                                        Already entered\n                                                                       Press any key...");
                                getch();
                                break;
                            }
                        }
                        if (n == 5)
                        {
                            if (a[1][1] != 'X' && a[1][1] != 'O')
                            {
                                a[1][1] = 'X';
                                tempi++;
                                break;
                            }
                            else
                            {
                                printf("                                                                        Already entered\n                                                                       Press any key...");
                                getch();
                                break;
                            }
                        }
                        if (n == 6)
                        {
                            if (a[1][2] != 'X' && a[1][2] != 'O')
                            {
                                a[1][2] = 'X';
                                tempi++;
                                break;
                            }
                            else
                            {
                                printf("                                                                        Already entered\n                                                                       Press any key...");
                                getch();
                                break;
                            }
                        }
                        if (n == 7)
                        {
                            if (a[2][0] != 'X' && a[2][0] != 'O')
                            {
                                a[2][0] = 'X';
                                tempi++;
                                break;
                            }
                            else
                            {
                                printf("                                                                        Already entered\n                                                                       Press any key...");
                                getch();
                                break;
                            }
                        }
                        if (n == 8)
                        {
                            if (a[2][1] != 'X' && a[2][1] != 'O')
                            {
                                a[2][1] = 'X';
                                tempi++;
                                break;
                            }
                            else
                            {
                                printf("                                                                        Already entered\n                                                                       Press any key...");
                                getch();
                                break;
                            }
                        }
                        if (n == 9)
                        {
                            if (a[2][2] != 'X' && a[2][2] != 'O')
                            {
                                a[2][2] = 'X';
                                tempi++;
                                break;
                            }
                            else
                            {
                                printf("                                                                        Already entered\n                                                                       Press any key...");
                                getch();
                                break;
                            }
                        }
                        else
                        {
                            printf("\n                                                                        Invalid Input\n                                                                      Press any key...");
                            getch();
                            break;
                        }
                    }
                    if (tempi == 3)
                    {
                        if (a[0][0] == 'X' && a[0][1] == 'X')
                        {
                            if (a[0][2] != 'O')
                            {
                                a[0][2] = 'O';
                                tempi++;
                                break;
                            }
                            else
                            {
                                a[2][2] = 'O';
                                tempi++;
                                break;
                            }
                        }
                        if (a[0][1] == 'X' && a[0][2] == 'X')
                        {
                            if (a[0][0] != 'O')
                            {
                                a[0][0] = 'O';
                                tempi++;
                                break;
                            }
                            else
                            {
                                a[2][0] = 'O';
                                tempi++;
                                break;
                            }
                        }
                        if (a[0][0] == 'X' && a[0][2] == 'X')
                        {
                            if (a[0][1] != 'O')
                            {
                                a[0][1] = 'O';
                                tempi++;
                                break;
                            }
                            else
                            {
                                a[2][1] = 'O';
                                tempi++;
                                break;
                            }
                        }
                        if (a[1][0] == 'X' && a[1][1] == 'X')
                        {
                            if (a[1][2] != 'O')
                            {
                                a[1][2] = 'O';
                                tempi++;
                                break;
                            }
                            else
                            {
                                a[2][2] = 'O';
                                tempi++;
                                break;
                            }
                        }
                        if (a[1][1] == 'X' && a[1][2] == 'X')
                        {
                            if (a[1][0] != 'O')
                            {
                                a[1][0] = 'O';
                                tempi++;
                                break;
                            }
                            else
                            {
                                a[2][2] = 'O';
                                tempi++;
                                break;
                            }
                        }
                        if (a[1][0] == 'X' && a[1][2] == 'X')
                        {
                            if (a[1][1] != 'O')
                            {
                                a[1][1] = 'O';
                                tempi++;
                                break;
                            }
                            else
                            {
                                a[2][2] = 'O';
                                tempi++;
                                break;
                            }
                        }
                        if (a[2][0] == 'X' && a[2][1] == 'X')
                        {
                            if (a[2][2] != 'O')
                            {
                                a[2][2] = 'O';
                                tempi++;
                                break;
                            }
                            else
                            {
                                a[0][2] = 'O';
                                tempi++;
                                break;
                            }
                        }
                        if (a[2][1] == 'X' && a[2][2] == 'X')
                        {
                            if (a[2][0] != 'O')
                            {
                                a[2][0] = 'O';
                                tempi++;
                                break;
                            }
                            else
                            {
                                a[0][2] = 'O';
                                tempi++;
                                break;
                            }
                        }
                        if (a[2][0] == 'X' && a[2][2] == 'X')
                        {
                            if (a[2][1] != 'O')
                            {
                                a[2][1] = 'O';
                                tempi++;
                                break;
                            }
                            else
                            {
                                a[0][2] = 'O';
                                tempi++;
                                break;
                            }
                        }
                        if (a[0][0] == 'X' && a[1][0] == 'X')
                        {
                            if (a[2][0] != 'O')
                            {
                                a[2][0] = 'O';
                                tempi++;
                                break;
                            }
                            else
                            {
                                a[2][2] = 'O';
                                tempi++;
                                break;
                            }
                        }
                        if (a[1][0] == 'X' && a[2][0] == 'X')
                        {
                            if (a[0][0] != 'O')
                            {
                                a[0][0] = 'O';
                                tempi++;
                                break;
                            }
                            else
                            {
                                a[2][2] = 'O';
                                tempi++;
                                break;
                            }
                        }
                        if (a[0][0] == 'X' && a[2][0] == 'X')
                        {
                            if (a[1][0] != 'O')
                            {
                                a[1][0] = 'O';
                                tempi++;
                                break;
                            }
                            else
                            {
                                a[2][2] = 'O';
                                tempi++;
                                break;
                            }
                        }
                        if (a[0][1] == 'X' && a[1][1] == 'X')
                        {
                            if (a[2][1] != 'O')
                            {
                                a[2][1] = 'O';
                                tempi++;
                                break;
                            }
                            else
                            {
                                a[2][0] = 'O';
                                tempi++;
                                break;
                            }
                        }
                        if (a[1][1] == 'X' && a[2][1] == 'X')
                        {
                            if (a[0][1] != 'O')
                            {
                                a[0][1] = 'O';
                                tempi++;
                                break;
                            }
                            else
                            {
                                a[2][0] = 'O';
                                tempi++;
                                break;
                            }
                        }
                        if (a[0][1] == 'X' && a[2][1] == 'X')
                        {
                            if (a[1][1] != 'O')
                            {
                                a[1][1] = 'O';
                                tempi++;
                                break;
                            }
                            else
                            {
                                a[2][0] = 'O';
                                tempi++;
                                break;
                            }
                        }
                        if (a[0][2] == 'X' && a[1][2] == 'X')
                        {
                            if (a[2][2] != 'O')
                            {
                                a[2][2] = 'O';
                                tempi++;
                                break;
                            }
                            else
                            {
                                a[2][0] = 'O';
                                tempi++;
                                break;
                            }
                        }
                        if (a[1][2] == 'X' && a[2][2] == 'X')
                        {
                            if (a[0][2] != 'O')
                            {
                                a[0][2] = 'O';
                                tempi++;
                                break;
                            }
                            else
                            {
                                a[2][0] = 'O';
                                tempi++;
                                break;
                            }
                        }
                        if (a[0][2] == 'X' && a[2][2] == 'X')
                        {
                            if (a[1][2] != 'O')
                            {
                                a[1][2] = 'O';
                                tempi++;
                                break;
                            }
                            else
                            {
                                a[2][0] = 'O';
                                tempi++;
                                break;
                            }
                        }
                        if (a[2][0] == 'X' && a[1][1] == 'X')
                        {
                            if (a[0][2] != 'O')
                            {
                                a[0][2] = 'O';
                                tempi++;
                                break;
                            }
                            else
                            {
                                a[2][2] = 'O';
                                tempi++;
                                break;
                            }
                        }
                        if (a[1][1] == 'X' && a[0][2] == 'X')
                        {
                            if (a[2][0] != 'O')
                            {
                                a[2][0] = 'O';
                                tempi++;
                                break;
                            }
                            else
                            {
                                a[2][2] = 'O';
                                tempi++;
                                break;
                            }
                        }
                        if (a[2][0] == 'X' && a[0][2] == 'X')
                        {
                            if (a[1][1] != 'O')
                            {
                                a[1][1] = 'O';
                                tempi++;
                                break;
                            }
                            else
                            {
                                a[2][2] = 'O';
                                tempi++;
                                break;
                            }
                        }
                        if (a[0][0] == 'X' && a[1][1] == 'X')
                        {
                            if (a[2][2] != 'O')
                            {
                                a[2][2] = 'O';
                                tempi++;
                                break;
                            }
                            else
                            {
                                a[0][2] = 'O';
                                tempi++;
                                break;
                            }
                        }
                        if (a[1][1] == 'X' && a[2][2] == 'X')
                        {
                            if (a[0][0] != 'O')
                            {
                                a[0][0] = 'O';
                                tempi++;
                                break;
                            }
                            else
                            {
                                a[0][2] = 'O';
                                tempi++;
                                break;
                            }
                        }
                        if (a[0][0] == 'X' && a[2][2] == 'X')
                        {
                            if (a[1][1] != 'O')
                            {
                                a[1][1] = 'O';
                                tempi++;
                                break;
                            }
                            else
                            {
                                a[2][0] = 'O';
                                tempi++;
                                break;
                            }
                        }
                        if (a[0][1] == 'X' && a[1][0] == 'X')
                        {
                            a[1][2] = 'O';
                            tempi++;
                            break;
                        }
                        if (a[0][1] == 'X' && a[1][2] == 'X')
                        {
                            a[1][0] = 'O';
                            tempi++;
                            break;
                        }
                        if (a[0][1] == 'X' && a[2][0] == 'X')
                        {
                            a[2][2] = 'O';
                            tempi++;
                            break;
                        }
                        if (a[0][1] == 'X' && a[2][2] == 'X')
                        {
                            a[2][0] = 'O';
                            tempi++;
                            break;
                        }
                        if (a[0][0] == 'X' && a[2][1] == 'X')
                        {
                            a[1][2] = 'O';
                            tempi++;
                            break;
                        }
                        if (a[0][0] == 'X' && a[1][2] == 'X')
                        {
                            a[2][1] = 'O';
                            tempi++;
                            break;
                        }
                        if (a[0][2] == 'X' && a[1][0] == 'X')
                        {
                            a[2][1] = 'O';
                            tempi++;
                            break;
                        }
                        if (a[0][2] == 'X' && a[2][1] == 'X')
                        {
                            a[1][0] = 'O';
                            tempi++;
                            break;
                        }
                        if (a[1][0] == 'X' && a[2][1] == 'X')
                        {
                            a[0][1] = 'O';
                            tempi++;
                            break;
                        }
                        if (a[1][0] == 'X' && a[2][2] == 'X')
                        {
                            a[0][2] = 'O';
                            tempi++;
                            break;
                        }
                        if (a[1][2] == 'X' && a[2][1] == 'X')
                        {
                            a[0][1] = 'O';
                            tempi++;
                            break;
                        }
                        if (a[2][0] == 'X' && a[1][2] == 'X')
                        {
                            a[0][1] = 'O';
                            tempi++;
                            break;
                        }
                        if (a[1][0] == 'X' && a[2][2] == 'X')
                        {
                            a[0][1] = 'O';
                            tempi++;
                            break;
                        }
                        if (a[0][1] == 'X' && a[2][2] == 'X')
                        {
                            a[1][0] = 'O';
                            tempi++;
                            break;
                        }
                    }
                    if (tempi == 4)
                    {
                        printf("                                                                 %s, Enter marking place : ", name[0]);
                        fflush(stdin);
                        scanf("%d", &n);
                        if (n == 1)
                        {
                            if (a[0][0] != 'X' && a[0][0] != 'O')
                            {
                                a[0][0] = 'X';
                                tempi++;
                                break;
                            }
                            else
                            {
                                printf("                                                                        Already entered\n                                                                       Press any key...");
                                getch();
                                break;
                            }
                        }
                        if (n == 2)
                        {
                            if (a[0][1] != 'X' && a[0][1] != 'O')
                            {
                                a[0][1] = 'X';
                                tempi++;
                                break;
                            }
                            else
                            {
                                printf("                                                                        Already entered\n                                                                       Press any key...");
                                getch();
                                break;
                            }
                        }
                        if (n == 3)
                        {
                            if (a[0][2] != 'X' && a[0][2] != 'O')
                            {
                                a[0][2] = 'X';
                                tempi++;
                                break;
                            }
                            else
                            {
                                printf("                                                                        Already entered\n                                                                       Press any key...");
                                getch();
                                break;
                            }
                        }
                        if (n == 4)
                        {
                            if (a[1][0] != 'X' && a[1][0] != 'O')
                            {
                                a[1][0] = 'X';
                                tempi++;
                                break;
                            }
                            else
                            {
                                printf("                                                                        Already entered\n                                                                       Press any key...");
                                getch();
                                break;
                            }
                        }
                        if (n == 5)
                        {
                            if (a[1][1] != 'X' && a[1][1] != 'O')
                            {
                                a[1][1] = 'X';
                                tempi++;
                                break;
                            }
                            else
                            {
                                printf("                                                                        Already entered\n                                                                       Press any key...");
                                getch();
                                break;
                            }
                        }
                        if (n == 6)
                        {
                            if (a[1][2] != 'X' && a[1][2] != 'O')
                            {
                                a[1][2] = 'X';
                                tempi++;
                                break;
                            }
                            else
                            {
                                printf("                                                                        Already entered\n                                                                       Press any key...");
                                getch();
                                break;
                            }
                        }
                        if (n == 7)
                        {
                            if (a[2][0] != 'X' && a[2][0] != 'O')
                            {
                                a[2][0] = 'X';
                                tempi++;
                                break;
                            }
                            else
                            {
                                printf("                                                                        Already entered\n                                                                       Press any key...");
                                getch();
                                break;
                            }
                        }
                        if (n == 8)
                        {
                            if (a[2][1] != 'X' && a[2][1] != 'O')
                            {
                                a[2][1] = 'X';
                                tempi++;
                                break;
                            }
                            else
                            {
                                printf("                                                                        Already entered\n                                                                       Press any key...");
                                getch();
                                break;
                            }
                        }
                        if (n == 9)
                        {
                            if (a[2][2] != 'X' && a[2][2] != 'O')
                            {
                                a[2][2] = 'X';
                                tempi++;
                                break;
                            }
                            else
                            {
                                printf("                                                                        Already entered\n                                                                       Press any key...");
                                getch();
                                break;
                            }
                        }
                        else
                        {
                            printf("\n                                                                        Invalid Input\n                                                                      Press any key...");
                            getch();
                            break;
                        }
                    }
                    if (tempi == 5)
                    {
                        if (a[0][0] == 'O' && a[0][1] == 'O')
                        {
                            if (a[0][2] != 'O' && a[0][2] != 'X')
                            {
                                a[0][2] = 'O';
                                tempi++;
                                break;
                            }
                        }
                        if (a[0][1] == 'O' && a[0][2] == 'O')
                        {
                            if (a[0][0] != 'O' && a[0][0] != 'X')
                            {
                                a[0][0] = 'O';
                                tempi++;
                                break;
                            }
                        }
                        if (a[0][0] == 'O' && a[0][2] == 'O')
                        {
                            if (a[0][1] != 'O' && a[0][1] != 'X')
                            {
                                a[0][1] = 'O';
                                tempi++;
                                break;
                            }
                        }
                        if (a[1][0] == 'O' && a[1][1] == 'O')
                        {
                            if (a[1][2] != 'O' && a[1][2] != 'X')
                            {
                                a[1][2] = 'O';
                                tempi++;
                                break;
                            }
                        }
                        if (a[1][1] == 'O' && a[1][2] == 'O')
                        {
                            if (a[1][0] != 'O' && a[1][0] != 'X')
                            {
                                a[1][0] = 'O';
                                tempi++;
                                break;
                            }
                        }
                        if (a[1][0] == 'O' && a[1][2] == 'O')
                        {
                            if (a[1][1] != 'O' && a[1][1] != 'X')
                            {
                                a[1][1] = 'O';
                                tempi++;
                                break;
                            }
                        }
                        if (a[2][0] == 'O' && a[2][1] == 'O')
                        {
                            if (a[2][2] != 'O' && a[2][2] != 'X')
                            {
                                a[2][2] = 'O';
                                tempi++;
                                break;
                            }
                        }
                        if (a[2][1] == 'X' && a[2][2] == 'X')
                        {
                            if (a[2][0] != 'O' && a[2][0] != 'X')
                            {
                                a[2][0] = 'O';
                                tempi++;
                                break;
                            }
                        }
                        if (a[2][0] == 'O' && a[2][2] == 'O')
                        {
                            if (a[2][1] != 'O' && a[2][1] != 'X')
                            {
                                a[2][1] = 'O';
                                tempi++;
                                break;
                            }
                        }
                        if (a[0][0] == 'O' && a[1][0] == 'O')
                        {
                            if (a[2][0] != 'O' && a[2][0] != 'X')
                            {
                                a[2][0] = 'O';
                                tempi++;
                                break;
                            }
                        }
                        if (a[1][0] == 'O' && a[2][0] == 'O')
                        {
                            if (a[0][0] != 'O' && a[0][0] != 'X')
                            {
                                a[0][0] = 'O';
                                tempi++;
                                break;
                            }
                        }
                        if (a[0][0] == 'O' && a[2][0] == 'O')
                        {
                            if (a[1][0] != 'O' && a[1][0] != 'X')
                            {
                                a[1][0] = 'O';
                                tempi++;
                                break;
                            }
                        }
                        if (a[0][1] == 'O' && a[1][1] == 'O')
                        {
                            if (a[2][1] != 'O' && a[2][1] != 'X')
                            {
                                a[2][1] = 'O';
                                tempi++;
                                break;
                            }
                        }
                        if (a[1][1] == 'O' && a[2][1] == 'O')
                        {
                            if (a[0][1] != 'O' && a[0][1] != 'X')
                            {
                                a[0][1] = 'O';
                                tempi++;
                                break;
                            }
                        }
                        if (a[0][1] == 'O' && a[2][1] == 'O')
                        {
                            if (a[1][1] != 'O' && a[1][1] != 'X')
                            {
                                a[1][1] = 'O';
                                tempi++;
                                break;
                            }
                        }
                        if (a[0][2] == 'O' && a[1][2] == 'O')
                        {
                            if (a[2][2] != 'O' && a[2][2] != 'X')
                            {
                                a[2][2] = 'O';
                                tempi++;
                                break;
                            }
                        }
                        if (a[1][2] == 'O' && a[2][2] == 'O')
                        {
                            if (a[0][2] != 'O' && a[0][2] != 'X')
                            {
                                a[0][2] = 'O';
                                tempi++;
                                break;
                            }
                        }
                        if (a[0][2] == 'O' && a[2][2] == 'O')
                        {
                            if (a[1][2] != 'O' && a[1][2] != 'X')
                            {
                                a[1][2] = 'O';
                                tempi++;
                                break;
                            }
                        }
                        if (a[2][0] == 'O' && a[1][1] == 'O')
                        {
                            if (a[0][2] != 'O' && a[0][2] != 'X')
                            {
                                a[0][2] = 'O';
                                tempi++;
                                break;
                            }
                        }
                        if (a[1][1] == 'O' && a[0][2] == 'O')
                        {
                            if (a[2][0] != 'O' && a[2][0] != 'X')
                            {
                                a[2][0] = 'O';
                                tempi++;
                                break;
                            }
                        }
                        if (a[2][0] == 'O' && a[0][2] == 'O')
                        {
                            if (a[1][1] != 'O' && a[1][1] != 'X')
                            {
                                a[1][1] = 'O';
                                tempi++;
                                break;
                            }
                        }
                        if (a[0][0] == 'O' && a[1][1] == 'O')
                        {
                            if (a[2][2] != 'O' && a[2][2] != 'X')
                            {
                                a[2][2] = 'O';
                                tempi++;
                                break;
                            }
                        }
                        if (a[1][1] == 'O' && a[2][2] == 'O')
                        {
                            if (a[0][0] != 'O' && a[0][0] != 'X')
                            {
                                a[0][0] = 'O';
                                tempi++;
                                break;
                            }
                        }
                        if (a[0][0] == 'O' && a[2][2] == 'O')
                        {
                            if (a[1][1] != 'O' && a[1][1] != 'X')
                            {
                                a[1][1] = 'O';
                                tempi++;
                                break;
                            }
                        }
                        if (a[0][0] == 'X' && a[0][1] == 'X')
                        {
                            if (a[0][2] != 'O')
                            {
                                a[0][2] = 'O';
                                tempi++;
                                break;
                            }
                        }
                        if (a[0][1] == 'X' && a[0][2] == 'X')
                        {
                            if (a[0][0] != 'O')
                            {
                                a[0][0] = 'O';
                                tempi++;
                                break;
                            }
                        }
                        if (a[0][0] == 'X' && a[0][2] == 'X')
                        {
                            if (a[0][1] != 'O')
                            {
                                a[0][1] = 'O';
                                tempi++;
                                break;
                            }
                        }
                        if (a[1][0] == 'X' && a[1][1] == 'X')
                        {
                            if (a[1][2] != 'O')
                            {
                                a[1][2] = 'O';
                                tempi++;
                                break;
                            }
                        }
                        if (a[1][1] == 'X' && a[1][2] == 'X')
                        {
                            if (a[1][0] != 'O')
                            {
                                a[1][0] = 'O';
                                tempi++;
                                break;
                            }
                        }
                        if (a[1][0] == 'X' && a[1][2] == 'X')
                        {
                            if (a[1][1] != 'O')
                            {
                                a[1][1] = 'O';
                                tempi++;
                                break;
                            }
                        }
                        if (a[2][0] == 'X' && a[2][1] == 'X')
                        {
                            if (a[2][2] != 'O')
                            {
                                a[2][2] = 'O';
                                tempi++;
                                break;
                            }
                        }
                        if (a[2][1] == 'X' && a[2][2] == 'X')
                        {
                            if (a[2][0] != 'O')
                            {
                                a[2][0] = 'O';
                                tempi++;
                                break;
                            }
                        }
                        if (a[2][0] == 'X' && a[2][2] == 'X')
                        {
                            if (a[2][1] != 'O')
                            {
                                a[2][1] = 'O';
                                tempi++;
                                break;
                            }
                        }
                        if (a[0][0] == 'X' && a[1][0] == 'X')
                        {
                            if (a[2][0] != 'O')
                            {
                                a[2][0] = 'O';
                                tempi++;
                                break;
                            }
                        }
                        if (a[1][0] == 'X' && a[2][0] == 'X')
                        {
                            if (a[0][0] != 'O')
                            {
                                a[0][0] = 'O';
                                tempi++;
                                break;
                            }
                        }
                        if (a[0][0] == 'X' && a[2][0] == 'X')
                        {
                            if (a[1][0] != 'O')
                            {
                                a[1][0] = 'O';
                                tempi++;
                                break;
                            }
                        }
                        if (a[0][1] == 'X' && a[1][1] == 'X')
                        {
                            if (a[2][1] != 'O')
                            {
                                a[2][1] = 'O';
                                tempi++;
                                break;
                            }
                        }
                        if (a[1][1] == 'X' && a[2][1] == 'X')
                        {
                            if (a[0][1] != 'O')
                            {
                                a[0][1] = 'O';
                                tempi++;
                                break;
                            }
                        }
                        if (a[0][1] == 'X' && a[2][1] == 'X')
                        {
                            if (a[1][1] != 'O')
                            {
                                a[1][1] = 'O';
                                tempi++;
                                break;
                            }
                        }
                        if (a[0][2] == 'X' && a[1][2] == 'X')
                        {
                            if (a[2][2] != 'O')
                            {
                                a[2][2] = 'O';
                                tempi++;
                                break;
                            }
                        }
                        if (a[1][2] == 'X' && a[2][2] == 'X')
                        {
                            if (a[0][2] != 'O')
                            {
                                a[0][2] = 'O';
                                tempi++;
                                break;
                            }
                        }
                        if (a[0][2] == 'X' && a[2][2] == 'X')
                        {
                            if (a[1][2] != 'O')
                            {
                                a[1][2] = 'O';
                                tempi++;
                                break;
                            }
                        }
                        if (a[2][0] == 'X' && a[1][1] == 'X')
                        {
                            if (a[0][2] != 'O')
                            {
                                a[0][2] = 'O';
                                tempi++;
                                break;
                            }
                        }
                        if (a[1][1] == 'X' && a[0][2] == 'X')
                        {
                            if (a[2][0] != 'O')
                            {
                                a[2][0] = 'O';
                                tempi++;
                                break;
                            }
                        }
                        if (a[2][0] == 'X' && a[0][2] == 'X')
                        {
                            if (a[1][1] != 'O')
                            {
                                a[1][1] = 'O';
                                tempi++;
                                break;
                            }
                        }
                        if (a[0][0] == 'X' && a[1][1] == 'X')
                        {
                            if (a[2][2] != 'O')
                            {
                                a[2][2] = 'O';
                                tempi++;
                                break;
                            }
                        }
                        if (a[1][1] == 'X' && a[2][2] == 'X')
                        {
                            if (a[0][0] != 'O')
                            {
                                a[0][0] = 'O';
                                tempi++;
                                break;
                            }
                        }
                        if (a[0][0] == 'X' && a[2][2] == 'X')
                        {
                            if (a[1][1] != 'O')
                            {
                                a[1][1] = 'O';
                                tempi++;
                                break;
                            }
                        }
                        if (a[0][1] != 'X' && a[0][1] != 'O')
                        {
                            a[0][1] = 'O';
                            tempi++;
                            break;
                        }
                        if (a[0][2] != 'X' && a[0][2] != 'O')
                        {
                            a[0][2] = 'O';
                            tempi++;
                            break;
                        }
                        if (a[1][0] != 'X' && a[1][0] != 'O')
                        {
                            a[1][0] = 'O';
                            tempi++;
                            break;
                        }
                        if (a[1][1] != 'X' && a[1][1] != 'O')
                        {
                            a[1][1] = 'O';
                            tempi++;
                            break;
                        }
                        if (a[1][2] != 'X' && a[1][2] != 'O')
                        {
                            a[1][2] = 'O';
                            tempi++;
                            break;
                        }
                        if (a[2][0] != 'X' && a[2][0] != 'O')
                        {
                            a[2][0] = 'O';
                            tempi++;
                            break;
                        }
                        if (a[2][1] != 'X' && a[2][1] != 'O')
                        {
                            a[2][1] = 'O';
                            tempi++;
                            break;
                        }
                        if (a[2][2] != 'X' && a[2][2] != 'O')
                        {
                            a[2][2] = 'O';
                            tempi++;
                            break;
                        }
                    }
                    if (tempi == 6)
                    {
                        printf("                                                                 %s, Enter marking place : ", name[0]);
                        fflush(stdin);
                        scanf("%d", &n);
                        if (n == 1)
                        {
                            if (a[0][0] != 'X' && a[0][0] != 'O')
                            {
                                a[0][0] = 'X';
                                tempi++;
                                break;
                            }
                            else
                            {
                                printf("                                                                        Already entered\n                                                                       Press any key...");
                                getch();
                                break;
                            }
                        }
                        if (n == 2)
                        {
                            if (a[0][1] != 'X' && a[0][1] != 'O')
                            {
                                a[0][1] = 'X';
                                tempi++;
                                break;
                            }
                            else
                            {
                                printf("                                                                        Already entered\n                                                                       Press any key...");
                                getch();
                                break;
                            }
                        }
                        if (n == 3)
                        {
                            if (a[0][2] != 'X' && a[0][2] != 'O')
                            {
                                a[0][2] = 'X';
                                tempi++;
                                break;
                            }
                            else
                            {
                                printf("                                                                        Already entered\n                                                                       Press any key...");
                                getch();
                                break;
                            }
                        }
                        if (n == 4)
                        {
                            if (a[1][0] != 'X' && a[1][0] != 'O')
                            {
                                a[1][0] = 'X';
                                tempi++;
                                break;
                            }
                            else
                            {
                                printf("                                                                        Already entered\n                                                                       Press any key...");
                                getch();
                                break;
                            }
                        }
                        if (n == 5)
                        {
                            if (a[1][1] != 'X' && a[1][1] != 'O')
                            {
                                a[1][1] = 'X';
                                tempi++;
                                break;
                            }
                            else
                            {
                                printf("                                                                        Already entered\n                                                                       Press any key...");
                                getch();
                                break;
                            }
                        }
                        if (n == 6)
                        {
                            if (a[1][2] != 'X' && a[1][2] != 'O')
                            {
                                a[1][2] = 'X';
                                tempi++;
                                break;
                            }
                            else
                            {
                                printf("                                                                        Already entered\n                                                                       Press any key...");
                                getch();
                                break;
                            }
                        }
                        if (n == 7)
                        {
                            if (a[2][0] != 'X' && a[2][0] != 'O')
                            {
                                a[2][0] = 'X';
                                tempi++;
                                break;
                            }
                            else
                            {
                                printf("                                                                        Already entered\n                                                                       Press any key...");
                                getch();
                                break;
                            }
                        }
                        if (n == 8)
                        {
                            if (a[2][1] != 'X' && a[2][1] != 'O')
                            {
                                a[2][1] = 'X';
                                tempi++;
                                break;
                            }
                            else
                            {
                                printf("                                                                        Already entered\n                                                                       Press any key...");
                                getch();
                                break;
                            }
                        }
                        if (n == 9)
                        {
                            if (a[2][2] != 'X' && a[2][2] != 'O')
                            {
                                a[2][2] = 'X';
                                tempi++;
                                break;
                            }
                            else
                            {
                                printf("                                                                        Already entered\n                                                                       Press any key...");
                                getch();
                                break;
                            }
                        }
                        else
                        {
                            printf("\n                                                                        Invalid Input\n                                                                      Press any key...");
                            getch();
                            break;
                        }
                    }
                    if (tempi == 7)
                    {
                        //================ O combination ====================
                        if (a[0][0] == 'O' && a[0][1] == 'O')
                        {
                            if (a[0][2] != 'O' && a[0][2] != 'X')
                            {
                                a[0][2] = 'O';
                                tempi++;
                                break;
                            }
                        }
                        if (a[0][1] == 'O' && a[0][2] == 'O')
                        {
                            if (a[0][0] != 'O' && a[0][0] != 'X')
                            {
                                a[0][0] = 'O';
                                tempi++;
                                break;
                            }
                        }
                        if (a[0][0] == 'O' && a[0][2] == 'O')
                        {
                            if (a[0][1] != 'O' && a[0][1] != 'X')
                            {
                                a[0][1] = 'O';
                                tempi++;
                                break;
                            }
                        }
                        if (a[1][0] == 'O' && a[1][1] == 'O')
                        {
                            if (a[1][2] != 'O' && a[1][2] != 'X')
                            {
                                a[1][2] = 'O';
                                tempi++;
                                break;
                            }
                        }
                        if (a[1][1] == 'O' && a[1][2] == 'O')
                        {
                            if (a[1][0] != 'O' && a[1][0] != 'X')
                            {
                                a[1][0] = 'O';
                                tempi++;
                                break;
                            }
                        }
                        if (a[1][0] == 'O' && a[1][2] == 'O')
                        {
                            if (a[1][1] != 'O' && a[1][1] != 'X')
                            {
                                a[1][1] = 'O';
                                tempi++;
                                break;
                            }
                        }
                        if (a[2][0] == 'O' && a[2][1] == 'O')
                        {
                            if (a[2][2] != 'O' && a[2][2] != 'X')
                            {
                                a[2][2] = 'O';
                                tempi++;
                                break;
                            }
                        }
                        if (a[2][1] == 'X' && a[2][2] == 'X')
                        {
                            if (a[2][0] != 'O' && a[2][0] != 'X')
                            {
                                a[2][0] = 'O';
                                tempi++;
                                break;
                            }
                        }
                        if (a[2][0] == 'O' && a[2][2] == 'O')
                        {
                            if (a[2][1] != 'O' && a[2][1] != 'X')
                            {
                                a[2][1] = 'O';
                                tempi++;
                                break;
                            }
                        }
                        if (a[0][0] == 'O' && a[1][0] == 'O')
                        {
                            if (a[2][0] != 'O' && a[2][0] != 'X')
                            {
                                a[2][0] = 'O';
                                tempi++;
                                break;
                            }
                        }
                        if (a[1][0] == 'O' && a[2][0] == 'O')
                        {
                            if (a[0][0] != 'O' && a[0][0] != 'X')
                            {
                                a[0][0] = 'O';
                                tempi++;
                                break;
                            }
                        }
                        if (a[0][0] == 'O' && a[2][0] == 'O')
                        {
                            if (a[1][0] != 'O' && a[1][0] != 'X')
                            {
                                a[1][0] = 'O';
                                tempi++;
                                break;
                            }
                        }
                        if (a[0][1] == 'O' && a[1][1] == 'O')
                        {
                            if (a[2][1] != 'O' && a[2][1] != 'X')
                            {
                                a[2][1] = 'O';
                                tempi++;
                                break;
                            }
                        }
                        if (a[1][1] == 'O' && a[2][1] == 'O')
                        {
                            if (a[0][1] != 'O' && a[0][1] != 'X')
                            {
                                a[0][1] = 'O';
                                tempi++;
                                break;
                            }
                        }
                        if (a[0][1] == 'O' && a[2][1] == 'O')
                        {
                            if (a[1][1] != 'O' && a[1][1] != 'X')
                            {
                                a[1][1] = 'O';
                                tempi++;
                                break;
                            }
                        }
                        if (a[0][2] == 'O' && a[1][2] == 'O')
                        {
                            if (a[2][2] != 'O' && a[2][2] != 'X')
                            {
                                a[2][2] = 'O';
                                tempi++;
                                break;
                            }
                        }
                        if (a[1][2] == 'O' && a[2][2] == 'O')
                        {
                            if (a[0][2] != 'O' && a[0][2] != 'X')
                            {
                                a[0][2] = 'O';
                                tempi++;
                                break;
                            }
                        }
                        if (a[0][2] == 'O' && a[2][2] == 'O')
                        {
                            if (a[1][2] != 'O' && a[1][2] != 'X')
                            {
                                a[1][2] = 'O';
                                tempi++;
                                break;
                            }
                        }
                        if (a[2][0] == 'O' && a[1][1] == 'O')
                        {
                            if (a[0][2] != 'O' && a[0][2] != 'X')
                            {
                                a[0][2] = 'O';
                                tempi++;
                                break;
                            }
                        }
                        if (a[1][1] == 'O' && a[0][2] == 'O')
                        {
                            if (a[2][0] != 'O' && a[2][0] != 'X')
                            {
                                a[2][0] = 'O';
                                tempi++;
                                break;
                            }
                        }
                        if (a[2][0] == 'O' && a[0][2] == 'O')
                        {
                            if (a[1][1] != 'O' && a[1][1] != 'X')
                            {
                                a[1][1] = 'O';
                                tempi++;
                                break;
                            }
                        }
                        if (a[0][0] == 'O' && a[1][1] == 'O')
                        {
                            if (a[2][2] != 'O' && a[2][2] != 'X')
                            {
                                a[2][2] = 'O';
                                tempi++;
                                break;
                            }
                        }
                        if (a[1][1] == 'O' && a[2][2] == 'O')
                        {
                            if (a[0][0] != 'O' && a[0][0] != 'X')
                            {
                                a[0][0] = 'O';
                                tempi++;
                                break;
                            }
                        }
                        if (a[0][0] == 'O' && a[2][2] == 'O')
                        {
                            if (a[1][1] != 'O' && a[1][1] != 'X')
                            {
                                a[1][1] = 'O';
                                tempi++;
                                break;
                            }
                        }
                        //==================== X Combination ===================
                        if (a[0][0] == 'X' && a[0][1] == 'X')
                        {
                            if (a[0][2] != 'O')
                            {
                                a[0][2] = 'O';
                                tempi++;
                                break;
                            }
                        }
                        if (a[0][1] == 'X' && a[0][2] == 'X')
                        {
                            if (a[0][0] != 'O')
                            {
                                a[0][0] = 'O';
                                tempi++;
                                break;
                            }
                        }
                        if (a[0][0] == 'X' && a[0][2] == 'X')
                        {
                            if (a[0][1] != 'O')
                            {
                                a[0][1] = 'O';
                                tempi++;
                                break;
                            }
                        }
                        if (a[1][0] == 'X' && a[1][1] == 'X')
                        {
                            if (a[1][2] != 'O')
                            {
                                a[1][2] = 'O';
                                tempi++;
                                break;
                            }
                        }
                        if (a[1][1] == 'X' && a[1][2] == 'X')
                        {
                            if (a[1][0] != 'O')
                            {
                                a[1][0] = 'O';
                                tempi++;
                                break;
                            }
                        }
                        if (a[1][0] == 'X' && a[1][2] == 'X')
                        {
                            if (a[1][1] != 'O')
                            {
                                a[1][1] = 'O';
                                tempi++;
                                break;
                            }
                        }
                        if (a[2][0] == 'X' && a[2][1] == 'X')
                        {
                            if (a[2][2] != 'O')
                            {
                                a[2][2] = 'O';
                                tempi++;
                                break;
                            }
                        }
                        if (a[2][1] == 'X' && a[2][2] == 'X')
                        {
                            if (a[2][0] != 'O')
                            {
                                a[2][0] = 'O';
                                tempi++;
                                break;
                            }
                        }
                        if (a[2][0] == 'X' && a[2][2] == 'X')
                        {
                            if (a[2][1] != 'O')
                            {
                                a[2][1] = 'O';
                                tempi++;
                                break;
                            }
                        }
                        if (a[0][0] == 'X' && a[1][0] == 'X')
                        {
                            if (a[2][0] != 'O')
                            {
                                a[2][0] = 'O';
                                tempi++;
                                break;
                            }
                        }
                        if (a[1][0] == 'X' && a[2][0] == 'X')
                        {
                            if (a[0][0] != 'O')
                            {
                                a[0][0] = 'O';
                                tempi++;
                                break;
                            }
                        }
                        if (a[0][0] == 'X' && a[2][0] == 'X')
                        {
                            if (a[1][0] != 'O')
                            {
                                a[1][0] = 'O';
                                tempi++;
                                break;
                            }
                        }
                        if (a[0][1] == 'X' && a[1][1] == 'X')
                        {
                            if (a[2][1] != 'O')
                            {
                                a[2][1] = 'O';
                                tempi++;
                                break;
                            }
                        }
                        if (a[1][1] == 'X' && a[2][1] == 'X')
                        {
                            if (a[0][1] != 'O')
                            {
                                a[0][1] = 'O';
                                tempi++;
                                break;
                            }
                        }
                        if (a[0][1] == 'X' && a[2][1] == 'X')
                        {
                            if (a[1][1] != 'O')
                            {
                                a[1][1] = 'O';
                                tempi++;
                                break;
                            }
                        }
                        if (a[0][2] == 'X' && a[1][2] == 'X')
                        {
                            if (a[2][2] != 'O')
                            {
                                a[2][2] = 'O';
                                tempi++;
                                break;
                            }
                        }
                        if (a[1][2] == 'X' && a[2][2] == 'X')
                        {
                            if (a[0][2] != 'O')
                            {
                                a[0][2] = 'O';
                                tempi++;
                                break;
                            }
                        }
                        if (a[0][2] == 'X' && a[2][2] == 'X')
                        {
                            if (a[1][2] != 'O')
                            {
                                a[1][2] = 'O';
                                tempi++;
                                break;
                            }
                        }
                        if (a[2][0] == 'X' && a[1][1] == 'X')
                        {
                            if (a[0][2] != 'O')
                            {
                                a[0][2] = 'O';
                                tempi++;
                                break;
                            }
                        }
                        if (a[1][1] == 'X' && a[0][2] == 'X')
                        {
                            if (a[2][0] != 'O')
                            {
                                a[2][0] = 'O';
                                tempi++;
                                break;
                            }
                        }
                        if (a[2][0] == 'X' && a[0][2] == 'X')
                        {
                            if (a[1][1] != 'O')
                            {
                                a[1][1] = 'O';
                                tempi++;
                                break;
                            }
                        }
                        if (a[0][0] == 'X' && a[1][1] == 'X')
                        {
                            if (a[2][2] != 'O')
                            {
                                a[2][2] = 'O';
                                tempi++;
                                break;
                            }
                        }
                        if (a[1][1] == 'X' && a[2][2] == 'X')
                        {
                            if (a[0][0] != 'O')
                            {
                                a[0][0] = 'O';
                                tempi++;
                                break;
                            }
                        }
                        if (a[0][0] == 'X' && a[2][2] == 'X')
                        {
                            if (a[1][1] != 'O')
                            {
                                a[1][1] = 'O';
                                tempi++;
                                break;
                            }
                        }
                        if (a[0][1] != 'X' && a[0][1] != 'O')
                        {
                            a[0][1] = 'O';
                            tempi++;
                            break;
                        }
                        if (a[0][2] != 'X' && a[0][2] != 'O')
                        {
                            a[0][2] = 'O';
                            tempi++;
                            break;
                        }
                        if (a[1][0] != 'X' && a[1][0] != 'O')
                        {
                            a[1][0] = 'O';
                            tempi++;
                            break;
                        }
                        if (a[1][1] != 'X' && a[1][1] != 'O')
                        {
                            a[1][1] = 'O';
                            tempi++;
                            break;
                        }
                        if (a[1][2] != 'X' && a[1][2] != 'O')
                        {
                            a[1][2] = 'O';
                            tempi++;
                            break;
                        }
                        if (a[2][0] != 'X' && a[2][0] != 'O')
                        {
                            a[2][0] = 'O';
                            tempi++;
                            break;
                        }
                        if (a[2][1] != 'X' && a[2][1] != 'O')
                        {
                            a[2][1] = 'O';
                            tempi++;
                            break;
                        }
                        if (a[2][2] != 'X' && a[2][2] != 'O')
                        {
                            a[2][2] = 'O';
                            tempi++;
                            break;
                        }
                    }
                    if (tempi == 8)
                    {
                        printf("                                                                 %s, Enter marking place : ", name[0]);
                        fflush(stdin);
                        scanf("%d", &n);
                        if (n == 1)
                        {
                            if (a[0][0] != 'X' && a[0][0] != 'O')
                            {
                                a[0][0] = 'X';
                                tempi++;
                                break;
                            }
                            else
                            {
                                printf("                                                                        Already entered\n                                                                       Press any key...");
                                getch();
                                break;
                            }
                        }
                        if (n == 2)
                        {
                            if (a[0][1] != 'X' && a[0][1] != 'O')
                            {
                                a[0][1] = 'X';
                                tempi++;
                                break;
                            }
                            else
                            {
                                printf("                                                                        Already entered\n                                                                       Press any key...");
                                getch();
                                break;
                            }
                        }
                        if (n == 3)
                        {
                            if (a[0][2] != 'X' && a[0][2] != 'O')
                            {
                                a[0][2] = 'X';
                                tempi++;
                                break;
                            }
                            else
                            {
                                printf("                                                                        Already entered\n                                                                       Press any key...");
                                getch();
                                break;
                            }
                        }
                        if (n == 4)
                        {
                            if (a[1][0] != 'X' && a[1][0] != 'O')
                            {
                                a[1][0] = 'X';
                                tempi++;
                                break;
                            }
                            else
                            {
                                printf("                                                                        Already entered\n                                                                       Press any key...");
                                getch();
                                break;
                            }
                        }
                        if (n == 5)
                        {
                            if (a[1][1] != 'X' && a[1][1] != 'O')
                            {
                                a[1][1] = 'X';
                                tempi++;
                                break;
                            }
                            else
                            {
                                printf("                                                                        Already entered\n                                                                       Press any key...");
                                getch();
                                break;
                            }
                        }
                        if (n == 6)
                        {
                            if (a[1][2] != 'X' && a[1][2] != 'O')
                            {
                                a[1][2] = 'X';
                                tempi++;
                                break;
                            }
                            else
                            {
                                printf("                                                                        Already entered\n                                                                       Press any key...");
                                getch();
                                break;
                            }
                        }
                        if (n == 7)
                        {
                            if (a[2][0] != 'X' && a[2][0] != 'O')
                            {
                                a[2][0] = 'X';
                                tempi++;
                                break;
                            }
                            else
                            {
                                printf("                                                                        Already entered\n                                                                       Press any key...");
                                getch();
                                break;
                            }
                        }
                        if (n == 8)
                        {
                            if (a[2][1] != 'X' && a[2][1] != 'O')
                            {
                                a[2][1] = 'X';
                                tempi++;
                                break;
                            }
                            else
                            {
                                printf("                                                                        Already entered\n                                                                       Press any key...");
                                getch();
                                break;
                            }
                        }
                        if (n == 9)
                        {
                            if (a[2][2] != 'X' && a[2][2] != 'O')
                            {
                                a[2][2] = 'X';
                                tempi++;
                                break;
                            }
                            else
                            {
                                printf("                                                                        Already entered\n                                                                       Press any key...");
                                getch();
                                break;
                            }
                        }
                        else
                        {
                            printf("\n                                                                        Invalid Input\n                                                                      Press any key...");
                            getch();
                            break;
                        }
                    }
                    else
                    {
                        printf("\n                                                                        Invalid Input\n                                                                      Press any key...");
                        getch();
                        break;
                    }
                }
                system("cls");
            }
            tempi = 0;
            break;
        case 3:
            printf("Enter your name : ");
            fflush(stdin);
            fgets(name[0], 50, stdin);
            if (strcmp(name[0], "\n") == 0 || name[0][0] == ' ')
            {
                printf("\nInvalid Input\nPress any key...");
                getch();
                break;
            }

            name[0][strlen(name[0]) - 1] = '\0';
            fflush(stdin);
            strcpy(name[1], "Computer");
            while (1)
            {
                system("cls");
                printf("\n\n                                                ######################### Tic Tac Toe #########################\n\n");
                printf("                                                                   %s (First player) X\n", name[0]);
                printf("                                                                  %s (Second player) O\n\n", name[1]);
                for (i = 1; i <= 13; i++)
                {
                    if (i == 1)
                    {
                        printf("                                                                      ");
                        for (j = 1; j <= 18; j++)
                        {
                            if (j == 1)
                                printf("%c", 201);
                            if (j > 1 && j < 17)
                                printf("%c", 205);
                            if (j == 6 || j == 11)
                                printf("%c", 203);
                            if (j == 18)
                                printf("%c", 187);
                        }
                        printf("\n");
                    }

                    if (i > 1 && i <= 4)
                    {
                        printf("                                                                      ");
                        for (int j = 1; j <= 19; j++)
                        {
                            if (i != 3)
                            {
                                if (j == 1 || j == 7 || j == 13 || j == 19)
                                    printf("%c", 186);
                                else
                                    printf(" ");
                            }
                            else
                            {
                                if (j == 4)
                                    printf("%c", a[0][0]);
                                else if (j == 10)
                                    printf("%c", a[0][1]);
                                else if (j == 16)
                                    printf("%c", a[0][2]);
                                else if (j == 1 || j == 7 || j == 13 || j == 19)
                                    printf("%c", 186);
                                else
                                    printf(" ");
                            }
                        }
                        printf("\n");
                    }

                    if (i == 5)
                    {
                        printf("                                                                      ");
                        for (int j = 1; j <= 20; j++)
                        {
                            if (j == 1)
                                printf("%c", 204);
                            else if (j == 7 || j == 13)
                                printf("%c", 206);
                            else if (j == 20)
                                printf("%c", 185);
                            else if (j > 1 && j < 19)
                                printf("%c", 205);
                        }
                        printf("\n");
                    }

                    if (i >= 6 && i <= 8)
                    {
                        printf("                                                                      ");
                        for (int j = 1; j <= 19; j++)
                        {
                            if (i != 7)
                            {
                                if (j == 1 || j == 7 || j == 13 || j == 19)
                                    printf("%c", 186);
                                else
                                    printf(" ");
                            }
                            else
                            {
                                if (j == 4)
                                    printf("%c", a[1][0]);
                                else if (j == 10)
                                    printf("%c", a[1][1]);
                                else if (j == 16)
                                    printf("%c", a[1][2]);
                                else if (j == 1 || j == 7 || j == 13 || j == 19)
                                    printf("%c", 186);
                                else
                                    printf(" ");
                            }
                        }
                        printf("\n");
                    }

                    if (i == 9)
                    {
                        printf("                                                                      ");
                        for (int j = 1; j <= 20; j++)
                        {
                            if (j == 1)
                                printf("%c", 204);
                            else if (j == 7 || j == 13)
                                printf("%c", 206);
                            else if (j == 20)
                                printf("%c", 185);
                            else if (j > 1 && j < 19)
                                printf("%c", 205);
                        }
                        printf("\n");
                    }

                    if (i >= 10 && i <= 12)
                    {
                        printf("                                                                      ");
                        for (int j = 1; j <= 19; j++)
                        {
                            if (i != 11)
                            {
                                if (j == 1 || j == 7 || j == 13 || j == 19)
                                    printf("%c", 186);
                                else
                                    printf(" ");
                            }
                            else
                            {
                                if (j == 4)
                                    printf("%c", a[2][0]);
                                else if (j == 10)
                                    printf("%c", a[2][1]);
                                else if (j == 16)
                                    printf("%c", a[2][2]);
                                else if (j == 1 || j == 7 || j == 13 || j == 19)
                                    printf("%c", 186);
                                else
                                    printf(" ");
                            }
                        }
                        printf("\n");
                    }

                    if (i == 13)
                    {
                        printf("                                                                      ");
                        for (j = 1; j <= 18; j++)
                        {
                            if (j == 1)
                                printf("%c", 200);
                            if (j == 18)
                                printf("%c", 188);
                            if (j > 1 && j < 17)
                                printf("%c", 205);
                            if (j == 6 || j == 11)
                                printf("%c", 202);
                        }
                        printf("\n");
                    }
                }

                printf("\n                                                ###############################################################\n");
                if ((a[0][0] == 'X' && a[0][1] == 'X' && a[0][2] == 'X') || (a[1][0] == 'X' && a[1][1] == 'X' && a[1][2] == 'X') || (a[2][0] == 'X' && a[2][1] == 'X' && a[2][2] == 'X') || (a[0][0] == 'X' && a[1][0] == 'X' && a[2][0] == 'X') || (a[0][1] == 'X' && a[1][1] == 'X' && a[2][1] == 'X') || (a[0][2] == 'X' && a[1][2] == 'X' && a[2][2] == 'X') || (a[0][0] == 'X' && a[1][1] == 'X' && a[2][2] == 'X') || (a[2][0] == 'X' && a[1][1] == 'X' && a[0][2] == 'X'))
                {
                    printf("\n                                                                     %s, won the game\n                                                                        Press any key...", name[0]);
                    getch();
                    break;
                }
                if ((a[0][0] == 'O' && a[0][1] == 'O' && a[0][2] == 'O') || (a[1][0] == 'O' && a[1][1] == 'O' && a[1][2] == 'O') || (a[2][0] == 'O' && a[2][1] == 'O' && a[2][2] == 'O') || (a[0][0] == 'O' && a[1][0] == 'O' && a[2][0] == 'O') || (a[0][1] == 'O' && a[1][1] == 'O' && a[2][1] == 'O') || (a[0][2] == 'O' && a[1][2] == 'O' && a[2][2] == 'O') || (a[0][0] == 'O' && a[1][1] == 'O' && a[2][2] == 'O') || (a[2][0] == 'O' && a[1][1] == 'O' && a[0][2] == 'O'))
                {
                    printf("\n                                                                     %s, won the game\n                                                                        Press any key...", name[1]);
                    getch();
                    break;
                }
                if (tempi == 9)
                {
                    printf("\n                                                                          Game Draw\n                                                                        Press any key...");
                    getch();
                    system("cls");
                    break;
                }
                while (tempi < 9)
                {
                    if (tempi == 0)
                    {
                        printf("                                                                 %s, Enter marking place : ", name[0]);
                        fflush(stdin);
                        scanf("%d", &n);
                        if (n == 1)
                        {
                            a[0][0] = 'X';
                            tempi++;
                            break;
                        }
                        if (n == 2)
                        {
                            a[0][1] = 'X';
                            tempi++;
                            break;
                        }
                        if (n == 3)
                        {
                            a[0][2] = 'X';
                            tempi++;
                            break;
                        }
                        if (n == 4)
                        {
                            a[1][0] = 'X';
                            tempi++;
                            break;
                        }
                        if (n == 5)
                        {
                            a[1][1] = 'X';
                            tempi++;
                            break;
                        }
                        if (n == 6)
                        {
                            a[1][2] = 'X';
                            tempi++;
                            break;
                        }
                        if (n == 7)
                        {
                            a[2][0] = 'X';
                            tempi++;
                            break;
                        }
                        if (n == 8)
                        {
                            a[2][1] = 'X';
                            tempi++;
                            break;
                        }
                        if (n == 9)
                        {
                            a[2][2] = 'X';
                            tempi++;
                            break;
                        }
                        else
                        {
                            printf("\n                                                                        Invalid Input\n                                                                      Press any key...");
                            getch();
                            break;
                        }
                    }
                    if (tempi == 1)
                    {
                        if (a[0][0] != 'X')
                        {
                            a[0][0] = 'O';
                            tempi++;
                            break;
                        }
                        else
                        {
                            a[0][2] = 'O';
                            tempi++;
                            break;
                        }
                    }
                    if (tempi == 2)
                    {
                        printf("                                                                 %s, Enter marking place : ", name[0]);
                        fflush(stdin);
                        scanf("%d", &n);
                        if (n == 1)
                        {
                            if (a[0][0] != 'X' && a[0][0] != 'O')
                            {
                                a[0][0] = 'X';
                                tempi++;
                                break;
                            }
                            else
                            {
                                printf("                                                                        Already entered\n                                                                       Press any key...");
                                getch();
                                break;
                            }
                        }
                        if (n == 2)
                        {
                            if (a[0][1] != 'X' && a[0][1] != 'O')
                            {
                                a[0][1] = 'X';
                                tempi++;
                                break;
                            }
                            else
                            {
                                printf("                                                                        Already entered\n                                                                       Press any key...");
                                getch();
                                break;
                            }
                        }
                        if (n == 3)
                        {
                            if (a[0][2] != 'X' && a[0][2] != 'O')
                            {
                                a[0][2] = 'X';
                                tempi++;
                                break;
                            }
                            else
                            {
                                printf("                                                                        Already entered\n                                                                       Press any key...");
                                getch();
                                break;
                            }
                        }
                        if (n == 4)
                        {
                            if (a[1][0] != 'X' && a[1][0] != 'O')
                            {
                                a[1][0] = 'X';
                                tempi++;
                                break;
                            }
                            else
                            {
                                printf("                                                                        Already entered\n                                                                       Press any key...");
                                getch();
                                break;
                            }
                        }
                        if (n == 5)
                        {
                            if (a[1][1] != 'X' && a[1][1] != 'O')
                            {
                                a[1][1] = 'X';
                                tempi++;
                                break;
                            }
                            else
                            {
                                printf("                                                                        Already entered\n                                                                       Press any key...");
                                getch();
                                break;
                            }
                        }
                        if (n == 6)
                        {
                            if (a[1][2] != 'X' && a[1][2] != 'O')
                            {
                                a[1][2] = 'X';
                                tempi++;
                                break;
                            }
                            else
                            {
                                printf("                                                                        Already entered\n                                                                       Press any key...");
                                getch();
                                break;
                            }
                        }
                        if (n == 7)
                        {
                            if (a[2][0] != 'X' && a[2][0] != 'O')
                            {
                                a[2][0] = 'X';
                                tempi++;
                                break;
                            }
                            else
                            {
                                printf("                                                                        Already entered\n                                                                       Press any key...");
                                getch();
                                break;
                            }
                        }
                        if (n == 8)
                        {
                            if (a[2][1] != 'X' && a[2][1] != 'O')
                            {
                                a[2][1] = 'X';
                                tempi++;
                                break;
                            }
                            else
                            {
                                printf("                                                                        Already entered\n                                                                       Press any key...");
                                getch();
                                break;
                            }
                        }
                        if (n == 9)
                        {
                            if (a[2][2] != 'X' && a[2][2] != 'O')
                            {
                                a[2][2] = 'X';
                                tempi++;
                                break;
                            }
                            else
                            {
                                printf("                                                                        Already entered\n                                                                       Press any key...");
                                getch();
                                break;
                            }
                        }
                        else
                        {
                            printf("\n                                                                        Invalid Input\n                                                                      Press any key...");
                            getch();
                            break;
                        }
                    }
                    if (tempi == 3)
                    {
                        if (a[0][0] == 'X' && a[0][1] == 'X')
                        {
                            if (a[0][2] != 'O')
                            {
                                a[0][2] = 'O';
                                tempi++;
                                break;
                            }
                            else
                            {
                                a[2][2] = 'O';
                                tempi++;
                                break;
                            }
                        }
                        if (a[0][1] == 'X' && a[0][2] == 'X')
                        {
                            if (a[0][0] != 'O')
                            {
                                a[0][0] = 'O';
                                tempi++;
                                break;
                            }
                            else
                            {
                                a[2][0] = 'O';
                                tempi++;
                                break;
                            }
                        }
                        if (a[0][0] == 'X' && a[0][2] == 'X')
                        {
                            if (a[0][1] != 'O')
                            {
                                a[0][1] = 'O';
                                tempi++;
                                break;
                            }
                            else
                            {
                                a[2][1] = 'O';
                                tempi++;
                                break;
                            }
                        }
                        if (a[1][0] == 'X' && a[1][1] == 'X')
                        {
                            if (a[1][2] != 'O')
                            {
                                a[1][2] = 'O';
                                tempi++;
                                break;
                            }
                            else
                            {
                                a[2][2] = 'O';
                                tempi++;
                                break;
                            }
                        }
                        if (a[1][1] == 'X' && a[1][2] == 'X')
                        {
                            if (a[1][0] != 'O')
                            {
                                a[1][0] = 'O';
                                tempi++;
                                break;
                            }
                            else
                            {
                                a[2][2] = 'O';
                                tempi++;
                                break;
                            }
                        }
                        if (a[1][0] == 'X' && a[1][2] == 'X')
                        {
                            if (a[1][1] != 'O')
                            {
                                a[1][1] = 'O';
                                tempi++;
                                break;
                            }
                            else
                            {
                                a[2][2] = 'O';
                                tempi++;
                                break;
                            }
                        }
                        if (a[2][0] == 'X' && a[2][1] == 'X')
                        {
                            if (a[2][2] != 'O')
                            {
                                a[2][2] = 'O';
                                tempi++;
                                break;
                            }
                            else
                            {
                                a[0][2] = 'O';
                                tempi++;
                                break;
                            }
                        }
                        if (a[2][1] == 'X' && a[2][2] == 'X')
                        {
                            if (a[2][0] != 'O')
                            {
                                a[2][0] = 'O';
                                tempi++;
                                break;
                            }
                            else
                            {
                                a[0][2] = 'O';
                                tempi++;
                                break;
                            }
                        }
                        if (a[2][0] == 'X' && a[2][2] == 'X')
                        {
                            if (a[2][1] != 'O')
                            {
                                a[2][1] = 'O';
                                tempi++;
                                break;
                            }
                            else
                            {
                                a[0][2] = 'O';
                                tempi++;
                                break;
                            }
                        }
                        if (a[0][0] == 'X' && a[1][0] == 'X')
                        {
                            if (a[2][0] != 'O')
                            {
                                a[2][0] = 'O';
                                tempi++;
                                break;
                            }
                            else
                            {
                                a[2][2] = 'O';
                                tempi++;
                                break;
                            }
                        }
                        if (a[1][0] == 'X' && a[2][0] == 'X')
                        {
                            if (a[0][0] != 'O')
                            {
                                a[0][0] = 'O';
                                tempi++;
                                break;
                            }
                            else
                            {
                                a[2][2] = 'O';
                                tempi++;
                                break;
                            }
                        }
                        if (a[0][0] == 'X' && a[2][0] == 'X')
                        {
                            if (a[1][0] != 'O')
                            {
                                a[1][0] = 'O';
                                tempi++;
                                break;
                            }
                            else
                            {
                                a[2][2] = 'O';
                                tempi++;
                                break;
                            }
                        }
                        if (a[0][1] == 'X' && a[1][1] == 'X')
                        {
                            if (a[2][1] != 'O')
                            {
                                a[2][1] = 'O';
                                tempi++;
                                break;
                            }
                            else
                            {
                                a[2][0] = 'O';
                                tempi++;
                                break;
                            }
                        }
                        if (a[1][1] == 'X' && a[2][1] == 'X')
                        {
                            if (a[0][1] != 'O')
                            {
                                a[0][1] = 'O';
                                tempi++;
                                break;
                            }
                            else
                            {
                                a[2][0] = 'O';
                                tempi++;
                                break;
                            }
                        }
                        if (a[0][1] == 'X' && a[2][1] == 'X')
                        {
                            if (a[1][1] != 'O')
                            {
                                a[1][1] = 'O';
                                tempi++;
                                break;
                            }
                            else
                            {
                                a[2][0] = 'O';
                                tempi++;
                                break;
                            }
                        }
                        if (a[0][2] == 'X' && a[1][2] == 'X')
                        {
                            if (a[2][2] != 'O')
                            {
                                a[2][2] = 'O';
                                tempi++;
                                break;
                            }
                            else
                            {
                                a[2][0] = 'O';
                                tempi++;
                                break;
                            }
                        }
                        if (a[1][2] == 'X' && a[2][2] == 'X')
                        {
                            if (a[0][2] != 'O')
                            {
                                a[0][2] = 'O';
                                tempi++;
                                break;
                            }
                            else
                            {
                                a[2][0] = 'O';
                                tempi++;
                                break;
                            }
                        }
                        if (a[0][2] == 'X' && a[2][2] == 'X')
                        {
                            if (a[1][2] != 'O')
                            {
                                a[1][2] = 'O';
                                tempi++;
                                break;
                            }
                            else
                            {
                                a[2][0] = 'O';
                                tempi++;
                                break;
                            }
                        }
                        if (a[2][0] == 'X' && a[1][1] == 'X')
                        {
                            if (a[0][2] != 'O')
                            {
                                a[0][2] = 'O';
                                tempi++;
                                break;
                            }
                            else
                            {
                                a[2][2] = 'O';
                                tempi++;
                                break;
                            }
                        }
                        if (a[1][1] == 'X' && a[0][2] == 'X')
                        {
                            if (a[2][0] != 'O')
                            {
                                a[2][0] = 'O';
                                tempi++;
                                break;
                            }
                            else
                            {
                                a[2][2] = 'O';
                                tempi++;
                                break;
                            }
                        }
                        if (a[2][0] == 'X' && a[0][2] == 'X')
                        {
                            if (a[1][1] != 'O')
                            {
                                a[1][1] = 'O';
                                tempi++;
                                break;
                            }
                            else
                            {
                                a[2][2] = 'O';
                                tempi++;
                                break;
                            }
                        }
                        if (a[0][0] == 'X' && a[1][1] == 'X')
                        {
                            if (a[2][2] != 'O')
                            {
                                a[2][2] = 'O';
                                tempi++;
                                break;
                            }
                            else
                            {
                                a[0][2] = 'O';
                                tempi++;
                                break;
                            }
                        }
                        if (a[1][1] == 'X' && a[2][2] == 'X')
                        {
                            if (a[0][0] != 'O')
                            {
                                a[0][0] = 'O';
                                tempi++;
                                break;
                            }
                            else
                            {
                                a[0][2] = 'O';
                                tempi++;
                                break;
                            }
                        }
                        if (a[0][0] == 'X' && a[2][2] == 'X')
                        {
                            if (a[1][1] != 'O')
                            {
                                a[1][1] = 'O';
                                tempi++;
                                break;
                            }
                            else
                            {
                                a[2][0] = 'O';
                                tempi++;
                                break;
                            }
                        }
                        if (a[0][1] == 'X' && a[1][0] == 'X')
                        {
                            a[1][2] = 'O';
                            tempi++;
                            break;
                        }
                        if (a[0][1] == 'X' && a[1][2] == 'X')
                        {
                            a[1][0] = 'O';
                            tempi++;
                            break;
                        }
                        if (a[0][1] == 'X' && a[2][0] == 'X')
                        {
                            a[2][2] = 'O';
                            tempi++;
                            break;
                        }
                        if (a[0][1] == 'X' && a[2][2] == 'X')
                        {
                            a[2][0] = 'O';
                            tempi++;
                            break;
                        }
                        if (a[0][0] == 'X' && a[2][1] == 'X')
                        {
                            a[1][2] = 'O';
                            tempi++;
                            break;
                        }
                        if (a[0][0] == 'X' && a[1][2] == 'X')
                        {
                            a[2][1] = 'O';
                            tempi++;
                            break;
                        }
                        if (a[0][2] == 'X' && a[1][0] == 'X')
                        {
                            a[2][1] = 'O';
                            tempi++;
                            break;
                        }
                        if (a[0][2] == 'X' && a[2][1] == 'X')
                        {
                            a[1][0] = 'O';
                            tempi++;
                            break;
                        }
                        if (a[1][0] == 'X' && a[2][1] == 'X')
                        {
                            a[0][1] = 'O';
                            tempi++;
                            break;
                        }
                        if (a[1][0] == 'X' && a[2][2] == 'X')
                        {
                            a[0][2] = 'O';
                            tempi++;
                            break;
                        }
                        if (a[1][2] == 'X' && a[2][1] == 'X')
                        {
                            a[0][1] = 'O';
                            tempi++;
                            break;
                        }
                        if (a[2][0] == 'X' && a[1][2] == 'X')
                        {
                            a[0][1] = 'O';
                            tempi++;
                            break;
                        }
                        if (a[1][0] == 'X' && a[2][2] == 'X')
                        {
                            a[0][1] = 'O';
                            tempi++;
                            break;
                        }
                        if (a[0][1] == 'X' && a[2][2] == 'X')
                        {
                            a[1][0] = 'O';
                            tempi++;
                            break;
                        }
                    }
                    if (tempi == 4)
                    {
                        printf("                                                                  %s, Enter marking place : ", name[0]);
                        fflush(stdin);
                        scanf("%d", &n);
                        if (n == 1)
                        {
                            if (a[0][0] != 'X' && a[0][0] != 'O')
                            {
                                a[0][0] = 'X';
                                tempi++;
                                break;
                            }
                            else
                            {
                                printf("                                                                        Already entered\n                                                                       Press any key...");
                                getch();
                                break;
                            }
                        }
                        if (n == 2)
                        {
                            if (a[0][1] != 'X' && a[0][1] != 'O')
                            {
                                a[0][1] = 'X';
                                tempi++;
                                break;
                            }
                            else
                            {
                                printf("                                                                        Already entered\n                                                                       Press any key...");
                                getch();
                                break;
                            }
                        }
                        if (n == 3)
                        {
                            if (a[0][2] != 'X' && a[0][2] != 'O')
                            {
                                a[0][2] = 'X';
                                tempi++;
                                break;
                            }
                            else
                            {
                                printf("                                                                        Already entered\n                                                                       Press any key...");
                                getch();
                                break;
                            }
                        }
                        if (n == 4)
                        {
                            if (a[1][0] != 'X' && a[1][0] != 'O')
                            {
                                a[1][0] = 'X';
                                tempi++;
                                break;
                            }
                            else
                            {
                                printf("                                                                        Already entered\n                                                                       Press any key...");
                                getch();
                                break;
                            }
                        }
                        if (n == 5)
                        {
                            if (a[1][1] != 'X' && a[1][1] != 'O')
                            {
                                a[1][1] = 'X';
                                tempi++;
                                break;
                            }
                            else
                            {
                                printf("                                                                        Already entered\n                                                                       Press any key...");
                                getch();
                                break;
                            }
                        }
                        if (n == 6)
                        {
                            if (a[1][2] != 'X' && a[1][2] != 'O')
                            {
                                a[1][2] = 'X';
                                tempi++;
                                break;
                            }
                            else
                            {
                                printf("                                                                        Already entered\n                                                                       Press any key...");
                                getch();
                                break;
                            }
                        }
                        if (n == 7)
                        {
                            if (a[2][0] != 'X' && a[2][0] != 'O')
                            {
                                a[2][0] = 'X';
                                tempi++;
                                break;
                            }
                            else
                            {
                                printf("                                                                        Already entered\n                                                                       Press any key...");
                                getch();
                                break;
                            }
                        }
                        if (n == 8)
                        {
                            if (a[2][1] != 'X' && a[2][1] != 'O')
                            {
                                a[2][1] = 'X';
                                tempi++;
                                break;
                            }
                            else
                            {
                                printf("                                                                        Already entered\n                                                                       Press any key...");
                                getch();
                                break;
                            }
                        }
                        if (n == 9)
                        {
                            if (a[2][2] != 'X' && a[2][2] != 'O')
                            {
                                a[2][2] = 'X';
                                tempi++;
                                break;
                            }
                            else
                            {
                                printf("                                                                        Already entered\n                                                                       Press any key...");
                                getch();
                                break;
                            }
                        }
                        else
                        {
                            printf("\n                                                                        Invalid Input\n                                                                      Press any key...");
                            getch();
                            break;
                        }
                    }
                    if (tempi == 5)
                    {
                        if (a[0][2] == 'X' && a[2][2] == 'X' && a[2][0] == 'X')
                        {
                            if (a[2][1] != 'O' && a[1][1] != 'O')
                            {
                                a[2][1] = 'O';
                                a[1][1] = 'O';
                                tempi++;
                                break;
                            }
                        }
                        if (a[0][0] == 'X' && a[2][2] == 'X' && a[2][0] == 'X')
                        {
                            if (a[2][1] != 'O' && a[1][1] != 'O')
                            {
                                a[2][1] = 'O';
                                a[1][1] = 'O';
                                tempi++;
                                break;
                            }
                        }
                        if (a[0][1] == 'X' && a[2][0] == 'X' && a[2][1] == 'X')
                        {
                            if (a[1][1] != 'O' && a[2][2] != 'O')
                            {
                                a[1][1] = 'O';
                                a[2][2] = 'O';
                                tempi++;
                                break;
                            }
                        }
                        if (a[0][1] == 'X' && a[2][2] == 'X' && a[2][1] == 'X')
                        {
                            if (a[1][1] != 'O' && a[2][2] != 'O')
                            {
                                a[1][1] = 'O';
                                a[2][0] = 'O';
                                tempi++;
                                break;
                            }
                        }
                        if (a[0][2] == 'X' && a[2][0] == 'X' && a[2][1] == 'X')
                        {
                            if (a[1][1] != 'O' && a[1][1] != 'X' && a[2][2] != 'O' && a[2][2] != 'X')
                            {
                                a[1][1] = 'O';
                                a[2][2] = 'O';
                                tempi++;
                                break;
                            }
                        }
                        if (a[0][2] == 'X' && a[2][2] == 'X' && a[2][1] == 'X')
                        {
                            if (a[1][1] != 'O' && a[1][1] != 'X' && a[2][0] != 'O' && a[2][0] != 'X')
                            {
                                a[1][1] = 'O';
                                a[2][0] = 'O';
                                tempi++;
                                break;
                            }
                        }
                        if (a[0][0] == 'X' && a[1][0] == 'X' && a[1][2] == 'X')
                        {
                            if (a[1][1] != 'X' && a[1][1] != 'O' && a[2][0] != 'X' && a[2][0] != 'O')
                            {
                                a[1][1] = 'O';
                                a[2][0] = 'O';
                                tempi++;
                                break;
                            }
                        }
                        if (a[0][2] == 'X' && a[1][2] == 'X' && a[1][0] == 'X')
                        {
                            if (a[1][1] != 'X' && a[2][2] != 'O' && a[2][2] != 'X' && a[1][1] != 'O')
                            {
                                a[1][1] = 'O';
                                a[2][2] = 'O';
                                tempi++;
                                break;
                            }
                        }
                        if (a[0][0] == 'O' && a[0][1] == 'O')
                        {
                            if (a[0][2] != 'O' && a[0][2] != 'X')
                            {
                                a[0][2] = 'O';
                                tempi++;
                                break;
                            }
                        }
                        if (a[0][1] == 'O' && a[0][2] == 'O')
                        {
                            if (a[0][0] != 'O' && a[0][0] != 'X')
                            {
                                a[0][0] = 'O';
                                tempi++;
                                break;
                            }
                        }
                        if (a[0][0] == 'O' && a[0][2] == 'O')
                        {
                            if (a[0][1] != 'O' && a[0][1] != 'X')
                            {
                                a[0][1] = 'O';
                                tempi++;
                                break;
                            }
                        }
                        if (a[1][0] == 'O' && a[1][1] == 'O')
                        {
                            if (a[1][2] != 'O' && a[1][2] != 'X')
                            {
                                a[1][2] = 'O';
                                tempi++;
                                break;
                            }
                        }
                        if (a[1][1] == 'O' && a[1][2] == 'O')
                        {
                            if (a[1][0] != 'O' && a[1][0] != 'X')
                            {
                                a[1][0] = 'O';
                                tempi++;
                                break;
                            }
                        }
                        if (a[1][0] == 'O' && a[1][2] == 'O')
                        {
                            if (a[1][1] != 'O' && a[1][1] != 'X')
                            {
                                a[1][1] = 'O';
                                tempi++;
                                break;
                            }
                        }
                        if (a[2][0] == 'O' && a[2][1] == 'O')
                        {
                            if (a[2][2] != 'O' && a[2][2] != 'X')
                            {
                                a[2][2] = 'O';
                                tempi++;
                                break;
                            }
                        }
                        if (a[2][1] == 'X' && a[2][2] == 'X')
                        {
                            if (a[2][0] != 'O' && a[2][0] != 'X')
                            {
                                a[2][0] = 'O';
                                tempi++;
                                break;
                            }
                        }
                        if (a[2][0] == 'O' && a[2][2] == 'O')
                        {
                            if (a[2][1] != 'O' && a[2][1] != 'X')
                            {
                                a[2][1] = 'O';
                                tempi++;
                                break;
                            }
                        }
                        if (a[0][0] == 'O' && a[1][0] == 'O')
                        {
                            if (a[2][0] != 'O' && a[2][0] != 'X')
                            {
                                a[2][0] = 'O';
                                tempi++;
                                break;
                            }
                        }
                        if (a[1][0] == 'O' && a[2][0] == 'O')
                        {
                            if (a[0][0] != 'O' && a[0][0] != 'X')
                            {
                                a[0][0] = 'O';
                                tempi++;
                                break;
                            }
                        }
                        if (a[0][0] == 'O' && a[2][0] == 'O')
                        {
                            if (a[1][0] != 'O' && a[1][0] != 'X')
                            {
                                a[1][0] = 'O';
                                tempi++;
                                break;
                            }
                        }
                        if (a[0][1] == 'O' && a[1][1] == 'O')
                        {
                            if (a[2][1] != 'O' && a[2][1] != 'X')
                            {
                                a[2][1] = 'O';
                                tempi++;
                                break;
                            }
                        }
                        if (a[1][1] == 'O' && a[2][1] == 'O')
                        {
                            if (a[0][1] != 'O' && a[0][1] != 'X')
                            {
                                a[0][1] = 'O';
                                tempi++;
                                break;
                            }
                        }
                        if (a[0][1] == 'O' && a[2][1] == 'O')
                        {
                            if (a[1][1] != 'O' && a[1][1] != 'X')
                            {
                                a[1][1] = 'O';
                                tempi++;
                                break;
                            }
                        }
                        if (a[0][2] == 'O' && a[1][2] == 'O')
                        {
                            if (a[2][2] != 'O' && a[2][2] != 'X')
                            {
                                a[2][2] = 'O';
                                tempi++;
                                break;
                            }
                        }
                        if (a[1][2] == 'O' && a[2][2] == 'O')
                        {
                            if (a[0][2] != 'O' && a[0][2] != 'X')
                            {
                                a[0][2] = 'O';
                                tempi++;
                                break;
                            }
                        }
                        if (a[0][2] == 'O' && a[2][2] == 'O')
                        {
                            if (a[1][2] != 'O' && a[1][2] != 'X')
                            {
                                a[1][2] = 'O';
                                tempi++;
                                break;
                            }
                        }
                        if (a[2][0] == 'O' && a[1][1] == 'O')
                        {
                            if (a[0][2] != 'O' && a[0][2] != 'X')
                            {
                                a[0][2] = 'O';
                                tempi++;
                                break;
                            }
                        }
                        if (a[1][1] == 'O' && a[0][2] == 'O')
                        {
                            if (a[2][0] != 'O' && a[2][0] != 'X')
                            {
                                a[2][0] = 'O';
                                tempi++;
                                break;
                            }
                        }
                        if (a[2][0] == 'O' && a[0][2] == 'O')
                        {
                            if (a[1][1] != 'O' && a[1][1] != 'X')
                            {
                                a[1][1] = 'O';
                                tempi++;
                                break;
                            }
                        }
                        if (a[0][0] == 'O' && a[1][1] == 'O')
                        {
                            if (a[2][2] != 'O' && a[2][2] != 'X')
                            {
                                a[2][2] = 'O';
                                tempi++;
                                break;
                            }
                        }
                        if (a[1][1] == 'O' && a[2][2] == 'O')
                        {
                            if (a[0][0] != 'O' && a[0][0] != 'X')
                            {
                                a[0][0] = 'O';
                                tempi++;
                                break;
                            }
                        }
                        if (a[0][0] == 'O' && a[2][2] == 'O')
                        {
                            if (a[1][1] != 'O' && a[1][1] != 'X')
                            {
                                a[1][1] = 'O';
                                tempi++;
                                break;
                            }
                        }
                        if (a[0][0] == 'X' && a[0][1] == 'X')
                        {
                            if (a[0][2] != 'O')
                            {
                                a[0][2] = 'O';
                                tempi++;
                                break;
                            }
                        }
                        if (a[0][1] == 'X' && a[0][2] == 'X')
                        {
                            if (a[0][0] != 'O')
                            {
                                a[0][0] = 'O';
                                tempi++;
                                break;
                            }
                        }
                        if (a[0][0] == 'X' && a[0][2] == 'X')
                        {
                            if (a[0][1] != 'O')
                            {
                                a[0][1] = 'O';
                                tempi++;
                                break;
                            }
                        }
                        if (a[1][0] == 'X' && a[1][1] == 'X')
                        {
                            if (a[1][2] != 'O')
                            {
                                a[1][2] = 'O';
                                tempi++;
                                break;
                            }
                        }
                        if (a[1][1] == 'X' && a[1][2] == 'X')
                        {
                            if (a[1][0] != 'O')
                            {
                                a[1][0] = 'O';
                                tempi++;
                                break;
                            }
                        }
                        if (a[1][0] == 'X' && a[1][2] == 'X')
                        {
                            if (a[1][1] != 'O')
                            {
                                a[1][1] = 'O';
                                tempi++;
                                break;
                            }
                        }
                        if (a[2][0] == 'X' && a[2][1] == 'X')
                        {
                            if (a[2][2] != 'O')
                            {
                                a[2][2] = 'O';
                                tempi++;
                                break;
                            }
                        }
                        if (a[2][1] == 'X' && a[2][2] == 'X')
                        {
                            if (a[2][0] != 'O')
                            {
                                a[2][0] = 'O';
                                tempi++;
                                break;
                            }
                        }
                        if (a[2][0] == 'X' && a[2][2] == 'X')
                        {
                            if (a[2][1] != 'O')
                            {
                                a[2][1] = 'O';
                                tempi++;
                                break;
                            }
                        }
                        if (a[0][0] == 'X' && a[1][0] == 'X')
                        {
                            if (a[2][0] != 'O')
                            {
                                a[2][0] = 'O';
                                tempi++;
                                break;
                            }
                        }
                        if (a[1][0] == 'X' && a[2][0] == 'X')
                        {
                            if (a[0][0] != 'O')
                            {
                                a[0][0] = 'O';
                                tempi++;
                                break;
                            }
                        }
                        if (a[0][0] == 'X' && a[2][0] == 'X')
                        {
                            if (a[1][0] != 'O')
                            {
                                a[1][0] = 'O';
                                tempi++;
                                break;
                            }
                        }
                        if (a[0][1] == 'X' && a[1][1] == 'X')
                        {
                            if (a[2][1] != 'O')
                            {
                                a[2][1] = 'O';
                                tempi++;
                                break;
                            }
                        }
                        if (a[1][1] == 'X' && a[2][1] == 'X')
                        {
                            if (a[0][1] != 'O')
                            {
                                a[0][1] = 'O';
                                tempi++;
                                break;
                            }
                        }
                        if (a[0][1] == 'X' && a[2][1] == 'X')
                        {
                            if (a[1][1] != 'O')
                            {
                                a[1][1] = 'O';
                                tempi++;
                                break;
                            }
                        }
                        if (a[0][2] == 'X' && a[1][2] == 'X')
                        {
                            if (a[2][2] != 'O')
                            {
                                a[2][2] = 'O';
                                tempi++;
                                break;
                            }
                        }
                        if (a[1][2] == 'X' && a[2][2] == 'X')
                        {
                            if (a[0][2] != 'O')
                            {
                                a[0][2] = 'O';
                                tempi++;
                                break;
                            }
                        }
                        if (a[0][2] == 'X' && a[2][2] == 'X')
                        {
                            if (a[1][2] != 'O')
                            {
                                a[1][2] = 'O';
                                tempi++;
                                break;
                            }
                        }
                        if (a[2][0] == 'X' && a[1][1] == 'X')
                        {
                            if (a[0][2] != 'O')
                            {
                                a[0][2] = 'O';
                                tempi++;
                                break;
                            }
                        }
                        if (a[1][1] == 'X' && a[0][2] == 'X')
                        {
                            if (a[2][0] != 'O')
                            {
                                a[2][0] = 'O';
                                tempi++;
                                break;
                            }
                        }
                        if (a[2][0] == 'X' && a[0][2] == 'X')
                        {
                            if (a[1][1] != 'O')
                            {
                                a[1][1] = 'O';
                                tempi++;
                                break;
                            }
                        }
                        if (a[0][0] == 'X' && a[1][1] == 'X')
                        {
                            if (a[2][2] != 'O')
                            {
                                a[2][2] = 'O';
                                tempi++;
                                break;
                            }
                        }
                        if (a[1][1] == 'X' && a[2][2] == 'X')
                        {
                            if (a[0][0] != 'O')
                            {
                                a[0][0] = 'O';
                                tempi++;
                                break;
                            }
                        }
                        if (a[0][0] == 'X' && a[2][2] == 'X')
                        {
                            if (a[1][1] != 'O')
                            {
                                a[1][1] = 'O';
                                tempi++;
                                break;
                            }
                        }
                        if (a[0][1] != 'X' && a[0][1] != 'O')
                        {
                            a[0][1] = 'O';
                            tempi++;
                            break;
                        }
                        if (a[0][2] != 'X' && a[0][2] != 'O')
                        {
                            a[0][2] = 'O';
                            tempi++;
                            break;
                        }
                        if (a[1][0] != 'X' && a[1][0] != 'O')
                        {
                            a[1][0] = 'O';
                            tempi++;
                            break;
                        }
                        if (a[1][1] != 'X' && a[1][1] != 'O')
                        {
                            a[1][1] = 'O';
                            tempi++;
                            break;
                        }
                        if (a[1][2] != 'X' && a[1][2] != 'O')
                        {
                            a[1][2] = 'O';
                            tempi++;
                            break;
                        }
                        if (a[2][0] != 'X' && a[2][0] != 'O')
                        {
                            a[2][0] = 'O';
                            tempi++;
                            break;
                        }
                        if (a[2][1] != 'X' && a[2][1] != 'O')
                        {
                            a[2][1] = 'O';
                            tempi++;
                            break;
                        }
                        if (a[2][2] != 'X' && a[2][2] != 'O')
                        {
                            a[2][2] = 'O';
                            tempi++;
                            break;
                        }
                    }
                    if (tempi == 6)
                    {
                        printf("                                                                  %s, Enter marking place : ", name[0]);
                        fflush(stdin);
                        scanf("%d", &n);
                        if (n == 1)
                        {
                            if (a[0][0] != 'X' && a[0][0] != 'O')
                            {
                                a[0][0] = 'X';
                                tempi++;
                                break;
                            }
                            else
                            {
                                printf("                                                                        Already entered\n                                                                       Press any key...");
                                getch();
                                break;
                            }
                        }
                        if (n == 2)
                        {
                            if (a[0][1] != 'X' && a[0][1] != 'O')
                            {
                                a[0][1] = 'X';
                                tempi++;
                                break;
                            }
                            else
                            {
                                printf("                                                                        Already entered\n                                                                       Press any key...");
                                getch();
                                break;
                            }
                        }
                        if (n == 3)
                        {
                            if (a[0][2] != 'X' && a[0][2] != 'O')
                            {
                                a[0][2] = 'X';
                                tempi++;
                                break;
                            }
                            else
                            {
                                printf("                                                                        Already entered\n                                                                       Press any key...");
                                getch();
                                break;
                            }
                        }
                        if (n == 4)
                        {
                            if (a[1][0] != 'X' && a[1][0] != 'O')
                            {
                                a[1][0] = 'X';
                                tempi++;
                                break;
                            }
                            else
                            {
                                printf("                                                                        Already entered\n                                                                       Press any key...");
                                getch();
                                break;
                            }
                        }
                        if (n == 5)
                        {
                            if (a[1][1] != 'X' && a[1][1] != 'O')
                            {
                                a[1][1] = 'X';
                                tempi++;
                                break;
                            }
                            else
                            {
                                printf("                                                                        Already entered\n                                                                       Press any key...");
                                getch();
                                break;
                            }
                        }
                        if (n == 6)
                        {
                            if (a[1][2] != 'X' && a[1][2] != 'O')
                            {
                                a[1][2] = 'X';
                                tempi++;
                                break;
                            }
                            else
                            {
                                printf("                                                                        Already entered\n                                                                       Press any key...");
                                getch();
                                break;
                            }
                        }
                        if (n == 7)
                        {
                            if (a[2][0] != 'X' && a[2][0] != 'O')
                            {
                                a[2][0] = 'X';
                                tempi++;
                                break;
                            }
                            else
                            {
                                printf("                                                                        Already entered\n                                                                       Press any key...");
                                getch();
                                break;
                            }
                        }
                        if (n == 8)
                        {
                            if (a[2][1] != 'X' && a[2][1] != 'O')
                            {
                                a[2][1] = 'X';
                                tempi++;
                                break;
                            }
                            else
                            {
                                printf("                                                                        Already entered\n                                                                       Press any key...");
                                getch();
                                break;
                            }
                        }
                        if (n == 9)
                        {
                            if (a[2][2] != 'X' && a[2][2] != 'O')
                            {
                                a[2][2] = 'X';
                                tempi++;
                                break;
                            }
                            else
                            {
                                printf("                                                                        Already entered\n                                                                       Press any key...");
                                getch();
                                break;
                            }
                        }
                        else
                        {
                            printf("\n                                                                        Invalid Input\n                                                                      Press any key...");
                            getch();
                            break;
                        }
                    }
                    if (tempi == 7)
                    {
                        //================ O combination ====================
                        if (a[0][0] == 'O' && a[0][1] == 'O')
                        {
                            if (a[0][2] != 'O' && a[0][2] != 'X')
                            {
                                a[0][2] = 'O';
                                tempi++;
                                break;
                            }
                        }
                        if (a[0][1] == 'O' && a[0][2] == 'O')
                        {
                            if (a[0][0] != 'O' && a[0][0] != 'X')
                            {
                                a[0][0] = 'O';
                                tempi++;
                                break;
                            }
                        }
                        if (a[0][0] == 'O' && a[0][2] == 'O')
                        {
                            if (a[0][1] != 'O' && a[0][1] != 'X')
                            {
                                a[0][1] = 'O';
                                tempi++;
                                break;
                            }
                        }
                        if (a[1][0] == 'O' && a[1][1] == 'O')
                        {
                            if (a[1][2] != 'O' && a[1][2] != 'X')
                            {
                                a[1][2] = 'O';
                                tempi++;
                                break;
                            }
                        }
                        if (a[1][1] == 'O' && a[1][2] == 'O')
                        {
                            if (a[1][0] != 'O' && a[1][0] != 'X')
                            {
                                a[1][0] = 'O';
                                tempi++;
                                break;
                            }
                        }
                        if (a[1][0] == 'O' && a[1][2] == 'O')
                        {
                            if (a[1][1] != 'O' && a[1][1] != 'X')
                            {
                                a[1][1] = 'O';
                                tempi++;
                                break;
                            }
                        }
                        if (a[2][0] == 'O' && a[2][1] == 'O')
                        {
                            if (a[2][2] != 'O' && a[2][2] != 'X')
                            {
                                a[2][2] = 'O';
                                tempi++;
                                break;
                            }
                        }
                        if (a[2][1] == 'X' && a[2][2] == 'X')
                        {
                            if (a[2][0] != 'O' && a[2][0] != 'X')
                            {
                                a[2][0] = 'O';
                                tempi++;
                                break;
                            }
                        }
                        if (a[2][0] == 'O' && a[2][2] == 'O')
                        {
                            if (a[2][1] != 'O' && a[2][1] != 'X')
                            {
                                a[2][1] = 'O';
                                tempi++;
                                break;
                            }
                        }
                        if (a[0][0] == 'O' && a[1][0] == 'O')
                        {
                            if (a[2][0] != 'O' && a[2][0] != 'X')
                            {
                                a[2][0] = 'O';
                                tempi++;
                                break;
                            }
                        }
                        if (a[1][0] == 'O' && a[2][0] == 'O')
                        {
                            if (a[0][0] != 'O' && a[0][0] != 'X')
                            {
                                a[0][0] = 'O';
                                tempi++;
                                break;
                            }
                        }
                        if (a[0][0] == 'O' && a[2][0] == 'O')
                        {
                            if (a[1][0] != 'O' && a[1][0] != 'X')
                            {
                                a[1][0] = 'O';
                                tempi++;
                                break;
                            }
                        }
                        if (a[0][1] == 'O' && a[1][1] == 'O')
                        {
                            if (a[2][1] != 'O' && a[2][1] != 'X')
                            {
                                a[2][1] = 'O';
                                tempi++;
                                break;
                            }
                        }
                        if (a[1][1] == 'O' && a[2][1] == 'O')
                        {
                            if (a[0][1] != 'O' && a[0][1] != 'X')
                            {
                                a[0][1] = 'O';
                                tempi++;
                                break;
                            }
                        }
                        if (a[0][1] == 'O' && a[2][1] == 'O')
                        {
                            if (a[1][1] != 'O' && a[1][1] != 'X')
                            {
                                a[1][1] = 'O';
                                tempi++;
                                break;
                            }
                        }
                        if (a[0][2] == 'O' && a[1][2] == 'O')
                        {
                            if (a[2][2] != 'O' && a[2][2] != 'X')
                            {
                                a[2][2] = 'O';
                                tempi++;
                                break;
                            }
                        }
                        if (a[1][2] == 'O' && a[2][2] == 'O')
                        {
                            if (a[0][2] != 'O' && a[0][2] != 'X')
                            {
                                a[0][2] = 'O';
                                tempi++;
                                break;
                            }
                        }
                        if (a[0][2] == 'O' && a[2][2] == 'O')
                        {
                            if (a[1][2] != 'O' && a[1][2] != 'X')
                            {
                                a[1][2] = 'O';
                                tempi++;
                                break;
                            }
                        }
                        if (a[2][0] == 'O' && a[1][1] == 'O')
                        {
                            if (a[0][2] != 'O' && a[0][2] != 'X')
                            {
                                a[0][2] = 'O';
                                tempi++;
                                break;
                            }
                        }
                        if (a[1][1] == 'O' && a[0][2] == 'O')
                        {
                            if (a[2][0] != 'O' && a[2][0] != 'X')
                            {
                                a[2][0] = 'O';
                                tempi++;
                                break;
                            }
                        }
                        if (a[2][0] == 'O' && a[0][2] == 'O')
                        {
                            if (a[1][1] != 'O' && a[1][1] != 'X')
                            {
                                a[1][1] = 'O';
                                tempi++;
                                break;
                            }
                        }
                        if (a[0][0] == 'O' && a[1][1] == 'O')
                        {
                            if (a[2][2] != 'O' && a[2][2] != 'X')
                            {
                                a[2][2] = 'O';
                                tempi++;
                                break;
                            }
                        }
                        if (a[1][1] == 'O' && a[2][2] == 'O')
                        {
                            if (a[0][0] != 'O' && a[0][0] != 'X')
                            {
                                a[0][0] = 'O';
                                tempi++;
                                break;
                            }
                        }
                        if (a[0][0] == 'O' && a[2][2] == 'O')
                        {
                            if (a[1][1] != 'O' && a[1][1] != 'X')
                            {
                                a[1][1] = 'O';
                                tempi++;
                                break;
                            }
                        }
                        //==================== X Combination ===================
                        if (a[0][1] == 'X' && a[1][1] == 'X' && a[1][0] == 'X')
                        {
                            if (a[2][1] != 'X' && a[2][1] != 'O' && a[1][2] != 'X' && a[1][2] != 'O')
                            {
                                a[2][1] = 'O';
                                a[1][2] = 'O';
                                tempi = tempi + 2;
                                break;
                            }
                        }

                        if (a[0][0] == 'X' && a[0][1] == 'X')
                        {
                            if (a[0][2] != 'O')
                            {
                                a[0][2] = 'O';
                                tempi++;
                                break;
                            }
                        }
                        if (a[0][1] == 'X' && a[0][2] == 'X')
                        {
                            if (a[0][0] != 'O')
                            {
                                a[0][0] = 'O';
                                tempi++;
                                break;
                            }
                        }
                        if (a[0][0] == 'X' && a[0][2] == 'X')
                        {
                            if (a[0][1] != 'O')
                            {
                                a[0][1] = 'O';
                                tempi++;
                                break;
                            }
                        }
                        if (a[1][0] == 'X' && a[1][1] == 'X')
                        {
                            if (a[1][2] != 'O')
                            {
                                a[1][2] = 'O';
                                tempi++;
                                break;
                            }
                        }
                        if (a[1][1] == 'X' && a[1][2] == 'X')
                        {
                            if (a[1][0] != 'O')
                            {
                                a[1][0] = 'O';
                                tempi++;
                                break;
                            }
                        }
                        if (a[1][0] == 'X' && a[1][2] == 'X')
                        {
                            if (a[1][1] != 'O')
                            {
                                a[1][1] = 'O';
                                tempi++;
                                break;
                            }
                        }
                        if (a[2][0] == 'X' && a[2][1] == 'X')
                        {
                            if (a[2][2] != 'O')
                            {
                                a[2][2] = 'O';
                                tempi++;
                                break;
                            }
                        }
                        if (a[2][1] == 'X' && a[2][2] == 'X')
                        {
                            if (a[2][0] != 'O')
                            {
                                a[2][0] = 'O';
                                tempi++;
                                break;
                            }
                        }
                        if (a[2][0] == 'X' && a[2][2] == 'X')
                        {
                            if (a[2][1] != 'O')
                            {
                                a[2][1] = 'O';
                                tempi++;
                                break;
                            }
                        }
                        if (a[0][0] == 'X' && a[1][0] == 'X')
                        {
                            if (a[2][0] != 'O')
                            {
                                a[2][0] = 'O';
                                tempi++;
                                break;
                            }
                        }
                        if (a[1][0] == 'X' && a[2][0] == 'X')
                        {
                            if (a[0][0] != 'O')
                            {
                                a[0][0] = 'O';
                                tempi++;
                                break;
                            }
                        }
                        if (a[0][0] == 'X' && a[2][0] == 'X')
                        {
                            if (a[1][0] != 'O')
                            {
                                a[1][0] = 'O';
                                tempi++;
                                break;
                            }
                        }
                        if (a[0][1] == 'X' && a[1][1] == 'X')
                        {
                            if (a[2][1] != 'O')
                            {
                                a[2][1] = 'O';
                                tempi++;
                                break;
                            }
                        }
                        if (a[1][1] == 'X' && a[2][1] == 'X')
                        {
                            if (a[0][1] != 'O')
                            {
                                a[0][1] = 'O';
                                tempi++;
                                break;
                            }
                        }
                        if (a[0][1] == 'X' && a[2][1] == 'X')
                        {
                            if (a[1][1] != 'O')
                            {
                                a[1][1] = 'O';
                                tempi++;
                                break;
                            }
                        }
                        if (a[0][2] == 'X' && a[1][2] == 'X')
                        {
                            if (a[2][2] != 'O')
                            {
                                a[2][2] = 'O';
                                tempi++;
                                break;
                            }
                        }
                        if (a[1][2] == 'X' && a[2][2] == 'X')
                        {
                            if (a[0][2] != 'O')
                            {
                                a[0][2] = 'O';
                                tempi++;
                                break;
                            }
                        }
                        if (a[0][2] == 'X' && a[2][2] == 'X')
                        {
                            if (a[1][2] != 'O')
                            {
                                a[1][2] = 'O';
                                tempi++;
                                break;
                            }
                        }
                        if (a[2][0] == 'X' && a[1][1] == 'X')
                        {
                            if (a[0][2] != 'O')
                            {
                                a[0][2] = 'O';
                                tempi++;
                                break;
                            }
                        }
                        if (a[1][1] == 'X' && a[0][2] == 'X')
                        {
                            if (a[2][0] != 'O')
                            {
                                a[2][0] = 'O';
                                tempi++;
                                break;
                            }
                        }
                        if (a[2][0] == 'X' && a[0][2] == 'X')
                        {
                            if (a[1][1] != 'O')
                            {
                                a[1][1] = 'O';
                                tempi++;
                                break;
                            }
                        }
                        if (a[0][0] == 'X' && a[1][1] == 'X')
                        {
                            if (a[2][2] != 'O')
                            {
                                a[2][2] = 'O';
                                tempi++;
                                break;
                            }
                        }
                        if (a[1][1] == 'X' && a[2][2] == 'X')
                        {
                            if (a[0][0] != 'O')
                            {
                                a[0][0] = 'O';
                                tempi++;
                                break;
                            }
                        }
                        if (a[0][0] == 'X' && a[2][2] == 'X')
                        {
                            if (a[1][1] != 'O')
                            {
                                a[1][1] = 'O';
                                tempi++;
                                break;
                            }
                        }
                        if (a[0][1] != 'X' && a[0][1] != 'O')
                        {
                            a[0][1] = 'O';
                            tempi++;
                            break;
                        }
                        if (a[0][2] != 'X' && a[0][2] != 'O')
                        {
                            a[0][2] = 'O';
                            tempi++;
                            break;
                        }
                        if (a[1][0] != 'X' && a[1][0] != 'O')
                        {
                            a[1][0] = 'O';
                            tempi++;
                            break;
                        }
                        if (a[1][1] != 'X' && a[1][1] != 'O')
                        {
                            a[1][1] = 'O';
                            tempi++;
                            break;
                        }
                        if (a[1][2] != 'X' && a[1][2] != 'O')
                        {
                            a[1][2] = 'O';
                            tempi++;
                            break;
                        }
                        if (a[2][0] != 'X' && a[2][0] != 'O')
                        {
                            a[2][0] = 'O';
                            tempi++;
                            break;
                        }
                        if (a[2][1] != 'X' && a[2][1] != 'O')
                        {
                            a[2][1] = 'O';
                            tempi++;
                            break;
                        }
                        if (a[2][2] != 'X' && a[2][2] != 'O')
                        {
                            a[2][2] = 'O';
                            tempi++;
                            break;
                        }
                    }
                    if (tempi == 8)
                    {
                        printf("                                                                 %s, Enter marking place : ", name[0]);
                        fflush(stdin);
                        scanf("%d", &n);
                        if (n == 1)
                        {
                            if (a[0][0] != 'X' && a[0][0] != 'O')
                            {
                                a[0][0] = 'X';
                                tempi++;
                                break;
                            }
                            else
                            {
                                printf("                                                                        Already entered\n                                                                       Press any key...");
                                getch();
                                break;
                            }
                        }
                        if (n == 2)
                        {
                            if (a[0][1] != 'X' && a[0][1] != 'O')
                            {
                                a[0][1] = 'X';
                                tempi++;
                                break;
                            }
                            else
                            {
                                printf("                                                                        Already entered\n                                                                       Press any key...");
                                getch();
                                break;
                            }
                        }
                        if (n == 3)
                        {
                            if (a[0][2] != 'X' && a[0][2] != 'O')
                            {
                                a[0][2] = 'X';
                                tempi++;
                                break;
                            }
                            else
                            {
                                printf("                                                                        Already entered\n                                                                       Press any key...");
                                getch();
                                break;
                            }
                        }
                        if (n == 4)
                        {
                            if (a[1][0] != 'X' && a[1][0] != 'O')
                            {
                                a[1][0] = 'X';
                                tempi++;
                                break;
                            }
                            else
                            {
                                printf("                                                                        Already entered\n                                                                       Press any key...");
                                getch();
                                break;
                            }
                        }
                        if (n == 5)
                        {
                            if (a[1][1] != 'X' && a[1][1] != 'O')
                            {
                                a[1][1] = 'X';
                                tempi++;
                                break;
                            }
                            else
                            {
                                printf("                                                                        Already entered\n                                                                       Press any key...");
                                getch();
                                break;
                            }
                        }
                        if (n == 6)
                        {
                            if (a[1][2] != 'X' && a[1][2] != 'O')
                            {
                                a[1][2] = 'X';
                                tempi++;
                                break;
                            }
                            else
                            {
                                printf("                                                                        Already entered\n                                                                       Press any key...");
                                getch();
                                break;
                            }
                        }
                        if (n == 7)
                        {
                            if (a[2][0] != 'X' && a[2][0] != 'O')
                            {
                                a[2][0] = 'X';
                                tempi++;
                                break;
                            }
                            else
                            {
                                printf("                                                                        Already entered\n                                                                       Press any key...");
                                getch();
                                break;
                            }
                        }
                        if (n == 8)
                        {
                            if (a[2][1] != 'X' && a[2][1] != 'O')
                            {
                                a[2][1] = 'X';
                                tempi++;
                                break;
                            }
                            else
                            {
                                printf("                                                                        Already entered\n                                                                       Press any key...");
                                getch();
                                break;
                            }
                        }
                        if (n == 9)
                        {
                            if (a[2][2] != 'X' && a[2][2] != 'O')
                            {
                                a[2][2] = 'X';
                                tempi++;
                                break;
                            }
                            else
                            {
                                printf("                                                                        Already entered\n                                                                       Press any key...");
                                getch();
                                break;
                            }
                        }
                        else
                        {
                            printf("\n                                                                        Invalid Input\n                                                                      Press any key...");
                            getch();
                            break;
                        }
                    }
                    else
                    {
                        printf("\nInvalid Input\nPress any key...");
                        getch();
                        break;
                    }
                }
                system("cls");
            }
            tempi = 0;
            break;
        case 4:
            exit(0);
        default:
            printf("\nInvalid Input\nPress any key...");
            getch();
        }
        system("cls");
        x = 0;
    }

    getch();
    return 0;
}