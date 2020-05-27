import java.util.Arrays;
class Solution {
    public int[] solution(int[] array, int[][] commands) {
        int n = commands.length;
        //System.out.println(n);
        int[] answer = new int[n];
        for(int i = 0;i < n; i++){
            int len = commands[i][1] - commands[i][0]+1;
            int[] arr = new int[len];
            int idx = 0;
            for(int j = commands[i][0]-1; j < commands[i][1]; j++){
                arr[idx] = array[j];
                idx++;
            }
            Arrays.sort(arr);
            answer[i] = arr[commands[i][2]-1];
        }
        return answer;
    }
}
