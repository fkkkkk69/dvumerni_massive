

#include <stdio.h>

const int SIZE = 12;
const int SIZE2 = 12;
char arry[SIZE][SIZE];
char arry1[SIZE2][SIZE2];

struct Ship
{
    int length = 2;
    bool isHorizontal = true;
    int row = 2;
    int col = 3;
};

struct ship2
{
    int length = 3;
    bool isHorizontal = false;
    int row = 5;
    int col = 5;
};

struct ship3
{
    int length = 1;
    bool isHorizontal = true;
    int row = 8;
    int col = 9;
};

void moe_pole()
{
    
    for (int i = 0; i < SIZE; i++)
    {
        for (int i1 = 0; i1 < SIZE; i1++)
        {
            if (i == 0 || i1 == 0 || i == SIZE - 1 || i1 == SIZE - 1)
            {
                arry[i][i1] = '#';
            }
            else
            {
                arry[i][i1] = '.';
            }
        }
    }

    Ship korabl;
    for (int k = 0; k < korabl.length; k++)
    {
        if (korabl.isHorizontal == true)
        {
            arry[korabl.row][korabl.col + k] = '*';
        }
        else
        {
            arry[korabl.row + k][korabl.col] = '*';
        }
    }

    ship2 korablik;
    for (int k1 = 0; k1 < korablik.length; k1++)
    {
        if (korablik.isHorizontal == true)
        {
            arry[korablik.row][korablik.col + k1] = '*';
        }
        else
        {
            arry[korablik.row + k1][korablik.col] = '*';
        }
    }

    ship3 korablishe;
    for (int k2 = 0; k2 < korablishe.length; k2++)
    {
        if (korablishe.isHorizontal == true)
        {
            arry[korablishe.row][korablishe.col + k2] = '*';
        }
        else
        {
            arry[korablishe.row + k2][korablishe.col] = '*';
        }
    }

   
    for (int j = 0; j < SIZE2; j++)
    {
        for (int j1 = 0; j1 < SIZE2; j1++)
        {
            if (j == 0 || j1 == 0 || j == SIZE2 - 1 || j1 == SIZE2 - 1)
            {
                arry1[j][j1] = '#';
            }
            else
            {
                arry1[j][j1] = '.';
            }
        }
    }


    for (int i = 0; i < SIZE; i++)
    {
        for (int i1 = 0; i1 < SIZE; i1++)
        {
            printf("%c ", arry[i][i1]);
        }
        printf("\n");
    }

    printf("\n");


    for (int j = 0; j < SIZE2; j++)
    {
        for (int j1 = 0; j1 < SIZE2; j1++)
        {
            printf("%c ", arry1[j][j1]);
        }
        printf("\n");
    }
}

int main()
{
    moe_pole();
    return 0;
}


