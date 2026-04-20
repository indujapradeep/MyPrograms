import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;

class Hello{
	public static void main(String args[]){
		System.out.println("Hello");
		int arr[] = new int [10];
		for(int i=0; i<arr.length ;i++){
			arr[i] = i * -10; 
		}
		for(int i=0; i<arr.length; i++){
			System.out.println(arr[i]);
		}
		
		System.out.println("Inserting the Array Elements");
		for(int i=9; i>3; i--){
			arr[i] = arr[i-1];
		}
		arr[4] = 35;
		for(int i=0; i<arr.length; i++){
			System.out.println(arr[i]);
		}
		
		System.out.println("Deleted the 4th element");
		for(int i=3; i< arr.length - 1; i++){
			arr[i] = arr[i+1];
		}
		arr[9] = -1;
		
		System.out.println("Deleted the 8th element");
		for(int i=7; i<arr.length-1; i++){
			arr[i] = arr[i+1];
		}
		arr[9] = -1;
		Arrays.sort(arr);
		for(int i=0; i<arr.length; i++){
			System.out.println(arr[i]);
		}
		
		System.out.println("Finding the index of 20");
		int index = -1; 
		int key = 20;
		
		for(int i=0; i<arr.length; i++){
			if(key == arr[i])	index = i;
		}
		System.out.println("Element 20 Index : "+index);
		
		
		ArrayList<Integer> al = new ArrayList<Integer>();
		System.out.println("ARRAY LIST");
		for(int i=1; i<10; i++){
			al.add(i*2);
		}
		for(int i=1; i<10; i++){
			al.add(i*3);
		}
		al.add(4,9);
		al.remove(5);
		
		int key2 = 12, index2 = -1;
		for(int i=0; i<al.size(); i++){
			if(key2 == al.get(i)){	
				index2 = i;
				break;
			}
		}
		System.out.println("Element 12 Index :"+index2);
		
		Collections.sort(al);
		for(int i=0; i<al.size() ; i++){
		    System.out.println(al.get(i));	
		}
	}
}


