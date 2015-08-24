/*
Program Name : A Very Big Sum
Link         : https://www.hackerrank.com/challenges/a-very-big-sum
Author Name  : Sayantan Pandit
Date         : 12-08-2015 
*/

import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class VeryBigSum
{
    public static void main(String args[])throws IOException
    {
       BufferedReader buff = new BufferedReader(new InputStreamReader(System.in));
       int n = Integer.parseInt(buff.readLine());
       long arr[] = new long[n];
       long sum = 0;
       
       String[] line = (buff.readLine()).split(" ");
       
       for(int i=0; i<n; i++)
       {
           arr[i] = Long.parseLong(line[i]);
           sum = sum + arr[i];           
       }
       
       System.out.println(sum);
    }
}
