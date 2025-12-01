/*ENTER THE CHARACTER:---
A
IT IS A CHARACTER :---

ENTER THE CHARACTER:---
1
IT IS NOT A CHARACTER
*/
#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChekAlpha(char ch)
{
    if((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("ENTER THE CHARACTER:---\n");
    scanf("%c",&cValue);

    bRet = ChekAlpha(cValue);

    if(bRet == TRUE)
    {
        printf("IT IS A CHARACTER :---");
    }
    else
    {
        printf("IT IS NOT A CHARACTER");

    }
    return 0;
}
