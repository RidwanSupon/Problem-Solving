import java.time.LocalDateTime;
import java.time.format.DateTimeFormatter;

public class CurrentTime{
	public static void main(String[] args){
	LocalDateTime obj = LocalDateTime.now();
	DateTimeFormatter format = DateTimeFormatter.ofPattern("dd-MM-yyyy HH:mm:ss");
	String output = obj.format(format);
	System.out.println(output);
	}
}
