import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class DiagonalDiff
{
  public static void main(String[] args)throws IOException
  {
     BufferedReader buff = new BufferedReader(new InputStreamReader(System.in));
     int n = Integer.parseInt(buff.readLine());
     int arr[][] = new int[n][n];
     int lsum = 0, rsum = 0;
     
     for(int i=0; i<n; i++)
     {
       String[] line = (buff.readLine()).split(" ");
       for(int j=0; j<n; j++)
       {
          arr[i][j] = Integer.parseInt(line[j]);
          if(i == j)
             lsum = lsum + arr[i][j];             
          if(j == (n-1-i))
             rsum = rsum + arr[i][j];          
       }
     }
     
     if(lsum >= rsum)
       System.out.println(lsum-rsum);
     else if(lsum < rsum)
       System.out.println(rsum-lsum);
           
  }
}
