/*
Enter rows and columns:
4
3
1       2       3       4
2       3       4       5
3       4       5       6
4       5       6       7
*/

#include<stdio.h>

void pattern(int iRow, int iCol)
{
    int i, j;

    for(int i = 1; i <= iRow; i++)
    {
        int num = i;       
        for(int j = 1; j <= 4; j++)
        {
            printf("\t%d", num);
            num++;
        }
        printf("\n");
    }
}

int main()
{
    int iValue1, iValue2;

    printf("Enter rows and columns:\n");
    scanf("%d %d", &iValue1, &iValue2);

    pattern(iValue1, iValue2);

    return 0;
}