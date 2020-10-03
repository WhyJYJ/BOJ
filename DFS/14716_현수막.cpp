#include <cstdio>
#include <vector>
using namespace std;

vector<vector<int> > map;
vector<vector<int> > visited;
int m, n;
// clockwise
int dx[8] = {0,1,1,1,0,-1,-1,-1};
int dy[8] = {1,1,0,-1,-1,-1,0,1};

void DFS(int y, int x) {
	if(visited[y][x] != 0) return;
	visited[y][x] = 1;
	int nx, ny;
	for(int i=0;i<8;i++) {
		nx = x + dx[i];
		ny = y + dy[i];
		if(nx<0 || nx>=n || ny<0 || ny>=m) continue;
		if(map[ny][nx]==1) DFS(ny, nx);
	}
}

int main() {
	int input, text = 0;
	scanf("%d%d", &m, &n);
	map.resize(m);
	visited.resize(m);
	// input
	for(int i=0;i<m;i++) {
		for(int j=0;j<n;j++) {
			scanf("%d", &input);
			map[i].push_back(input);
			// reset visited
			visited[i].push_back(0);
		}
	}
	
	// DFS
	for(int i=0;i<m;i++) {
		for(int j=0;j<n;j++) {
			if(visited[i][j]==0 && map[i][j]==1) {
				DFS(i,j);
				text++;
			}
		}
	}
	printf("%d", text);
	return 0;
}
