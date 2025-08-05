import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.regex.*;

public class Hello{
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        int n1 = scan.nextInt();
        String[] str1 = new String[n1];
        for(int i=0;i<n1;i++){
            str1[i] = scan.next();
        }
        int n2 = scan.nextInt();
        String[] str2 = new String[n2];
        for(int i=0;i<n2;i++){
            str2[i] = scan.next();
        }
        int count = 0;
        for(int i=0;i<n2;i++){
            for(int j=0;j<n1;j++){
                if(str2[i].equals(str1[j])){
                    count++;
                }
            }
            System.out.println(count);
            count=0;
        }
    }
}
