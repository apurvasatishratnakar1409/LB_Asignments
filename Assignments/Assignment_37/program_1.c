/*
Enter the String: Marvellous infosystem
Enter the Character: o
Character Found.
*/
#include <stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL chkChar(char *str, char ch)
{
    while(*str != '\0')
    {
        if(*str == ch)
        {
            return TRUE;
        }
        str++;
    }
    return FALSE;
}

int main()
{
    char arr[20];
    char cValue;
    BOOL bRet = FALSE;

    printf("Enter the String: ");
    scanf("%[^\n]s", arr);

    printf("Enter the Character: ");
    scanf(" %c", &cValue);  // Note space before %c

    bRet = chkChar(arr, cValue);

    if(bRet == TRUE)
    {
        printf("Character Found.\n");
    }
    else
    {
        printf("Character Not Found.\n");
    }

    return 0;
}
