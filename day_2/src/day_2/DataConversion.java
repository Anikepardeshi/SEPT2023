package day_2;

public class DataConversion {

	public static void main(String[] args) {
		int a;
		int b =25; 
		a = (int)b;   //25
		System.out.println (a);
		
		
		float c = (float)23.5;
		double d = 25.4;
		c = (float) d;   //25.4
		System.out.println(c);
		
		
		d =(double) c;   //25.399999618530273
		System.out.println(d); 
		
		
		a = (int)c;   //25
		System.out.println (a);
		
		
		int i = 258;
		byte e;                       	//int =>  258 = 00000000 00000000 00000001 00000010
		e = (byte)i;   //2 (remainder ) //byte => 00000010 => 2
		System.out.println (e);
	      
	    
		int j = 130;
		byte f = (byte)j; //-126
		System.out.println(f);
		
		
		float k = 130.56f;
		byte g = (byte)k;   //126
	    System.out.println (g);
	    
	    char ch ='x';
	    a = ch;   //120
	    System.out.println (a);
	    
	    a = 65;
	    ch = (char)a;   //A
	    System.out.println (ch);
	    
		

	}

}
