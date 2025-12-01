
/*
Enter String:--
MarvellouS

Frequency of Small Letters : 8
Frequency of Capital Letters : 2
Difference (Small - Capital) : 6
*/
#include <stdio.h>

int Difference(char str[])
{
    int iSmall = 0;
    int iCapital = 0;

    while(*str != '\0')
    {
        if(*str >= 'A' && *str <= 'Z')
        {
            iCapital++;
        }
        else if(*str >= 'a' && *str <= 'z')
        {
            iSmall++;
        }

        str++;
    }

    return iSmall - iCapital;   
}

int main()
{
    char Arr[50];
    int iRet = 0;
    int iSmall = 0, iCapital = 0;

    printf("Enter String:--\n");
    scanf("%[^\n]s", Arr);

    iRet = Difference(Arr);

    for(int i = 0; Arr[i] != '\0'; i++)
    {
        if(Arr[i] >= 'A' && Arr[i] <= 'Z')
        {
            iCapital++;
        }
        else if(Arr[i] >= 'a' && Arr[i] <= 'z')
        {
            iSmall++;
        }
    }

    printf("\nFrequency of Small Letters : %d\n", iSmall);
    printf("Frequency of Capital Letters : %d\n", iCapital);
    printf("Difference (Small - Capital) : %d\n", iRet);

    return 0;
}
