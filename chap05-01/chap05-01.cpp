//#include "..\CookHeader.h"
//
//typedef struct _Node
//{
//	string data;
//	struct _Node* link = NULL;
//} Node;
//
//Array<Node*> memory;
//Node* head, * current, * pre;
//
//Array<string> dataArray = { "다현", "정연", "쯔위", "사나", "지효" };
//
//void printNodes(Node* start) {
//	if (start == NULL)
//		return;
//	Node* current = start;
//	print(current->data);
//	while (current->link != start) {
//		current = current->link;
//		print(current->data);
//	}
//	println("");
//}
//
//void freeMemory() {
//	for (int i = 0; i < len(memory); i++) {
//		if (memory[i] != NULL)
//			delete memory[i];
//	}
//}
//
//void insertNode(string findData, string insertData) {
//	Node* node;
//
//	if (head->data == findData) {
//		node = new Node;
//		node->data = insertData;
//		node->link = head;
//
//		Node* last = head;
//		while (last->link != head) {
//			last = last->link;
//		}
//		last->link = node;
//		head = node;
//		memory.push_back(node);
//		return;
//	}
//
//	Node* current = head;
//	Node* pre = head;
//
//	while (current->link != head) {
//		pre = current;
//		current = current->link;
//
//		if (current->data == findData) {
//			node = new Node;
//			node->data = insertData;
//			node->link = current;
//			pre->link = node;
//			memory.push_back(node);
//			return;
//		}
//	}
//
//	node = new Node;
//	node->data = insertData;
//	current->link = node;
//	node->link = head;
//	memory.push_back(node);
//}
//
//void deleteNode(string deleteData) {
//	Node* current;
//	Node* pre;
//
//	if (head->data == deleteData) {
//		current = head;
//		if (head->link == head) {
//			head = NULL;
//		}
//		else {
//			Node* last = head;
//			while (last->link != head) {
//				last = last->link;
//			}
//			head = head->link;
//			last->link = head;
//		}
//		for (int i = 0; i < len(memory); i++) {
//			if (memory[i] == current) {
//				memory[i] = NULL;
//				break;
//			}
//		}
//		delete current;
//		return;
//	}
//
//	current = head;
//	while (current->link != head) {
//		pre = current;
//		current = current->link;
//		if (current->data == deleteData) {
//			pre->link = current->link;
//			for (int i = 0; i < len(memory); i++) {
//				if (memory[i] == current) {
//					memory[i] = NULL;
//					break;
//				}
//			}
//			delete current;
//			return;
//		}
//	}
//}
//Node* findNode(string findData) {
//	current = head;
//	if (head->data == findData)
//		return current;
//	while (current->link != head) {
//		current = current->link;
//		if (current->data == findData) {
//			return current;
//		}
//	}
//	return new Node{ "None", NULL };
//}
//int main()
//{
//	for (int i = 0; i < 5; i++) {
//		current = new Node;
//		current->data = dataArray[i];
//		memory.push_back(current);
//
//		if (i == 0) {
//			head = current;
//		}
//		else {
//			pre->link = current;
//		}
//		pre = current;
//	}
//
//	pre->link = head;
//
//	printNodes(head);
//
//	//insertNode("다현", "화사");
//	//printNodes(head);
//
//	//insertNode("사나", "솔라");
//	//printNodes(head);
//
//	//insertNode("재남", "문별");
//	//printNodes(head);
//
//	/*deleteNode("다현");
//	printNodes(head);
//
//	deleteNode("쯔위");
//	printNodes(head);
//	deleteNode("지효");
//	printNodes(head);
//
//	deleteNode("재남");
//	printNodes(head);*/
//	Node* fNode;
//	fNode = findNode("다현");
//	println(fNode->data);
//
//	fNode = findNode("쯔위");
//	println(fNode->data);
//
//	fNode = findNode("재남");
//	println(fNode->data);
//	freeMemory();
//}