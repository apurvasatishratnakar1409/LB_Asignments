/*
Enter String:--
Marve23llous4
Digits in string: 234
*/
#include <stdio.h>

void DisplayDigit(char str[])
{
    while(*str != '\0')
    {
        if((*str >= '0') && (*str <= '9'))
        {
            printf("%c", *str);
        }
        str++;
    }
}

int main()
{
    char Arr[50] = {'\0'};
    
    printf("Enter String:--\n");
    scanf("%[^\n]s", Arr);

    printf("Digits in string: ");
    DisplayDigit(Arr);      

    return 0;
}
