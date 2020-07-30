import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException;
import java.util.StringTokenizer;

public class Main{
  private static final int INTMAX = 2147483647;
  private static void printSum(int[] map, int n){
    //System.out.println();
      for(int j = 0; j < 3; j++){
        System.out.print(map[j]+" ");
      }
    System.out.println();
  }
  public static void main(String[] args) throws IOException{
    BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    StringTokenizer st;
    String s;
    int n = Integer.parseInt(br.readLine());

    int[][] map = new int[n][3];
    int[] min = new int[3];
    int[] max = new int[3];

    //입력 받기
    for(int i = 0; i < n; i++){
      s = br.readLine();
      st = new StringTokenizer(s);
      map[i][0] = Integer.parseInt(st.nextToken());
      map[i][1] = Integer.parseInt(st.nextToken());
      map[i][2] = Integer.parseInt(st.nextToken());
    }

    //System.out.println();
    for(int j = 0; j < 3; j++){
      min[j] = map[n-1][j];
      max[j] = map[n-1][j];
    }

    //아래서부터 올라오면서 최대, 최소 점수 메모
    for(int i = n-1; i > 0; i--){
      int[] minCol = {-1, -1, -1};
      int[] maxCol = {INTMAX, INTMAX, INTMAX};

      //for minResult
      minCol[0] = Math.min(min[0], min[1]);
      minCol[2] = Math.min(min[1], min[2]);
      minCol[1] = Math.min(minCol[0], minCol[2]);
      for(int j = 0; j < 3; j++){
        min[j] = minCol[j] + map[i-1][j];
      }
      //printSum(min, n);

      //for maxResult
      maxCol[0] = Math.max(max[0], max[1]);
      maxCol[2] = Math.max(max[1], max[2]);
      maxCol[1] = Math.max(maxCol[0], maxCol[2]);
      for(int j = 0; j < 3; j++){
        max[j] = maxCol[j] + map[i-1][j];
      }
      //printSum(max, n);

    }

    int minResult =INTMAX;
    int maxResult = -1;
    for(int i = 0; i < 3; i++){
      minResult = (min[i] < minResult)? min[i] : minResult;
      maxResult = (max[i] > maxResult)? max[i] : maxResult;
    }

    System.out.println(maxResult+" "+minResult);

  }//end main function
}//end class Main
