import javax.swing.JOptionPane;

class InputBox{
	public static void main(String[] args){
	    String number; int x;
	    number = JOptionPane.showInputDialog(null,"enter a number: ");
	    x = Integer.parseInt(number);
	    JOptionPane.showMessageDialog(null,"The number is: "+x);
	}
}
