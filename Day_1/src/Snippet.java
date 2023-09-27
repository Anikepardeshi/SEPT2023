
public class Snippet {

	public static void main(String[] args) {
		int a;
		short s;
		byte b =10;
		//long 11;
		float f;
		double d1;
		char c;
		boolean bool;
		
		b = 10 * 10; //100
		
		//b = b * b;  //Type mismatch: cannot convert from int to byte
		
		a = b * b; //10000
		
		b = (byte)(250 + b); //94
		
		System.out.println(b); 
		System.out.println(a); 

	}

}
