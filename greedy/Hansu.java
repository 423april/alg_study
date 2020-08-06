import java.util.Scanner;

public class Main{
  public static void main(String[] args){
    Scanner sc = new Scanner(System.in);
    int n = sc.nextInt();
    //두자리수까지는 전부 한수
    if(n/100 == 0) System.out.println(n);
    else{
      int count = 99;
      for(int i = 100; i <= n; i++){
        int x = i;
        int[] nums = new int[3];
        for(int j = 0; j < 3; j++){
          nums[j] = x/(int)(Math.pow(10,2-j));
          x = x % (int)(Math.pow(10,2-j));
        }
        if(nums[1]-nums[0] == nums[2]-nums[1])
          count++;
        else
          continue;
      }
      System.out.println(count);
    }
  }
}
