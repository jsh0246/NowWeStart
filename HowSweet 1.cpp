//#include <iostream>
//#include <vector>
//#include <queue>
//
//#define INF (~0U >> 2)
//using namespace std;
//
//int N;
//int cave[125][125];
//int res = 0;
//int num = 1;
//
//
//
//int dist[125][125];
//pair<int, int> pre[125][125];
//
//int dx[] = { 0, 0, -1, 1 };
//int dy[] = { 1, -1, 0, 0 };
//
//struct cp {
//	bool operator()(const pair<int, int> a, const pair<int, int> b)
//	{
//		//if (cave[a.first][a.second] > cave[b.first][b.second]) {
//		//	return true;
//		//}
//		//else {
//		//	return false;
//		//}
//		//return cave[a.first][a.second] > cave[b.first][b.second];
//
//		return dist[a.first][a.second] > dist[b.first][b.second];
//	}
//};
//
////queue<pair<int, int>> Q;
//priority_queue<pair<int, int>, vector<pair<int, int>>, cp> Q;
//
//
//
//
//
//
////int** Cave;
////vector<vector<int>> CAVE;
//
//void D()
//{
//	Q = priority_queue<pair<int, int>, vector<pair<int, int>>, cp>();
//	//Q = queue<pair<int, int>>();
//
//	//for (int i = 0; i < N; i++) {
//	//	for (int j = 0; j < N; j++) {
//	//		//if (i != 0 || j != 0) {
//	//		dist[i][j] = INF;
//	//		pre[i][j] = pair<int, int>(-1, -1);
//
//	//		//}
//
//	//		//Q.push(pair<int, int>(i, j));
//	//	}
//	//}
//	//dist[0][0] = cave[0][0];
//	//Q.push(pair<int, int>(0, 0));
//
//	dist[0][0] = cave[0][0];
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < N; j++) {
//			if (i != 0 || j != 0) {
//				dist[i][j] = INF;
//				pre[i][j] = pair<int, int>(-1, -1);
//
//			}
//
//			//Q.push(pair<int, int>(i, j));
//		}
//	}
//
//	
//
//
//
//	for(int k=0; k<N*N-1; k++) {
//
//		//pair<int, int> v = Q.top();
//		//pair<int, int> v = Q.top();
//		//Q.pop();
//		int min = INF;
//		int s, t;
//		s = t = 0;
//		for (int i = 0; i < N; i++) {
//			for (int j = 0; j < N; j++) {
//				if (i == 0 && j == 0) continue;
//
//				if (dist[i][j] < min) {
//					min = dist[i][j];
//					s = i, t = j;
//				}
//			}
//		}
//
//		//int s = v.first;
//		//int t = v.second;
//
//		for (int i = 0; i < 4; i++) {
//
//			int ds = s + dx[i];
//			int dt = t + dy[i];
//
//			//if (ds >= 0 && dt >= 0 && ds < N && dt < N) {
//			if (ds >= 0 && dt >= 0 && ds < N && dt < N && dist[ds][dt] == INF) {
//			//if (ds >= 0 && dt >= 0 && ds < N && dt < N && pre[ds][dt].first == -1 && pre[ds][dt].second == -1) {
//
//
//
//				if (dist[s][t] + cave[ds][dt] < dist[ds][dt]) {
//					dist[ds][dt] = dist[s][t] + cave[ds][dt];
//					pre[ds][dt] = pair<int, int>(s, t);
//				}
//
//
//				//Q.push(pair<int, int>(ds, dt));
//			}
//
//
//		}
//
//
//
//	}
//
//	cout << "Problem " << num++ << ": " << dist[N - 1][N - 1] << endl;
//	//cout << "Problem " << num++ << ": " << dist[N - 1][N - 1] + cave[0][0] << endl;
//}
//
//int main()
//{
//	while (cin >> N) {
//		if (N == 0) {
//			break;
//		}
//
//		for (int i = 0; i < N; i++) {
//			for (int j = 0; j < N; j++) {
//				cin >> cave[i][j];
//			}
//		}
//
//
//
//
//
//		D();
//	}
//
//	return 0;
//}