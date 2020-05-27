class Solution {
    public String solution(String s) {
        String answer = "";
        int len = s.length(); //String class의 길이 구할때는 .length()
        int n;
        //System.out.println(len);
        if(len % 2 != 0){
            n = len/2;
            //System.out.println(s.charAt(n));
            answer = s.substring(n,n+1);
        }
        else{
            n = len/2-1;
            //System.out.println(s.substring(n,n+2));
            answer = s.substring(n,n+2);
        }
        return answer;
    }
}
