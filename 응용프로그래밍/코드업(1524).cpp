#include <stdio.h>
int main()
{
	int d[11][11]={0};
	int dx[8]={-1,-1,-1,0,0,1,1,1};
	int dy[8]={-1,0,1,-1,1,-1,0,1}; 
	for(int i=1;i<=9;i++)
	{
		for(int j=1;j<=9;j++)
			scanf("%d",&d[i][j]);
	}
	int r,c,cnt=0,cnt1=0;
	scanf("%d %d",&r,&c);
	if(d[r][c]==1) 
		printf("-1");
	else
	{
		/*
		if(d[r-1][c-1]==1) cnt++;
		if(d[r-1][c]==1) cnt++;
		if(d[r-1][c+1]==1) cnt++;
		if(d[r][c-1]==1) cnt++;
		if(d[r][c+1]==1) cnt++;
		if(d[r+1][c-1]==1) cnt++;
		if(d[r+1][c]==1) cnt++;
		if(d[r+1][c+1]==1) cnt++;
		*/
		for(int i=0;i<8;i++)
		{
			if(d[r+dx[i]][c+dy[i]]==1) cnt1++;
		}
		//printf("%d",cnt);
		printf("%d",cnt1);
	}
	
	return 0;
}
