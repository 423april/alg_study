import java.util.Scanner;

public class Main{
  private static void printMemo(long[][] memo,int n, int k){
    for(int i = 1; i <= n; i++){
      for(int j = 1; j <= i; j++){
        System.out.println("n: "+ i+" k: "+j+" ans: "+memo[i][j]);
      }
    }
    System.out.println();
  }
  public static void main(String[] args){
    Scanner sc = new Scanner(System.in);
    int n = sc.nextInt();
    int k = sc.nextInt();
    long denominator = 1000000000;

    long[][] memo = new long[k+1][n+1];

    for(int i = 1; i <= k; i++){
      for(int j = 0; j <= n; j++){
        if(j == 0) memo[i][j] = 1;
        else if(i == 1) memo[i][j] = 1;
        else if(i == 2) memo[i][j] = j+1;
        else if(i >= 3){
          for(int l = 0; l <= j; l++){
            memo[i][j] += memo[i-1][l] % denominator;
          }
        }
        //System.out.println("k = "+i+" n= "+j+" ans = "+memo[i][j]);
      }
    }

    long result = memo[k][n] % denominator;
    System.out.println(result);

    sc.close();
  }
}
