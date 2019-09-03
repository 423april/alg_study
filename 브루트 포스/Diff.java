

import java.io.*;
import java.util.*;
import java.lang.Math;

public class Diff{
  static LinkedList<Integer> sum;
  public static void main(String[] args) throws IOException{
    Diff me = new Diff();
    BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    String s;
    StringTokenizer st;

    int n = Integer.parseInt(br.readLine());
    int[] a = new int[n];

    s = br.readLine();
    st = new StringTokenizer(s);
    for(int i = 0; i < n; i++){
      a[i] = Integer.parseInt(st.nextToken());
    }

    sum = new LinkedList<Integer>();
    me.perm(n,a);
    Collections.sort(sum);
    System.out.println(sum.get(sum.size()-1));
  }

  int diffsum(int[] a){
    int diff = 0;
    for(int i = 0; i < a.length-1; i++){
      diff += Math.abs(a[i+1]-a[i]);
    }
    return diff;
  }

  void swap(int[] input, int a, int b){
    int tmp = input[a];
    input[a] = input[b];
    input[b] = tmp;
  }

  void perm(int n, int[] a){
    if(n==1){
      sum.add(diffsum(a));
    }else{
      for(int i = 0; i < n-1; i++){
        perm(n-1, a);
        if(n%2 == 0){
          swap(a, i, n-1);
        }else{
          swap(a,0,n-1);
        }
      }
      perm(n-1,a);
    }
  }


}
