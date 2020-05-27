import java.util.ArrayList;
import java.util.Collections;
class Solution {
    public int[] solution(int[] arr, int divisor) {
        int[] answer = {};
        ArrayList<Integer> tmp = new ArrayList<Integer>();
        for(int i = 0; i < arr.length; i++){
            if(arr[i] % divisor == 0){
                tmp.add(arr[i]);
            }
        }
        Collections.sort(tmp);
        //System.out.println(tmp.size());
        int len = tmp.size();
        if(len == 0){
            answer = new int[1];
            answer[0] = -1;
        }else{
            answer = new int[len];
            for(int i = 0; i < len; i++){
                answer[i] = tmp.get(i);
            }
        }
        return answer;
    }
}
