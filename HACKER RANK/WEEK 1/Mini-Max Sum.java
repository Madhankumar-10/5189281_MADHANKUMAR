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
        long[] arr = new long[5];
        for(int i=0;i<5;i++){
            arr[i]=scan.nextInt();
        }
        Arrays.sort(arr);
        long min=0,max=0;
        for(int i=0;i<4;i++){
            min+=arr[i];
        }
        max+=min;
        max+=arr[4];
        max-=arr[0];
        System.out.print(min+" "+max); 
    }
}