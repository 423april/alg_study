import java.lang.Math;
class Solution {
    public long solution(int a, int b) {
        long answer = 0;
        long n = Math.abs(a-b)+1;
        if(n%2 == 0)
            answer = ((long)a+(long)b)*n/2;
        else{
            long middle = ((long)a + (long)b)/2;
            answer = ((long)a+(long)b)*(n-1)/2 + middle;
        }
        
        return answer;
    }
}
