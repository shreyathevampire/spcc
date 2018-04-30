import java.util.*;

class lf{

public static String find_alpha(String input){

	String alpha="";
	int i=3;
	while(input.charAt(i)!='|')
	{
		alpha = alpha + input.charAt(i);
		i++;
	}

	return alpha;

}

public static String find_beta(String input){
	
	String beta="";
	int i=0;
	while(input.charAt(i)!='|')
	{
		i++;
	}
	while(input.charAt(i) != '$' )
		beta = beta + input.charAt(i++);
	return beta;
	

}

public static void main(String args[]){
	
	Scanner t = new Scanner(System.in);
	System.out.println("enter production");
	String input = t.next();
	char start = input.charAt(0);
	String new_var = start + "'";
	
	String prod1 = find_alpha(input);
	String prod2 = find_beta(input);
	
	System.out.print(start + "=" + prod2 + new_var );
	System.out.print(new_var + "=" + prod1 + new_var+ "|e");
	
	


}




}



output:

enter production
E=E+T|d$

E=|dE'E'=+TE'|e
