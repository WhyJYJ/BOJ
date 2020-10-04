#include <cstdio>
#include <vector>
using namespace std;

class Graph{
public:
    int N; // ������ ����
    vector<vector<int> > adj; // ���� ����Ʈ
    vector<bool> visited; // �湮 ���θ� �����ϴ� �迭
 
    // ������
    Graph(): N(0){}
    Graph(int n): N(n){
        adj.resize(N);
        visited.resize(N);
    }
 
    // ���� �߰� �Լ�
    void addEdge(int u, int v){
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
 
 
    // ���� �켱 Ž��
    // ��� ������ ���� �켱 Ž���ϰ� ������Ʈ ���� ��ȯ
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
