/*
Enter the String: class
Enter the Character: s
Last Occurrence Index is: 5
*/
#include <stdio.h>

int lastChar(char *str, char ch)
{
    int iIndex = 1;
    int i = -1;  

    while(*str != '\0')
    {
        if(*str == ch || *str == ch + 32 || *str == ch - 32) 
        {
            i = iIndex;   
        }

        str++;
        iIndex++;
    }

    return i;
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

    iRet = lastChar(arr, cValue);

    if(iRet != -1)
    {
        printf("Last Occurrence Index is: %d\n", iRet);
    }
    else
    {
        printf("Character not found.\n");
    }

    return 0;
}
