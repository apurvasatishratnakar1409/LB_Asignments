#include<stdio.h>

int KMtoMeter(int iNo)
{
    int iMeter = 0;

    iMeter = iNo * 1000;   
    return iMeter;
}

int main()
{
    int iValue = 0 , iRet = 0;

    printf("Enter the Distance:\n");
    scanf("%d",&iValue);

    iRet = KMtoMeter(iValue);
    printf("Distance in Meters: %d\n");

    return 0;
}
