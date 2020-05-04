import java.util.Stack;

class Solution {
    public int solution(int[][] board, int[] moves) {
        int answer = 0;
        int N = board.length;
        Stack<Integer> basket = new Stack<Integer>();

        //move의 동작을 하나씩 실행한다.
        for(int i = 0; i < moves.length; i++){
            int k = moves[i]-1;
            int cur = 0;
            for(int j = 0;j < N; j++){
                if(board[j][k] == 0) continue;
                else{
                    cur = board[j][k];
                    //System.out.println("cur: "+cur+" move: "+k+" row: "+j);
                    board[j][k] = 0;
                    break;
                }
            }//옮겨담기 끝
            if(cur == 0) continue;
            //바구니에서 인형을 터트린다.
            if(basket.isEmpty()){
              //System.out.println("basket is empty");
              basket.push(cur);
            }
            else{
              int top = basket.peek();
              if(top == cur){
                basket.pop();
                answer += 2;
              }else{
                  basket.push(cur);
              }
            }
            // for(int a = 0; a < basket.size(); a++){
            //   System.out.print(basket.get(a)+" ");
            // }
            // System.out.println();
        }


        return answer;
    }
}
