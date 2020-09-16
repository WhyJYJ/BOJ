#include <cstdio>
#include <vector>
using namespace std;

int dx[4] = {1,0,-1,0};
int dy[4] = {0,-1,0,1};
int n;
char map[101][101];
vector<vector<int> > visited_normal;
vector<vector<int> > visited_weak;

void DFS_Normal(int y, int x) {
	if(visited_normal[y][x] == 1) return;
	int nx, ny;
	visited_normal[y][x] = 1;
	for(int i=0;i<4;i++) {
		nx = x + dx[i];
		ny = y + dy[i];
		// return(x) continue(o)
		// if return => DFS stops
		if(nx>=n || nx<0 || ny>=n || ny<0) continue;
		// DFS for normal people
		if(visited_normal[ny][nx] == 0 && (map[ny][nx] == map[y][x])) DFS_Normal(ny, nx);
	}
}

void DFS_Weak(int y, int x) {
	if(visited_weak[y][x] == 1) return;
	int nx, ny;
	visited_weak[y][x] = 1;
	for(int i=0;i<4;i++) {
		nx = x + dx[i];
		ny = y + dy[i];
		// return(x) continue(o)
		// if return => DFS stops
		if(nx>=n || nx<0 || ny>=n || ny<0) continue;
		// DFS for weak people
		if(visited_weak[ny][nx] == 0 && ((map[ny][nx] == map[y][x] || 
		map[ny][nx] == 'G' && map[y][x] == 'R') ||
		(map[ny][nx] == 'R' && map[y][x] == 'G')) ) DFS_Weak(ny, nx);
	}
}

int main() {
	int normal = 0, weak = 0;
	scanf("%d", &n);
	visited_normal.resize(n);
	visited_weak.resize(n);
	
	// input for vec, reset for visited
	for(int i=0;i<n;i++) {
		scanf("%s", map[i]);
		for(int j=0;j<n;j++) {
			visited_normal[i].push_back(0);
			visited_weak[i].push_back(0);
		}
	} 
	
	// DFS
	for(int i=0;i<n;i++) {
		for(int j=0;j<n;j++) {
			if(visited_normal[i][j] == 0) {
				DFS_Normal(i,j);
				normal++;
			}
			if(visited_weak[i][j] == 0) {
				DFS_Weak(i,j);
				weak++;
			}
		}
	} 
	
	printf("%d %d", normal, weak);
	return 0;
}
