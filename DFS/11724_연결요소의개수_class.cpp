#include <cstdio>
#include <vector>
using namespace std;

class Graph{
public:
    int N; // 정점의 개수
    vector<vector<int> > adj; // 인접 리스트
    vector<bool> visited; // 방문 여부를 저장하는 배열
 
    // 생성자
    Graph(): N(0){}
    Graph(int n): N(n){
        adj.resize(N);
        visited.resize(N);
    }
 
    // 간선 추가 함수
    void addEdge(int u, int v){
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
 
 
    // 깊이 우선 탐색
    // 모든 정점을 깊이 우선 탐색하고 컴포넌트 개수 반환
    int dfsAll(){
        int components = 0;
        fill(visited.begin(), visited.end(), false);
        for(int i=1; i<N; i++){
            if(!visited[i]){
                dfs(i);
                components++;
            }
        }
        return components;
    }
 
private:
    void dfs(int curr){
        visited[curr] = true;
        for(int next: adj[curr])
            if(!visited[next]) dfs(next);
    }
};


int main() {
	int N,M;
	int a,b;
	scanf("%d%d", &N, &M);
	Graph G(N+1);
	for(int i=0;i<M;i++) {
		scanf("%d%d", &a, &b);
		G.addEdge(a,b);
		G.addEdge(b,a);
	}
	
	int components = G.dfsAll();
	printf("%d", components);
	
	return 0;
}
