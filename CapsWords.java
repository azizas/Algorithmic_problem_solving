public class CapsWords { 

public static void main (String [] args) {
	String lower_case_senetence = "How can mirrors be real if our eyes aren't real" ; 
	String new_capitalized_sentence = "" ; 
	String [] sen = lower_case_senetence.split(" ");
	for (int i = 0;i<sen.length ; i++ ) {
		new_capitalized_sentence += sen[i].substring(0,1).toUpperCase() + sen[i].substring(1).toLowerCase();
		new_capitalized_sentence+=" ";
	}
	System.out.println(new_capitalized_sentence);
}
}