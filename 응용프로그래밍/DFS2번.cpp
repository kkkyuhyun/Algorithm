DFS 2번 예상문제 
1. void input(){
scanf("%d %D",&u,&h);
for(int i=1;i<=h;i++){
for(int j=1;j<=2;j++){
scanf("%c",&d[i][j]);}
}
2.void dfs(int x,int y){
d[x][y]='*';
for(int i=0;i<8;i++){
int nx=x+dx[i];
int ny=y+dy[i];
if(nx>=1 && nx<=h && ny >=1 && ny<=w && d[nx][ny]=='L')
dfs(nx,ny);}
}
3.void search()
{
for(int i=1;i<=h;i++){
for(int j=1;j<=w;j++){
if(d[i][j]=='c'){
cnt++;
dfs(i,j);}
}
}
}
4.void output()
{
printf("%d\n",cnt);
}
5. int main(){
input() search() output() return 0;}