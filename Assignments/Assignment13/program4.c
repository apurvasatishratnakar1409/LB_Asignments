#include<stdio.h>

int SumofNaturalNumber(int iLimit)
{
    int iCnt=0 ,iSum=0;
    for(iCnt=1;iCnt<=iLimit;iCnt++)
    {
        iSum=iSum+iCnt;
    }
    return iSum;
    
//time complexity O(n)

}

int main()
{
    int iLimit=0;
    printf("Enter the Number:");
    scanf("%d",&iLimit);
    printf("%d",SumofNaturalNumber(iLimit));
    return 0;

}
