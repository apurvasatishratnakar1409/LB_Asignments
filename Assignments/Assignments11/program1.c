#include <stdio.h>

int RangeSumEven(int iStart, int iEnd)
{
    int iSum = 0;

    for(int i = iStart; i <= iEnd; i++)
    {
        if(i % 2 == 0)              {
            iSum = iSum + i;
        }
    }
    return iSum;
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iRet = 0;

    printf("Enter starting point:\n");
    scanf("%d", &iValue1);

    printf("Enter ending point:\n");
    scanf("%d", &iValue2);

    iRet = RangeSumEven(iValue1, iValue2);   // ✅ corrected spelling

    printf("Addition is %d", iRet);

    return 0;
}
