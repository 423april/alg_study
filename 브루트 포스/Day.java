class Solution {
    static final String[] day = {"FRI", "SAT", "SUN", "MON", "TUE", "WED", "THU"};
    static final int[] months = {0, 30, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    private int DaysApart(int a, int b){
        int days = 0;
        //same month
        if(a == 1) days = b-1;
        else{
            for(int i = 1; i < a; i++){
                days += months[i];
            }
            days += b;
        }
        return days;
    }
    public String solution(int a, int b) {
        String answer = "";
        int days = DaysApart(a,b);
        int mod = days % 7;
        answer = day[mod];
        return answer;
    }
}
