class Logic
{
    public void CountDigit(int iNo)
    {
    
        int iCount=0;
        int iReverse=0;
        
        while(iNo!=0)

        {
            int iDigit=iNo%10;
            iNo=iNo/10;
            iReverse=(iReverse*10)+iDigit;
            iCount++;
        }     
        System.out.println("Number of Digit is:"+iCount);
    }

}
class Program5

{
    public static void main (String arge[])
    {
        Logic Lobj=new Logic();
        Lobj.CountDigit(12345);

    }
}
