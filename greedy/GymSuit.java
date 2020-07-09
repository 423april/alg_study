class Solution {
    private void printhas(int[] has){
        for(int i = 0;i < has.length; i++){
            System.out.println(has[i]);
        }
        System.out.println();
    }
    public int solution(int n, int[] lost, int[] reserve) {
        int answer = 0;
        int[] has = new int[n];
        for(int i = 0; i < n; i++){
            has[i] = 1;
        }
        for(int i = 0;i < lost.length; i++){
            has[lost[i]-1]--;
        }
        for(int i = 0;i < reserve.length;i++){
            has[reserve[i]-1]++;
        }
       // printhas(has);
        for(int i = 0;i < lost.length; i++){
            if(has[lost[i]-1]==0){
                if(lost[i]-2>=0 && has[lost[i]-1-1]==2){
                    has[lost[i]-1-1]--;
                    has[lost[i]-1]++;
                }else if(lost[i]<n && has[lost[i]]==2){
                    has[lost[i]]--;
                    has[lost[i]-1]++;
                }
            }
        }
       // printhas(has);
        for(int i = 0;i < n; i++){
            if(has[i] >= 1) answer++;
        }
        return answer;
    }
}
