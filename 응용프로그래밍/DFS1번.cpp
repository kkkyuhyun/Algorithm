DFS 빈칸 예상문제 
1. void input()
for(int i=0;i<10;i++){
scanf("%c", &d[i][j]);
}
scanf("%d %d",&x,&y);
int safe(int x,int y){
return(x>=0 && x<10) &&(y>=0 && y<10) ;
}
2. void dfs(int x, int y){
d[x][y]='*';
for(int i=0;i<4;i++){
int nx=x+dx[i];
int ny=y+dy[i];
if(safe(nx,ny) && d[nx][ny]=='__')
dfs(nx,ny);
	}
}
3. void search(){
if(d[y][x]=='__')
dfs(y,x);
4.void output(){
for(int i=0;i<10;i++){
for(int j=0;j<10;j++){
printf("%c",d[i][j]);
}
printf("\n");
}
}
5.int main(){
input();
search();
output();
return0;}

