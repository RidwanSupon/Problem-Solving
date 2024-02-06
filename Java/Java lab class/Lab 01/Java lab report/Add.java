import javax.swing.JOptionPane;


class Add{
	public static void main(String[] args){
	
	    double num1;double num2;double sum=0;
	    
	    String input1 = JOptionPane.showInputDialog(null, "Num1 : ");
	    num1 = Double.parseDouble(input1);
	    String input2 = JOptionPane.showInputDialog(null,"Num2 : ");
	    num2 = Double.parseDouble(input2);
	    sum=num1+num2;
	    JOptionPane.showMessageDialog(null,"Summation of two number is : "+ sum);
	    
	}
}
