#include <cstdio>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;
 
class Graph{
public:
    int N; // ������ ����
    vector<vector<int>> adj; // ���� ����Ʈ
 
    // ������
    Graph(): N(0){}
    Graph(int n): N(n+1){ adj.resize(N+1); }
 
    // ���� �߰� �Լ�
    void addEdge(int u, int v){
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
 
    // ��� ����Ʈ�� ������ ���� ��ȣ ����
    void sortList(){
        for(int i=0; i<N; i++)
            sort(adj[i].begin(), adj[i].end());
    }
 
    // �ʺ� �켱 Ž��
    int bfs(int n1, int n2){
    	int result=0;
        vector<bool> visited(N+1, false); // �湮 ���θ� �����ϴ� �迭
        queue<int> Q;
        Q.push(n1);
        visited[n1] = true;
        // Ž�� ����
        while(!Q.empty()){
        	// ���� �̼��� ���� ���ϱ� ���� 
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
			// ���� �̼� ������ �̼� + 1  
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
