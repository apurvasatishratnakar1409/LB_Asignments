#include<stdio.h>

int SumofEvenNumber(int iLimit)
{
    int iCnt=0 ,iSum=0;
    for(iCnt=1;iCnt<=iLimit;iCnt++)
    {
        if((iCnt%2)==0)
        {
            printf("%d ",iCnt);
        iSum=iSum+iCnt;
        }
    }
    return iSum;
    
//time complexity O(n)

}

int main()
{
    int iLimit=0,iRet=0;
    printf("Enter the Number:");
    scanf("%d",&iLimit);
   
     iRet= SumofEvenNumber(iLimit);

         printf("%d\n",iRet);
    return 0;

}
