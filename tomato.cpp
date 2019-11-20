#include<iostream>
#include<queue>
using namespace std;

queue<Day> q1;
int arr[1001][1001];
int dy[4] = { 0, 0, 1, -1 };
int dx[4] = { 1, -1, 0, 0 };

//M�� ������ ���� ĭ ��
//N�� ������ ���� ĭ ��
int M=0, N=0;
struct Day {
	int y; int x; int day;
};

int bfs() {
	int last = 0;
	while (!q1.empty()) {
		Day d1 = q1.front();
		q1.pop();
		last = d1.day;
		for (int i = 0;i < 4;i++) {
			int nx = d1.x + dx[i];
			int ny = d1.y + dy[i];
			if (nx >= M || nx < 0 || ny >= N || ny < 0)
				continue;//��ǥ���� out of range�� ��쿡 pass.
			if (arr[ny][nx]) 
				continue;//���� �丶��� pass.
			arr[ny][nx] = 1;
			q1.push(Day{ ny, nx, d1.day + 1 });
		}
	}
	return last;
}

int main() {
	cin >> M >> N;
	//M*N�� ���ҵ� �Է¹ޱ�
	for (int i = 0;i < N;i++) {
		for (int j = 0; j < M;j++) {
			cin >> arr[i][j];
			//���� �丶��� �̸� queue�� �ִ´�
			if (arr[i][j] == 1)
				q1.push(Day{ i, j });
		}
	}
	int m = bfs();
	for (int i = 0;i < N;i++) {
		for (int j = 0;j < M;j++) {
			//�丶�䰡 ���� ���� �ڸ����� Ȯ��
			if (!arr[i][j])
				m = -1;
		}
	}
	cout << m << endl;
	return 0;
}