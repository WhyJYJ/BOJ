#include <cstdio>

int w,h;
int map[50][50];
int visited[50][50];

int dx[8] = {-1,-1,0,1,1,1,0,-1};
int dy[8] = {0,1,1,1,0,-1,-1,-1};

void DFS(int y, int x) {
	if(map[y][x] == 0 || visited[y][x] == 1) return;
	int nx, ny;
	visited[y][x] = 1;
	for(int i=0;i<8;i++) {
		nx = x + dx[i];
		ny = y + dy[i];
		// return(x) continue(o)
		// if return => DFS stops
		if(nx>=w || nx<0 || ny>=h || ny<0) continue;
		if(visited[ny][nx] == 0 && map[ny][nx] == 1) DFS(ny, nx);
	}
}


int main() {
	int cnt; 
	while(true) {
		scanf("%d%d", &w,&h);
		// break condition
		if(w==0 && h==0) break;
		// reset
		for(int i=0;i<50;i++) {
			for(int j=0;j<50;j++) {
				visited[i][j] = 0;
			}
		}
		cnt = 0;
		
		// input
		for(int i=0;i<h;i++) {
			for(int j=0;j<w;j++) {
				scanf("%d", &map[i][j]);
			}
		}
		
		// DFS
		for(int i=0;i<h;i++) {
			for(int j=0;j<w;j++) {
				if(visited[i][j] == 0 && map[i][j] == 1) {
					DFS(i, j);
					cnt++;
				}
			}
		}
		
		printf("%d\n",cnt);		
} // while
	
	return 0;
}
