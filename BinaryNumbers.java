import java.io.*;
import java.util.*;

public class BinaryNumbers {

	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		
		for (int j=0; j<n; j++){
			int a = sc.nextInt();
			String bin = "";
			
			while (a != 1){
				int b = a%2;
				
				bin = bin + b;
				if (b == 0){
					a = a/2;
				} else {
					a = (a-1)/2;
				}
			}
			bin = bin+1;
			char[] temp = bin.toCharArray();
			char[] temp2 = new char[temp.length];
			for (int i = 0; i<temp.length; i++){
				temp2[i] = temp[temp.length-i-1];
			}
			for (int i = 0; i<temp2.length;i++){
				System.out.print(temp2[i]);
			}
			System.out.println("");
		}
    }
}
