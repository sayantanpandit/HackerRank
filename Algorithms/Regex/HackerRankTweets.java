/*
Program Name : HackerRank Tweets
Link         : https://www.hackerrank.com/challenges/hackerrank-tweets
Author Name  : Sayantan Pandit
Date         : 25-09-2015 
*/

import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class HackerRankTweets
{
  public static void main(String[] args) throws IOException
  {
    BufferedReader buff = new BufferedReader(new InputStreamReader(System.in));
    int n = Integer.parseInt(buff.readLine());
    String arr[] = new String[10000];
    int count = 0;   
       
    for(int i=0; i<n; i++)
    {
      String line = buff.readLine();
      
      Pattern p = Pattern.compile("\\bhackerrank\\b", Pattern.CASE_INSENSITIVE);
      Matcher m = p.matcher(line);
      
      if(m.find())
        count++;
    }
     System.out.println(count);
   }
}
