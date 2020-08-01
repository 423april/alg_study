import java.io.*;
import java.text.SimpleDateFormat;
import java.util.Date;
import java.text.ParseException;
class Test{

	public static void main(String[] args) throws Exception {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		Main me = new Main();
		String input = br.readLine();
		SimpleDateFormat format1 = new SimpleDateFormat("yyyy-MM-dd HH:mm:ss");
		SimpleDateFormat format2 = new SimpleDateFormat("yy년 MM월 dd일");
		//testcase num
		int N = Integer.parseInt(input);
		//System.out.println(N);
		//기준 날짜
		input = br.readLine();
		Date base = format1.parse(input);
		//System.out.println(format1.format(base));
		//테스트 케이스 입력
		for(int i = 0; i < N; i++){
			try{
				input = br.readLine();
				//testcase[i] = format1.parse(input);
				Date test = format1.parse(input);
				//System.out.println(format1.parse(input));
				long dist = base.getTime() - test.getTime();
				if(dist < 0) System.out.println(dist);
				long distMonths = dist / (24*60*60*1000) / 30;
				long distDays = dist / (24*60*60*1000);
				long distHours = dist / (60*60*1000);
				long distMinutes = dist / (60*1000);

				if(distDays >= 365){
					//System.out.println("years");
					System.out.println(format2.format(test));
				}
				else if(distDays > 30){
					//System.out.println("months");
					System.out.println(distMonths+"개월 전");
				}
				else if(distDays > 0){
					//System.out.println("days");
					System.out.println(distDays+"일 전");
				}
				else{
					if(distHours > 0){
						//System.out.println("hours");
						System.out.println(distHours+"시간 전");
					}
					else if(distMinutes > 0){
						//System.out.println("minutes");
						System.out.println(distMinutes+"분 전");
					}
					else{
						//System.out.println("seconds");
						System.out.println("방금 전");
					}
				}//end of else
			}//end of try
			catch(ParseException e){
				System.out.println("error");
				continue;
			}//end of catch
		}//end of for


	}
}
