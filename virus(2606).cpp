#include<iostream>
#include<stack>
using namespace std;

int arr[105][105];//��ǥ
bool check[105];//�湮�ߴ��� ���ߴ��� Ȯ���ϴ� bool�� �迭

int main() {
	int computers = 0, a=0, b=0, pairs = 0;
	cin >> computers;//�� ��ǻ���� ��
	cin >> pairs;//���� ��

	//initialization of 100 computers(max)
	//��������
	/*for (int i = 0;i < 100;i++) {
		check[i] = false;
		for (int j = 0;i < 100;j++) {
			arr[i][j] = 0;
		}
	}*/
	//�Է¹��� ��ǥ���� �̾���(���� ����ŭ)
	for (int i = 0;i < pairs;i++) {//arr�� ���� 1�̸� a�� b�� ��ġ�� ��ǻ�� �δ밡 �� ��(�����)���� ��Ÿ����
		cin >> a >> b;
		arr[a][b] = 1;
		arr[b][a] = 1;
	}
	//���� ����, keep track of whether we've visited the node or not
	stack<int> s1;
	s1.push(1);//������ 1
	check[1] = true;
	int result = 0;
	while (!s1.empty()) {
		int now = s1.top();//���� ��带 ǥ��
		//�� ��ǻ���� ������ŭ �ݺ��ϸ� 
		for (int i = 1;i <= computers;i++) {
			if (arr[now][i] == 1 && !check[i]) {
				//���� ���� ������ ������ �ִ� ���(��ǻ��)�� �񱳴���� ��ǻ�Ͱ� ����Ǿ��ְ�, ���� �湮���� ���� ���̶��
				s1.push(i);//�ش� ��ǻ�͸� ���ÿ� �ְ�
				check[i] = true;
				result++;//���̷����� ������ ��ǻ�� ���� ī��Ʈ
				break;
			}
		}
		if (now == s1.top())//���� �� ������ �������ߴٸ� ������ pop�ؼ� �����Դ� ���(��ǻ��)�� ��ĭ �ڷ� ����(���ư���)
			s1.pop();
	}
	cout << result << endl;
}