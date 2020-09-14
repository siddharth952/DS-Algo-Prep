import java.io.*;
import java.util.*;

public class Floodfill {

    public static void main(String[] args) throws Exception {
        Scanner sc = new Scanner(System.in);
        int n,m;
        n = sc.nextInt();
        m = sc.nextInt();
    int[][] arr = new int[n][m];
    
    
    for(int i=0;i<arr.length;i++)
        for(int j =0 ;j<arr[0].length;j++){
            arr[i][j]= sc.nextInt();
        }
        
    boolean[][] visited = new boolean[n][m];
    floodFill(arr,0,0,"",visited);
    
    
    }

    public static void floodFill(int[][] maze, int row, int col, String psf, boolean[][] visited){
        if(row == maze.length-1 && col == maze[0].length-1){
        System.out.println(psf);
        return;
        }
    if(row<0||col<0||row==maze.length||col==maze[0].length||maze[row][col]==1||visited[row][col] == true)
        return;
    
    
    visited[row][col] = true;
    floodFill(maze,row-1,col,psf+"t",visited); // top
    floodFill(maze,row,col-1,psf+"l",visited); // left
    floodFill(maze,row+1,col,psf+"d",visited); // down
    floodFill(maze,row,col+1,psf+"r",visited); // right
    visited[row][col] = false;
    
    
    }
}


/*

    0 0 0 0 0
    0 1 0 1 0
    0 1 1 0 0
    0 0 0 0 0
    
    go:
        top
        left
        down
        right


*//*#include<iostream>
#include<vector>
#include<string>
using namespace std;


void floodFill(vector<vector<int> > maze,int row, int column,string& psf,vector<vector<bool> > visited){

    if(row<0||column<0||row>=maze.size()||column>=maze[0].size()||maze[row][column]==1||visited[row][column] == true){
        psf.pop_back();return;
    }
        
    else if(row == maze.size()-1 and column == maze[0].size()-1){
        cout<<endl<<psf;
        return;
    }
        
    visited[row][column] = true;
    floodFill(maze,row-1,column,psf.append("t"),visited); // top
    floodFill(maze,row,column-1,psf.append("l"),visited); // left
    floodFill(maze,row+1,column,psf.append("d"),visited); // down
    floodFill(maze,row,column+1,psf.append("r"),visited); // right
    visited[row][column] = false;
    psf.pop_back(); // Remove the char from the path so far 
    
}

int main(){
    int n,m;cin>>n>>m;
    vector<vector<int> > maze(n,vector<int>(m,0));
    vector<vector<bool> > visited(n,vector<bool>(m,0));
    
    for(int i=0;i<maze.size();i++)
        for(int j =0 ;j<maze[0].size();j++){
            cin>>maze[i][j];
        }
        string psf;

    floodFill(maze,0,0,psf,visited);
    
    return 0;
}
// psf: dddddrr
*/
/*8
8
0 1 0 0 0 0 0 0
0 1 0 1 1 1 1 0
0 1 0 1 0 0 0 0
0 1 0 1 0 1 1 1
0 0 0 0 0 0 0 0
0 1 0 1 1 1 1 0
0 1 0 1 1 1 1 0
0 1 0 0 0 0 0 0
    
    go:
        top
        left
        down
        right


*/

