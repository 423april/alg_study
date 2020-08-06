import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException;
public class Main{
  public static void main(String[] args) throws IOException{
    BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    String input = br.readLine();
    char[] board = input.toCharArray();

    int count = 0;
    int flag = 0;
    for(int i = 0; i < board.length; i++){
      if(board[i] == '.'){
        if(count%2 != 0){
          flag = -1;
          break;
        }
        count = 0;
      }
      else{
        count++;
        if(count == 4){
          for(int j = 0; j < 4; j++){
            board[i-j] = 'A';
          }
          count = 0;
        }
        else if(count == 2){
          for(int j = 0; j < 2; j++){
            board[i-j]= 'B';
          }
        }
        else if(i == board.length-1 && count%2 != 0){
          flag = -1;
        }
      }
    }
    if(flag == -1) System.out.println(flag);
    else{
      for(int i = 0; i < board.length; i++){
        System.out.print(board[i]);
      }
      System.out.println();
    }
  }
}
