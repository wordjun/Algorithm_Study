#include <vector>
#include<queue>

using namespace std;
bool visited[101][101];
int dist[101][101];
int dx[4] = { 1, -1, 0 ,0 };
int dy[4] = { 0, 0, 1, -1 };

// 전역 변수를 정의할 경우 함수 내에 초기화 코드를 꼭 작성해주세요.
vector<int> solution(int m, int n, vector<vector<int>> picture) {
    memset(visited, false, sizeof(visited));
    memset(dist, 0, sizeof(dist));

    int number_of_area = 0;
    int max_size_of_one_area = 0;

    queue<pair<int, int>>q;
    q.push({ 0, 0 });


    vector<int> answer(2);
    answer[0] = number_of_area;
    answer[1] = max_size_of_one_area;
    return answer;
}