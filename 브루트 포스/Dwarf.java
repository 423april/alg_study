//백준 2309번. 일곱난쟁이

import java.io.*;
import java.util.*;

public class Dwarf{
  static int[] height;
  static StringBuilder sb = new StringBuilder();
  public static void main(String[] args) throws IOException{
    Dwarf me = new Dwarf();
    BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

    height = new int[9];
    for(int i = 0; i < 9; i++){
      height[i] = Integer.parseInt(br.readLine());
    }
    //오름차순 배열. Arrays class의 stream method 이용해서 int배열을 정렬할 수 있다. 
    Arrays.sort(height);
    //Arrays class의 stream method 이용해서 int배열의 전체 합도 구할 수 있다. 
    int total = Arrays.stream(height).sum();
    int sum = 0;

    for(int i = 0; i < 8; i++){
      sum += height[i];
      for(int j = i+1; j < 9; j++){
        sum += height[j];
        if(total - sum == 100){
          me.printH(i,j);
          break;
        }
        else sum -= height[j];
      }
      sum = 0;
    }
  }

  void printH(int i, int j) throws IOException{
    BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
    for(int k = 0; k < 9; k++){
      if(k != i && k != j){
        sb.append(Integer.toString(height[k]));
        sb.append("\n");
      }
      else
        continue;
    }
    bw.write(sb.toString());
    bw.flush();
    bw.close();
  }
}
