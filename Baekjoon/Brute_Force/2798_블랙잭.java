import java.util.Scanner;

//백준 2798번 코드
//풀이 :: https://smary-it.tistory.com/49

public class Main {
	public static void main(String args[]) {
		Scanner s=new Scanner(System.in);
		//입력부분
		int n=s.nextInt();//카드 개수
		int m=s.nextInt();//목표 수
		int a[]=new int[n];//카드에 적힌 숫자
		for(int i=0;i<n;i++) {
			a[i]=s.nextInt();
		}
		
		int sum=0;
		int max=0;
		for(int i=0;i<n-2;i++) {
			for(int j=i+1;j<n-1;j++) {
				for(int k=j+1;k<n;k++) {
					sum=a[i]+a[j]+a[k];
					int b1=m-max;	
					int b2=m-sum;	
					if(sum<=m&&b2<b1) {max=sum;}
				}
			}
		}
		System.out.println(max);
	}
}