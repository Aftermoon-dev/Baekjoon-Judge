import java.util.Scanner;
import java.util.Stack;

public class Stack_10828 {
	public static void main(String[] Args) {
		Scanner scan = new Scanner(System.in);
		Stack<Integer> stack = new Stack<Integer>();
		
		int CmdNum = scan.nextInt();
		
		for(int i=0; i<=CmdNum; i++) {
			String UserCmd = scan.nextLine();
			String Cmd[] = UserCmd.split(" ");
			
			if(Cmd[0].equals("push")) {
				stack.push(Integer.parseInt(Cmd[1]));
			}
			else if(Cmd[0].equals("pop")) {
				if(stack.isEmpty()) {
					System.out.println("-1");
				}
				else {
					System.out.println(stack.pop());
				}
			}
			else if(Cmd[0].equals("size")) {
				System.out.println(stack.size());
			}
			else if(Cmd[0].equals("empty")) {
				if(stack.isEmpty()) {
					System.out.println("1");
				}
				else {
					System.out.println("0");
				}
			}
			else if(Cmd[0].equals("top")) {
				if(stack.isEmpty()) {
					System.out.println("-1");
				}
				else {
					System.out.println(stack.peek());
				}
			}
		}
	}
}