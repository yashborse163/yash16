import java.io.*;

class readFile
{
    public static void main(String arg[]) throws Exception
    {
        try
        {
            FileInputSream fobj = new FileInputSrteam("PPA.tct");
            int i = 0;

            while((i = fobj.read())!= -1)
            {
                Ststem.out.print((char)i);
            }
            System.out.printfin();
        }
        cacth(Exception Obj)
    
    }
}
