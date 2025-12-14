#include <stdio.h>


void  Display(int NO)
{
     static char ch='a';
    
   if(NO==0)
   {
        return;
   }
    
    
    printf("%c ",ch);
    ch++; 
    Display(NO-1); 
    
}

int main()
{
    int iValue=0;
    printf("Enter the Number:");
    scanf("%d",&iValue);

    Display(iValue);
    return 0;
}