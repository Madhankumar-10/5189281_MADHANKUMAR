import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.regex.*;

class Result {
    public static String caesarCipher(String s, int k) {
        StringBuilder newstring=new StringBuilder();
        for(int i=0;i<s.length();i++){
            if(Character.isLetter(s.charAt(i))){
                if(Character.isUpperCase(s.charAt(i))){
                    newstring.append((char)(((s.charAt(i)-'A'+k)%26)+'A'));
                }
                else if(Character.isLowerCase(s.charAt(i))){
                    newstring.append((char)(((s.charAt(i)-'a'+k)%26)+'a'));
                }
                else{
                    newstring.append(s.charAt(i));
                }
            }
            else{
                newstring.append(s.charAt(i));
            }
        }
        return newstring.toString();
    }
}

public class Solution {
    public static void main(String[] args) throws IOException {
        BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bufferedWriter = new BufferedWriter(new FileWriter(System.getenv("OUTPUT_PATH")));

        int n = Integer.parseInt(bufferedReader.readLine().trim());

        String s = bufferedReader.readLine();

        int k = Integer.parseInt(bufferedReader.readLine().trim());

        String result = Result.caesarCipher(s, k);

        bufferedWriter.write(result);
        bufferedWriter.newLine();

        bufferedReader.close();
        bufferedWriter.close();
    }
}