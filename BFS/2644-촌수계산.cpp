#include <cstdio>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;
 
class Graph{
public:
    int N; // 정점의 개수
    vector<vector<int>> adj; // 인접 리스트
 
    // 생성자
    Graph(): N(0){}
    Graph(int n): N(n+1){ adj.resize(N+1); }
 
    // 간선 추가 함수
    void addEdge(int u, int v){
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
 
    // 모든 리스트의 인접한 정점 번호 정렬
    void sortList(){
        for(int i=0; i<N; i++)
            sort(adj[i].begin(), adj[i].end());
    }
 
    // 너비 우선 탐색
    int bfs(int n1, int n2){
    	int result=0;
        vector<bool> visited(N+1, false); // 방문 여부를 저장하는 배열
        queue<int> Q;
        Q.push(n1);
        visited[n1] = true;
        // 탐색 시작
        while(!Q.empty()){
        	// 동일 촌수의 수를 구하기 위해 
        	int q_size = Q.size();
        	while(q_size--) {
        		int curr = Q.front();
            	Q.pop();
            	for(int next: adj[curr]){
            		if(next == n2) return result + 1;
                	if(!visited[next]){
                    	visited[next] = true;
                    	Q.push(next);
                	} 
            	}
			}
			// 동일 촌수 끝나면 촌수 + 1  
			result+=1;
        }
        return -1;
    }
};


int main() {
	int np, p1, p2, n; // number of people, person1, person2, number
	int input1, input2;
	scanf("%d", &np);
	scanf("%d%d", &p1, &p2);
	scanf("%d", &n);
	Graph G(np);
	for(int i=0;i<n;i++) {
		scanf("%d%d", &input1, &input2);
		G.addEdge(input1, input2);
		G.addEdge(input2, input1);
	}
	
	G.sortList();
	int result = G.bfs(p1, p2);
	printf("%d", result);
	
	return 0;
	
}
