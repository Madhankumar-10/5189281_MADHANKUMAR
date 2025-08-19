import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.regex.*;

public class Solution {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        int k = scan.nextInt();
        int[] arr =new int[n];
        for(int i=0;i<n;i++){
            arr[i]=scan.nextInt();
        }
        Arrays.sort(arr);
        int min = 100000000;
        for(int i=0;i<=n-k;i++){
            int a=arr[i+k-1]-arr[i];
            if(a<min){
                min=a;
            }
        }
        System.out.print(min);
    }
}