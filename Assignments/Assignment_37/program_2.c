/*
Enter the String: Marvellous
Enter the Character: l
Character Frequency is 2
*/
#include <stdio.h>

int countChar(char *str, char ch)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            iCount++;
        }
        str++;
    }

    return iCount;
}

int main()
{
    char arr[50];
    char cValue;
    int iRet = 0;

    printf("Enter the String: ");
    scanf("%[^\n]s", arr);

    printf("Enter the Character: ");
    scanf(" %c", &cValue);

    iRet = countChar(arr, cValue);

    printf("Character Frequency is %d\n", iRet);

    return 0;
}
