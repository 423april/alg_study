//백준 2178번. 미로탐색

import java.awt.Point;
import java.io.*;
import java.util.*;

public class Maze{
  static int n, m;
  static boolean[][] visit;
  static int[][] maze;
  //왼쪽, 오른쪽, 위, 아래
  static final int[] dx = {-1, 1, 0, 0};
  static final int[] dy = {0, 0, -1, 1};
  static LinkedList<Point> q = new LinkedList<Point>();
  public static void main(String[] args) throws IOException{
    Maze me = new Maze();
    BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    StringTokenizer st;
    String s;

    s = br.readLine();
    st = new StringTokenizer(s);
    n = Integer.parseInt(st.nextToken());
    m = Integer.parseInt(st.nextToken());

    //int 배열에 미로를 입력받는다.
    maze = new int[n][m];
    visit = new boolean[n][m]; //initialized by false

    for(int i = 0; i < n; i++){
      s = br.readLine();
      String[] words = s.split("");
      for(int j = 0; j < m; j++){
        maze[i][j] = Integer.parseInt(words[j]);
      }
    }

    me.bfs(new Point(0,0));
    //me.printMaze();
    System.out.println(maze[n-1][m-1]);
  }

  void printMaze(){
    for(int i = 0; i < n; i++){
      for(int j = 0; j < m; j++){
        System.out.print(maze[i][j] + " ");
      }
      System.out.println();
    }
  }

  void bfs(Point now){
    q.add(now);
    visit[now.x][now.y] = true;

    while(!q.isEmpty()){
      now = q.poll();
      visit[now.x][now.y] = true;

      for(int i = 0; i < 4; i++){
        Point next = new Point(now.x+dx[i], now.y+dy[i]);
        if(next.x >= 0 && next.x < n && next.y >= 0 && next.y < m){ //in boundary
          if(maze[next.x][next.y] == 1 && !visit[next.x][next.y]){ //지날 수 있는 칸이고 방문한 적 없는 칸일때
            maze[next.x][next.y] = maze[now.x][now.y]+1;
            q.add(next);
          }
        }
      }
    }


  }

}
