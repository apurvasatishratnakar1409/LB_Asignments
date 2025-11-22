/* 
Enter the number of Elements:-
4
3
2       4       6
1       3       5
2       4       6
1       3       5
*/

#include<stdio.h>

void pattern(int iRow , int iCol)
{
    int i, j;
    int num;

    for(i = 1; i <= iRow; i++)
    {
        if(i % 2 == 1)   
        {
            num = 2;
        }
        else             
        {
            num = 1;
        }

        for(j = 1; j <= iCol; j++)
        {
            printf("%d\t", num);
            num += 2;
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
