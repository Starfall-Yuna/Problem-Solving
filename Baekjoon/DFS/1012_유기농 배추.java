import java.util.Scanner;

//백준 1012번 코드
//풀이:: https://smary-it.tistory.com/5

public class Main {
	static int a[][]=new int [100][100];
	public static void Loof(int k, int t) {
		if(a[k][t]==1) {
			a[k][t]++;
		}
		if(a[k][t+1]==1) {
			a[k][t+1]++;
			Loof(k,t+1);
		}
		if(a[k][t-1]==1) {
			a[k][t-1]++;
			Loof(k,t-1);
		}
		if(a[k+1][t]==1) {
			a[k+1][t]++;
			Loof(k+1,t);
		}
		if(a[k-1][t]==1) {
			a[k-1][t]++;
			Loof(k-1,t);
		}
	}
	public static void main(String args[]) {
		Scanner s=new Scanner(System.in);
		int test1=s.nextInt();//테스트 케이스 개수
		
		int count;//테스트 케이스 카운트 변수
		for(count=0;count<test1;count++) {
			//입력부분
			for(int i=0;i<52;i++) {//i:열
				for(int j=0;j<52;j++) {//j:행
					a[i][j]=0;
				}
			}//배열 초기화
			
			//입력부분
			int w=s.nextInt();//가로길이 -> 행
			int l=s.nextInt();//세로길이 -> 열
			int n=s.nextInt();//배추 개수 
			for(int i=0;i<n;i++) {//배추 개수만큼 좌표입력 받기
				int x=s.nextInt();//x좌표 -> 행
				int y=s.nextInt();//y좌표 -> 열
				a[y+1][x+1]=1;
			}//배추 표시
			
			//탐색부분
			//0: 배추없음, 1:배추있음, 2:배추있음(방문완료)
			int num=0;//지렁이 수 -> 출력 변수
			for(int i=1;i<l+1;i++) {
				for(int j=1;j<w+1;j++) {
					if(a[i][j]==1) {
						num++;
						Loof(i,j);
					}
				}//for문 끝
			}//2중 for문 끝
			System.out.println(num);
		}//테스트 케이스 for문 끝
		System.exit(0);
	}
}
