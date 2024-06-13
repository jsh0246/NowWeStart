#include <iostream>
#include <queue>
using namespace std;

priority_queue<int> q;


int main()
{
	int a = 1;
	int b = 10;


	q.push(a);
	q.push(b);

	a = 100;
	

	while(!q.empty()) {
		cout << q.top() << endl;
		q.pop();
	}

	




	return 0;
}