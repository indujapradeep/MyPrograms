import java.util.HashMap;
import java.util.Set;
import java.util.Map;
import java.util.Collection;

class HashMapMethods{
	public static void main(String arg[]){
		
		HashMap<String,Integer> hm = new HashMap<>();
		
		hm.put("Induja",96);						
		hm.put("Shylaja",97);
		hm.put("Saji",98);
		hm.put("Pradeep",99);
		
		System.out.println(hm.get("Shylaja"));
		
		hm.put("Shylaja",100);
		
		System.out.println(hm.get("Shylaja"));
		System.out.println(hm.get("Harsha"));
		
		System.out.println(hm.containsKey("Harsha"));
		System.out.println(hm.containsKey("Shylaja"));
		System.out.println(hm.containsValue(96));
		
		System.out.println(hm.get("Pradeep"));
		hm.remove("Pradeep");
		System.out.println(hm.get("Pradeep"));
		
		Set<String> keys = hm.keySet();
		System.out.println(keys);
		
		Collection<Integer> v = hm.values();
		System.out.println(v);
		
		Set<Map.Entry<String,Integer>> entries = hm.entrySet();
		System.out.println(entries);
		
		System.out.println(hm.getOrDefault("Pradeep",20));
		System.out.println(hm.getOrDefault("Saji",20));
		
	}
}