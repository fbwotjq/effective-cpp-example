#include<iostream>
struct Node
{
	int data;
	Node* next;
};
int main() {
	Node* head = NULL;
	Node* node = new Node;

	node->data = 100;
	node->next = NULL;
	head = node;

	node = new Node;
	node->data = 200;
	node->next = head;	
	head = node;

	node = new Node;
	node->data = 300;
	node->next = head;
	head = node;

	Node* copyHead = head;
	while (copyHead != NULL) {
		printf("%d\n", copyHead->data);
		copyHead = copyHead->next;
	}

	copyHead = head;
	Node* tail = new Node;
	while (copyHead!=NULL)
	{
		tail = copyHead;
		copyHead = copyHead->next;
	}



	return 0;
}