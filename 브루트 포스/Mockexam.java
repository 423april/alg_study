import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
class Solution {
    public int[] solution(int[] answers) {
        int[] answer = {};
        int[] a = {1, 2, 3, 4, 5};
        int[] b = {2, 1, 2, 3, 2, 4, 2, 5};
        int[] c = {3, 3, 1, 1, 2, 2, 4, 4, 5, 5};
        int[] score = new int[3];
        //int[] maxIndex = new int[3];
        ArrayList<Integer> maxIndex = new ArrayList<Integer>();

        for(int i = 0; i < answers.length; i++){
            //a score
            if(answers[i] == a[i%5]) score[0]++;
            //b score
            if(answers[i] == b[i%8]) score[1]++;
            //c score
            if(answers[i] == c[i%10]) score[2]++;
        }
        //print scores
        //System.out.println("scores: "+score[0]+", "+score[1]+", "+score[2]);
        //find max score
        int max = 0;
        for(int i = 0; i < 3; i++){
            max = (score[i] > max)? score[i] : max;
        }

        //max index
        int num = 0;
        for(int i = 0; i < 3; i++){
            if(score[i] == max){
                // maxIndex[i] = i+1;
                // num++;
                maxIndex.add(i+1);
            }
        }
        //오름차순 정렬
        Collections.sort(maxIndex);

        answer = new int[maxIndex.size()];
        for(int i = 0; i < maxIndex.size(); i++){
          answer[i] = maxIndex.get(i);
        }
        // for(int i = 0; i < num; i++){
        //     System.out.println(answer[i]);
        // }
        return answer;
    }
}
