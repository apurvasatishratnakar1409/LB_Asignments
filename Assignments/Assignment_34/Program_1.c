#include<stdio.h>

void DisplayASCII()
{
    int iCnt = 0;

    printf("-------------------------------------------------------------\n");
    printf(" Decimal \t Hexadecimal \t Octal \t\t Character\n");
    printf("-------------------------------------------------------------\n");

    for(iCnt = 0; iCnt <= 255; iCnt++)
    {
        printf(" %3d \t\t %02X \t\t %03o \t\t %c\n", i, i, i, i);
    }

    printf("-------------------------------------------------------------\n");
}

int main()
{
    DisplayASCII();

    return 0;
}
