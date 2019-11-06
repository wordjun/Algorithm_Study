#include<iostream>
#include<stack>
using namespace std;

int arr[105][105];//좌표
bool check[105];//방문했는지 안했는지 확인하는 bool형 배열

int main() {
	int computers = 0, a=0, b=0, pairs = 0;
	cin >> computers;//총 컴퓨터의 수
	cin >> pairs;//쌍의 수

	//initialization of 100 computers(max)
	//생략가능
	/*for (int i = 0;i < 100;i++) {
		check[i] = false;
		for (int j = 0;i < 100;j++) {
			arr[i][j] = 0;
		}
	}*/
	//입력받은 좌표끼리 이어짐(쌍의 수만큼)
	for (int i = 0;i < pairs;i++) {//arr의 값이 1이면 a와 b에 위치한 컴퓨터 두대가 한 쌍(연결됨)임을 나타낸다
		cin >> a >> b;
		arr[a][b] = 1;
		arr[b][a] = 1;
	}
	//스택 생성, keep track of whether we've visited the node or not
	stack<int> s1;
	s1.push(1);//시작점 1
	check[1] = true;
	int result = 0;
	while (!s1.empty()) {
		int now = s1.top();//현재 노드를 표시
		//총 컴퓨터의 개수만큼 반복하며 
		for (int i = 1;i <= computers;i++) {
			if (arr[now][i] == 1 && !check[i]) {
				//만약 현재 스택의 맨위에 있는 노드(컴퓨터)와 비교대상인 컴퓨터가 연결되어있고, 아직 방문하지 않은 곳이라면
				s1.push(i);//해당 컴퓨터를 스택에 넣고
				check[i] = true;
				result++;//바이러스에 감염된 컴퓨터 개수 카운트
				break;
			}
		}
		if (now == s1.top())//만약 위 조건을 만족못했다면 스택을 pop해서 지나왔던 노드(컴퓨터)로 한칸 뒤로 후진(돌아간다)
			s1.pop();
	}
	cout << result << endl;
}