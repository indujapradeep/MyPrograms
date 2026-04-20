

class StringAndStringBuilder {
	public static void main (String args[]){
		Student a = new Student("Induja");
		Student b = new Student("Shylaja");
		Student c = new Student("Induja");
		String s = "Induja";	// x = new String("Induja");  s = x
		s = "Shylaja";			// y = new String("Shylaja"); s = y
		s = "Induja";			// s = x
		s = "IndujaSaji";		// z = new String("IndujaSaji"); s = z
		s = "Induja";
		String t = "Induja";	// t = x
		System.out.println("Understanding String is Immutable");
		System.out.println(s == t);
		System.out.println(a == c);
		String z = s.replace("I","i");
		System.out.println(z);
		System.out.println(s);
		a.setName("Saji");
		
		System.out.println("String Operations");
		System.out.println("Character in Index (5): "+s.charAt(5));
		System.out.println("Substring : "+s.substring(1,5));
		System.out.println("'I' char index value: "+ s.indexOf("In"));
		System.out.println("String Comparison using 'equals()': "+ s.equals(t));
		String m = new String("Saji");
		String n = new String ("Saji");
		System.out.println("String Comparison using '=': "+(m == n));
		System.out.println("String Comparison using 'equals()': "+m.equals(n));
		char [] arr = s.toCharArray();
		System.out.println("String to Char Array");
		for(int i=0; i<arr.length; i++){
			System.out.println(arr[i]);
		}
		System.out.println("String Length: "+s.length());
		
		System.out.println("String Builder Operations");
		StringBuilder sb = new StringBuilder("Indu");
		System.out.println("Append: "+sb.append("ja"));
		System.out.println("Insert: "+sb.insert(0,"P. "));
		System.out.println("Delete: "+sb.delete(0,3));
		System.out.println("Reverse: "+sb.reverse());
		System.out.println("To String: "+sb.toString());
		System.out.println("To String: "+a.toString());
		System.out.println("Hash Code of a Object: "+a.hashCode());
	}
}

class Student{						//extends Object
	private String name;
	Student(String name){
		this.name = name;
	}	
	public String toString(){		//Overriding toString function
		return "Induja";
	}
	public void setName(String name){
		this.name = name;
	}
}

/* 								String								String Builder       							Character Array
   String					String s = "Indu"				StringBuilder sb = new StringBuilder(s);            s.toCharArray()
   StringBuilder			sb.toString()																		sb.toString().toCharArray()	
   Character Array   	    String s = new String(arr);     StringBuilder sb = new StringBuilder(s);			char [] arr = {'a','b','c'}
   
   
   for (int i = 0; i<arr1.length; i++)
   {
	   
	   if ( arr1[i] != arr2[i]){
		   return false;
	   }
	   
   }
   return true;
   
   
   String s = "Hello";
   for (int i =0; i<6; i++){			// 
	   s = s+"World";
   }
 */