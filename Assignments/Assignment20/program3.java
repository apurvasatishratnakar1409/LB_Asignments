class Logic
{
    public void CheckPerfect(int iNo)
    {
        int iCnt=0;
        int iSumofDiv=0;
        for(iCnt=1;iCnt<=iNo/2;iCnt++)
        {
            if(iNo%iCnt==0)
            {
             iSumofDiv=iSumofDiv+iCnt;
                 System.out.println(+iCnt);
            }      
    }
    System.out.println(+iSumofDiv);
    if(iSumofDiv==iNo)
    {
        System.out.println("it is Perfect number");

    }
    else
    {
        System.out.println("it is not Perfect number");
    }
}
}
class program3

{
    public static void main(String args[])

    {
        Logic lobj=new Logic();
        lobj.CheckPerfect(6);

    }

}
