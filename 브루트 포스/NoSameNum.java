import java.util.*;

public class Solution {
    public int[] solution(int []arr) {
        int[] answer = {};
        LinkedList<Integer> tmp = new LinkedList<Integer>();
        int n = -1;
        int dup = 0;
        for(int i = 0; i < arr.length; i++){
            if(arr[i] == n){
                dup++;
            }else{
                tmp.add(arr[i]);
                n = arr[i];
                dup = 0;
            }
        }
        answer = new int[tmp.size()];
        answer = tmp.stream().mapToInt(i -> i).toArray();
        
        return answer;
    }
}
