import java.util.*;

public class leftfactor{

public static void main(String args[]){
	
	Scanner t = new Scanner(System.in);
	System.out.println("enter production");
	String prod1 = t.next();
	String prod2 = t.next();
	char start = prod1.charAt(0);
	String new_var = start + "'";

	String com = "";
	int i=2;
	while(prod1.charAt(i) == prod2.charAt(i))
	{	com = com + prod1.charAt(i);
		
		i++; 
	}
	
	if(i == 2)
		System.out.println("no left factoring exists");

else{
	
	System.out.println(start + "=" + com + new_var);

	System.out.println(new_var + "=" + prod1.substring(i) + "|" + prod2.substring(i));
	
	}
	


}

output:

enter production
e=bg
e=gb
no left factoring 


enter production
E=bcd
E=bca
E=bcE'
E'=d|a



