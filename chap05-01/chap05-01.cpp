#include "..\CookHeader.h"

typedef struct _Node
{
	string data;
	struct _Node* link=NULL;
} Node;

Array<Node*> memory;
Node* head, *current, *pre;

Array<string> dataArray = { "다현", "정연", "쯔위", "사나", "지효" };
void printNodes(Node* start)
{
    if (start == NULL)
        return;
    Node* current = start;
    print(current->data);

    while (current->link != NULL) {
        current = current->link;
        print(current->data);
    }
    println("");
}
void freeMemory() {
    for (int i = 0; i < len(memory); i++)
        delete memory[i];
}
int main()
{
    Node* node = new Node;
    node->data = dataArray[0];
    head = node;
	node->link = head;
    memory.push_back(node);
    for (int i = 0; i < len(dataArray); i++) {
        current = new Node;
        memory.push_back(current);
        current->data = dataArray[i];
        if (i == 0) {
            head = current;
            pre = head;
        }
        else {
            pre->link = current;
            pre = current;
        }
    }
    printNodes(head);
    freeMemory();

}