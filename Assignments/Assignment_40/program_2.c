#include <stdio.h>

void Display(int NO)
{
    
   if(NO==0)
   {
        return;
   }
    
    Display(NO-1); 
    printf("%d",NO); 
}

int main()
{
    int iValue=0;
    printf("Enter the Number:");
    scanf("%d",&iValue);

    Display(iValue);
    return 0;
}