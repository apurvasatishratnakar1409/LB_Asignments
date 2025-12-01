/*
Enter the String: Marvellous
Enter the Character: l
Character Index is 5
*/
#include <stdio.h>

int FirstChar(char *str, char ch)
{
    int iIndex = 0;  
    while(*str != '\0')
    {
        if(*str == ch)
        {
            return iIndex; 
        }
        iIndex++;
        str++;
    }

    return -1; 
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

    iRet = FirstChar(arr, cValue);

    
        printf("Character Index is %d\n", iRet);
     

    return 0;
}
