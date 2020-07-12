import java.util.*;
class Solution{
	
	public static void main(String []argh)
	{
		Scanner sc = new Scanner(System.in);
        ArrayList<Character> symbols = new ArrayList<Character>();
        Stack<Character> pila = new Stack<Character>();

        boolean balanced = true;

		// while (sc.hasNext()) {
		// 	String input=sc.next();
        //     symbols.add(input.charAt(0));
        // }
        
        symbols.add('[');
        symbols.add(']');
     
        char s;
        for (int i=0; i < symbols.size(); i++) {
            s = symbols.get(i);
            if (s == '{' || s == '[' || s == '(') {
                pila.add(s);
            }
            else {

            

                if (pila.top() != hashmap.find(pila.pop())) {
                    balanced = false;
                    break;
                } 
               
                } 
            }
        }

        if (pila.size() != 0) balanced = false;


        if (balanced) System.out.println("true"); else System.out.println("false");
		
	}
}


