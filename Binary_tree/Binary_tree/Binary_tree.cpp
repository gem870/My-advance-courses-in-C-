

#include <iostream>

using namespace std;

struct Node {
	int data;
	Node* left;
	Node* right;
};

Node* createNewNode(int data) {
	Node* newNode = new Node(); 
	{
		newNode->data = data;
		newNode->left = nullptr;
		newNode->right = nullptr;
	}
	return newNode;
}

void printData_1() {
	Node* rootNode = createNewNode(1);
	rootNode->left = createNewNode(2);
	rootNode->right = createNewNode(4);
	rootNode->left->left = createNewNode(4);
}

void printData_2() {
	Node* rootNode = createNewNode(1);

	rootNode->left = createNewNode(2);
	rootNode->right = createNewNode(3);

	rootNode->left->left = createNewNode(4);
	rootNode->left->right = createNewNode(5);

	rootNode->right->left = createNewNode(6);
	rootNode->right->right = createNewNode(7);

	rootNode->left->right->left = createNewNode(9);
	rootNode->right->right->left = createNewNode(15);

}





int main()
{



	system("pause > 0");
	return 0;

}


