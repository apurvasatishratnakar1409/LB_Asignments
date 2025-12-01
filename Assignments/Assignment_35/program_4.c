
/*
Enter String:--
Marvellous
Count the number of Vowel is : 4
*/

#include <stdio.h>

int CountVowels(char str[])
{
    int iCount = 0;
    while(*str !='\0')
    {
        if((*str =='e') || (*str == 'a' )|| (*str =='i') || (*str == 'o' )||( *str =='u'))
        {
            iCount++;
        }
        str++;
    }
    return iCount++;
}
int main()
{
    char Arr[50]={'\0'};
    int iRet = 0;

    printf("Enter String:--\n");
    scanf("%[^'\n']s",Arr);

    iRet = CountVowels(Arr);
    
    printf("Count the number of Vowel is : %d",iRet);

    return 0;
}