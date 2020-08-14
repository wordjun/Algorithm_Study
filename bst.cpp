#include<iostream>
#include<queue>
using namespace std;

typedef struct Node {
	struct Node* left;
	struct Node* right;
	int data;
}Node;

Node* newNode(int data) {
	Node* node = new Node;
	node->left = node->right = NULL;
	node->data = data;
	return node;
}


Node* insert(Node* root, int data) {
	if (root == NULL)
		return newNode(data);
	else {
		Node* temp;
		if (data <= root->data) {
			temp = insert(root->left, data);
			root->left = temp;
		}
		else {
			temp = insert(root->right, data);
			root->right = temp;
		}
	}
	return root;
}
queue<Node*> q1;

void levelOrder(Node* node) {
	Node* cur = node;
	q1.push(cur);
	while (!q1.empty()) {
		cur = q1.front();
		cout<< cur->data<<" ";
		q1.pop();

		if (cur->left != NULL)
			q1.push(cur->left);
		if (cur->right != NULL)
			q1.push(cur->right);
	}
	cout << '\n';
}

int main() {
	Node* root = NULL;
	int N, data;
	cin >> N;

	while (N--) {
		cin >> data;
		root = insert(root, data);
	}
	levelOrder(root);
	while (!q1.empty()) {
		cout<<q1.front()<<" ";
		q1.pop();
	}
	return 0;
}