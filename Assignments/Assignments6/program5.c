#include<stdio.h>


float Percentage(int iNum1 ,int iNum2)
{

    if( iNum1 ==0 || iNum2 == 0 )
    {
        printf("is zero");
        return 0;
    }
    else
    {
        return (iNum2  * 100) / iNum1;

    }

} 
int main()
{
    int iValue1 =0 ,iValue2 =0;
    float fRet = 0.0f;

    printf("Please enter the total marks\n");
    scanf("%d",&iValue1);
 
    printf("Please enter the obtained marks\n");
    scanf("%d",&iValue2);

    fRet = Percentage(iValue1 , iValue2);
    printf("Percentage is: %.2f",fRet);

    return 0 ;

    

    
}
