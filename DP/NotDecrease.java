import java.io.IOException;
import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.util.StringTokenizer;

public class Main{
  public static void main(String[] args) throws IOException{
    BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
    StringTokenizer st;

    String s = br.readLine();
    st = new StringTokenizer(s);
    int t = Integer.parseInt(st.nextToken());
    int[] testcases = new int[t];
    int max = 0;
    for(int i = 0; i < t; i++){
      s = br.readLine();
      st = new StringTokenizer(s);
      testcases[i] = Integer.parseInt(st.nextToken());
      max = (max < testcases[i])? testcases[i] : max;
    }

    long [][] memo = new long[max+1][10];

    for(int i = 1; i <= max; i++){
      for(int j = 0; j <= 9; j++){
        if(i == 1) memo[i][j] = 1;
        else{
          for(int k = 9; k >= j; k--){
            memo[i][j] += memo[i-1][k];
          }
        }
      }
    }

    for(int i = 0; i < t; i++){
      long ans = 0;
      for(int j = 0; j <= 9; j++){
        ans += memo[testcases[i]][j];
      }
      bw.write(Long.toString(ans)+"\n");
    }
    bw.flush();
    bw.close();

  }
}
