#include <iostream>
#include <vector>
#include <queue>

#define INF (~0U >> 2)
using namespace std;

int N, M, X;
int dist[1000][1000];

vector<pair<int, int>> graph[1000];

int d[1000];
bool v[1000];

int getLeastDist()
{
	int min = INF;
	int index = 0;

	for (int i = 0; i < N; i++) {
		if (d[i] < min && !v[i]) {
			min = d[i];
			index = i;
		}
	}

	return index;
}

//int Dijkstra(int s, int t)
//{
//	for (int i = 0; i < N; i++) {
//		v[i] = false;
//		d[i] = dist[s][i];
//	}
//
//	v[s] = true;
//
//	for (int i = 0; i < N; i++) {
//		int next = getLeastDist();
//
//		v[next] = true;
//
//		for (int j = 0; j < N; j++) {
//			if (!v[j]) {
//				if (d[next] + dist[next][j] < d[j]) {
//					d[j] = d[next] + dist[next][j];
//				}
//			}
//		}
//
//		if (next == t)
//			return d[t];
//	}
//
//	//return d[t];
//}

int Dijkstra(int s, int t)
{
	for (int i = 0; i < N; i++) {
		d[i] = dist[s][i];
	}


	priority_queue<pair<int, int>> pq;
	pq.push({ 0, s });

	while (!pq.empty()) {
		int curDist = pq.top().first;
		int curNode = pq.top().second;
		pq.pop();

		for (int i = 0; i < graph[curNode].size(); i++) {
			int nextNode = 
		}
	}
}

int main()
{	
	cin >> N >> M >> X;

	//for (int i = 0; i < N; i++) {
	//	for (int j = 0; j < N; j++) {
	//		if (i == j)
	//			dist[i][j] == 0;
	//		else
	//			dist[i][j] = INF;
	//	}
	//}

	//for (int i = 0; i < M; i++) {
	//	int s, t;

	//	cin >> s >> t;

	//	cin >> dist[s-1][t-1];
	//}

	for (int i = 0; i < M; i++) {
		int s, t, d;

		cin >> s >> t >> d;

		graph[s - 1].push_back({ t - 1, d });
	}

	// 집 --> 모임 --> 집
	// 각 학생마다 다익스트라 2번씩 돌려야됨
	// 출발점 도착점을 변수로 잡아서 다익스트라 2번씩 돌릴것

	int max = -1;
	for (int i = 0; i < N; i++) {
		if (i == X - 1) continue;

		int sum = Dijkstra(i, X - 1) + Dijkstra(X - 1, i);
		if (max < sum)
			max = sum;

	}
	
	cout << max;
	
	




	return 0;
}