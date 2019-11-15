#include<iostream>
#include<stack>
#include<queue>
using namespace std;

int arr[105][105];//좌표
bool check[105];

void dfs(int start, int N) {
	stack<int> s1;
	cout << start << " ";
	while (!s1.empty()) {
		int now = s1.top();
		for (int i = 1;i <= N;i++) {
			if (check[i] || !arr[now][i]) continue;
			check[i] = true;
			s1.push(i);
			cout << i << " ";
			break;
		}
	}
}
void dfs_recursion(int v, int N) {
	cout << v << ' ';
	for (int i = 1;i <= N;i++) {
		if (check[i] || !arr[v][i]) continue;
		check[i] = true;
		dfs(i, N);
	}
}
void bfs(int start, int N) {
	queue<int> q;
	q.push(start);//start를 갖는 노드를 넣고 시작
	while (!q.empty()) {
		int now = q.front();
		q.pop;
		cout << now << ' ';
		for (int i = 1;i <= N;i++) {
			if (check[i] || !arr[now][i]) continue;
			check[i] = true;
			q.push(i);
		}
	}
}
int main() {
	int N, M, V, a, b;
	cin >> N >> M >> V;
	for (int i = 0;i < M;i++) {
		cin >> a >> b;
		arr[a][b] = 1;
		arr[b][a] = 1;
	}
	dfs(V, N);
	return 0;
}