import java.util.Scanner;

public class inputC_FN
{
    public static void inputFN()
    {
        System.out.print("EnterWord : ");
        try (Scanner newinput = new Scanner(System.in)) {
            String word = newinput.nextLine();
            System.out.println(word);
        }catch(Exception e){
            System.out.println("Something went wrong.");
        }
    }
    public static void main(String[] args)
    {   
        inputFN();
    }
}