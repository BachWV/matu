#include <iostream>
using namespace std;

typedef struct LNode {
	int data;
	struct LNode* next;
}Node;
int* solve(int N, int M, int K) {
	int* a = new int[N - K];
	int j = 0;
	Node* L = new Node;
	Node* r = L;
	for (int i = 1; i <= N; i++) {
		Node* p = new Node;
		p->data = i;
		p->next = NULL;
		r->next = p;
		r = r->next;
	}

	r->next = L->next;
	int nowNum = N;
	r = L;
	while (nowNum > K) {

		for (int i = 0; i < M - 1; i++) {
			r = r->next;

		}
		a[j] = r->next->data;
		j++;
		r->next = r->next->next;
		nowNum--;
	}

	return a;
}
int main() {
	int N, M, K;
    //N = 9, M = 3, K = 2;
    N = 8, M = 4, K = 4;
	int* a = solve(N, M, K);
	for (int i = 0; i < N - K; i++) {
		cout << a[i] << endl;
	}
	
	return 0;
}