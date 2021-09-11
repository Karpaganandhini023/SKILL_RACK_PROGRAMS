/*The price of the item is passed as input.
The program must print the value by formating the value upto 2 places after the decimel place.
The output of the program will be The Price is P
INPUT 1 :
25.3429
OUTPUT 2:
The Price is 25.34
INPUT 2:
34.1754
OUTPUT 2:
The Price is 34.17*/
import java.util.*;
public class Hello{
public static void main(String args[])
{
Scanner sc=new Scanner(System.in);
double price=sc.nextDouble();
String formattedPrice=String.format(".%2f",price);
System.out.println("The Price is "+formattedPrice);
}
}