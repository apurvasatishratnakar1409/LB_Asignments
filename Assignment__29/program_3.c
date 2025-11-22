/* 
Enter rows and columns:
4
3
a       b       c
1       2       3
a       b       c
1       2       3
*/

#include<stdio.h>

void pattern(int iRow , int iCol)
{
    int i, j;

    for(i = 1; i <= iRow; i++)
    {
        if(i % 2 == 1)     
        {
            char ch = 'a';
            for(j = 1; j <= iCol; j++)
            {
                printf("%c\t", ch);
                ch++;
            }
        }
        else                       
        {
            int num = 1;
            for(j = 1; j <= iCol; j++)
            {
                printf("%d\t", num);
                num++;
            }
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
