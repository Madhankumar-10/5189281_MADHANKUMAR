import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.regex.*;

public class Solution{
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        int t = scan.nextInt();
        int x=t;
        while(t>0){
            int n = scan.nextInt();
            int r=n,c=n;
            if(x==100){
                c=c+1-1;
            }
            else{
                c=c+1;
            }
            char[][] arr = new char[r][c];
            String s;
            for(int i=0;i<n;i++){
                s=scan.next();
                for(int j=0;j<s.length();j++){
                    arr[i][j]=s.charAt(j);
                }
            }
            for(int k=0;k<n;k++){
                Arrays.sort(arr[k]);
            }
            int flag=0;
            for(int i=0;i<n;i++){
                for(int j=0;j<n-1;j++){
                    if(arr[j][i]>arr[j+1][i]){
                        flag=1;
                    }
                }
            }
            if(flag==0){
                System.out.println("YES");
            }
            else{
                System.out.println("NO");
            }
            t--;
        }
    }
}