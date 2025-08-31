import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.regex.*;

public class Solution {
    
    public static boolean same(int[] arr) {
        int one;
        if(arr[0]==0){
            one = arr[1];
        }
        else{
            one = arr[0];
        }
        for (int i = 1; i < arr.length; i++) {
            if (arr[i] != one) {
                return false;
            }
        }
        return true;
    }
    
    public static void main(String[] args) {
       Scanner scan = new Scanner(System.in);
       String s = scan.next();
       int[] arr = new int[26];
       for(int i=0;i<s.length();i++){
        int ascii = (int) s.charAt(i) - 97;
        arr[ascii]++;
       }
       Arrays.sort(arr);
       int zero = 0;
       for(int i=0;i<26;i++){
        if(arr[i]==0){
         zero++;   
        }
       }
       int [] newarr = new int[26-zero];
       for(int i=0;i<26-zero;i++){
        newarr[i]=arr[zero+i];
       }
       if(same(newarr)){
        System.out.print("YES");
       }
       else{
        for(int i=0;i<26-zero;i++){
            newarr[i]=newarr[i]-1;
            if(same(newarr)){
                System.out.print("YES");
                break;
            }
            else{
                newarr[i]=newarr[i]+1;
            }
        }
        if(!same(newarr)){
            System.out.print("NO");
        }
       }
    }
}