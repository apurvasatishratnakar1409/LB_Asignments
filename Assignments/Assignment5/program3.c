#include<stdio.h>
#include<stdbool.h>

int CheckLeapYear(int year)
{
    if((year % 4)==0)
    {
        printf("it is leap year\n",year);
    }
    else
    {
        printf("it is not a leap year\n",year);
    }
}

int main()
{
    int yr;

    printf("Enter the Year:\n");
    scanf("%d",&yr);
    CheckLeapYear(yr);
    
    
    return 0;
    
}
