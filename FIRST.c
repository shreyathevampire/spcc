import java.util.*;

class first{

static void cal_first(String[] ip, int n, char fof)
{
	//char res[30];
	char[] res =new char[8];
	int j=0;
	for(int i=0;i<n;i++)
	{
		if(ip[i].charAt(0) == fof)
		{
			if(ip[i].charAt(2)>='a'&&ip[i].charAt(2)<='z')
			{
				//if(ip[i].charAt(3)>='A'&&ip[i].charAt(3)<='Z')
					res[j++] = ip[i].charAt(2);
			}
		
			else if(ip[i].charAt(2)>='A'&&ip[i].charAt(2)<='Z')
			{
				//System.out.println(ip[i].charAt(2));
				//break;
				cal_first(ip,n,ip[i].charAt(2));
				
			}
		} 
	}

	for(int i=0;i<res.length;i++)
	System.out.println(res[i] + " " );

}
public static void main(String args[]){

	Scanner t = new Scanner(System.in);
	System.out.println("no of prod");
	int n =t.nextInt();
	String[] ip = new String[n];
	for(int i=0;i<n;i++)
		ip[i] = t.next();
	System.out.println("find first of:");
	char fof = t.next().charAt(0);
	cal_first(ip,n,fof);



} 


}


OUTPUT:
no of prod
2
E=T
T=a
find first of:
E
T
a 
 
