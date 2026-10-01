#include "..\CookHeader.h"
//Array<string> queue = { "화사","문별","솔라","none","none" };
//int front = -1, rear = 2;
//int main() {
//	rear++;
	//queue[rear] = "화사";
	//rear++;
	//queue[rear] = "문별";
	//rear++;
	//queue[rear] = "솔라";
//	println("------- 큐 상태-------");
//	print("[출구]<--");
//	for(int i = 0; i<len(queue); i++)
//		print(queue[i]);
//	println("<--[입구]");
//	println("------------------------");
//	string data;	
//	front++;
//	data = queue[front];
//	queue[front] = "none";
//	println("deQueue--> " + data);
//	front++;
//	data = queue[front];
//	queue[front] = "none";
//	println("deQueue--> " + data);
//
//	front++;
//	data = queue[front];
//	queue[front] = "none";
//	println("deQueue--> " + data);
//	println("------- 큐 상태-------");
//	print("[출구]<--");
//	for (int i = 0; i < len(queue); i++)
//		print(queue[i]);
//	println("<--[입구]");
//	println("------------------------");
//
//}
int SIZE = 5;
Array <string> queue = {"화사","솔라","문별","휘인","none"};
int front = -1, rear = 3;

bool isQueueFull() {
	if (rear == SIZE - 1)
		return true;
	else
		return false;
}
void enQueue(string data) {
	if (isQueueFull()) {
		println("큐가 꽉 찼습니다.");
		return;
	}
	rear++;
	queue[rear] = data;
}

int main() {
	//print("큐가 꽉 찼는지 여부-->");
	//println((isQueueFull() ? "true" : "false"));
	printArray(queue);
	enQueue("선미");
	printArray(queue);
	enQueue("재남");
}