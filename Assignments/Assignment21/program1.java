

class Logic
{
    public void ProductofDigits(int iNo)
    {

        int iProduct=1;
        while(iNo!=0)
        {
            int iDigit=iNo%10;
          iProduct=iProduct*iDigit;
             iNo=iNo/10;
        }
        System.out.println("product of  digit is:"+iProduct);
    }
        

}
class program1
{
    static public void main(String arge[])
    {
        Logic lobj=new Logic();
        lobj.ProductofDigits(234);
    }
}
