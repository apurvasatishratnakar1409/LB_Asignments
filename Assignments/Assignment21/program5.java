

class Logic
{
    public void PrintDivisibleBy2and3(int iNo)
    {
        int iCnt=0;
       int CounT=0;
        
        for(iCnt=1;iCnt<=iNo;iCnt++)
    {
       
        if(iCnt%2==0 && iCnt%3==0)
        {
            System.out.println("Divisible by 2 and 3 both:"+iCnt);
                
        }
    }


    }
        

}
class program5
{
    static public void main(String arge[])
    {
        Logic lobj=new Logic();
        lobj.PrintDivisibleBy2and3(30);
    }
}
