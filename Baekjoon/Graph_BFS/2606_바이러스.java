import java.util.Scanner;
import java.util.Queue;
import java.util.LinkedList;

//백준 2606번 코드
//풀이:: https://smary-it.tistory.com/40

public class Main {
	public static void main(String args[]) {
		Scanner s=new Scanner(System.in);
		int n1=s.nextInt();//컴퓨터 개수
		int a[]=new int[n1+1];//컴퓨터 배열(0:감염x/1:감염o)
		int n2=s.nextInt();//묶여진 쌍 개수
		int x[]=new int[n2];
		int y[]=new int[n2];
		for(int i=0;i<n2;i++) {//연결된 쌍 정보 입력받기
			x[i]=s.nextInt();
			y[i]=s.nextInt();
		}
		
		for(int i=1;i<n1+1;i++) {//1번 컴퓨터에 바이러스 넣기
			a[i]=0;
		}
		a[1]=1;
		
		//탐색과정
		int count=0;
		Queue<Integer> q=new LinkedList<Integer>();
		q.add(1);
		while(!q.isEmpty()) {
			for(int i=0;i<n2;i++) {
				if(x[i]==q.peek()&&a[y[i]]==0) {
					a[y[i]]=1;
					q.add(y[i]);
					count++;
				}
				else if(y[i]==q.peek()&&a[x[i]]==0) {
					a[x[i]]=1;
					q.add(x[i]);
					count++;
				}
			}
			q.poll();
		}
		System.out.println(count);
	}
}
