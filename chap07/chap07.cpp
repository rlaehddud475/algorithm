////#include "..\CookHeader.h"
//////Array<string> queue = { "화사","솔라","문별","none","none" };
//////int front = -1, rear = 2;
//////int main() {
//////	rear++;
////	//queue[rear] = "화사";
////	//rear++;
////	//queue[rear] = "문별";
////	//rear++;
////	//queue[rear] = "솔라";
//////	println("------- 큐 상태-------");
//////	print("[출구]<--");
//////	for(int i = 0; i<len(queue); i++)
//////		print(queue[i]);
//////	println("<--[입구]");
//////	println("------------------------");
//////	string data;	
//////	front++;
//////	data = queue[front];
//////	queue[front] = "none";
//////	println("deQueue--> " + data);
//////	front++;
//////	data = queue[front];
//////	queue[front] = "none";
//////	println("deQueue--> " + data);
//////
//////	front++;
//////	data = queue[front];
//////	queue[front] = "none";
//////	println("deQueue--> " + data);
//////	println("------- 큐 상태-------");
//////	print("[출구]<--");
//////	for (int i = 0; i < len(queue); i++)
//////		print(queue[i]);
//////	println("<--[입구]");
//////	println("------------------------");
//////
//////}
////int SIZE = 5;
//////Array <string> queue= {"화사","none","none","none","none"};
////Array<string> queue = { "화사","솔라","문별","none","none" };
////int front = -1, rear = 2;
//////bool isQueueEmpty() {
//////	if (front == rear)
//////		return true;
//////	else
//////		return false;
//////}
//////bool isQueueFull() {
//////	if (rear == SIZE - 1)
//////		return true;
//////	else
//////		return false;
//////}
//////void enQueue(string data) {
//////	if (isQueueFull()) {
//////		println("큐가 꽉 찼습니다.");
//////		return;
//////	}
//////	rear++;
//////	queue[rear] = data;
//////}
//////string deQueue() {
//////	if (isQueueEmpty()) {
//////		println("큐가 비었습니다.");
//////		return "none";
//////	}
//////	front++;
//////	string data = queue[front];
//////	queue[front] = "none";
//////	return data;
//////}
////int main() {
////	//print("큐가 꽉 찼는지 여부-->");
////	//println((isQueueFull() ? "true" : "false"));
////	//printArray(queue);
////	//enQueue("선미");
////	//printArray(queue);
////	//enQueue("재남");
////	//for(int i = 0; i < SIZE; i++) {
////	//	queue.push_back("none");
////	//}	
////	//print("큐가 비었는지 여부-->");
////	//println((isQueueEmpty() ? "true" : "false"));
////	/*string retdata;
////	printArray(queue);
////	retdata = deQueue();
////	println("추출한 데이터--> " + retdata);
////	printArray(queue);d
////	retdata = deQueue();*/
////}
//#include "..\CookHeader.h"
//
//int SIZE;
//Array <string> queue;
//int front = -1, rear = -1;
//
//bool isQueueFull() {
//	if (rear == SIZE - 1)
//		return true;
//	else
//		return false;
//}
//
//bool isQueueEmpty() {
//	if (front == rear)
//		return true;
//	else
//		return false;
//}
//
//void enQueue(string data) {
//	if (isQueueFull()) {
//		println("큐가 꽉 찼습니다.");
//		return;
//	}
//	rear++;
//	queue[rear] = data;
//}
//
//string deQueue() {
//	if (isQueueEmpty()) {
//		println("큐가 비었습니다.");
//		return "None";
//	}
//	front++;
//	string data = queue[front];
//	queue[front] = "None";
//	return data;
//}
//
//string peek() {
//	if (isQueueEmpty()) {
//		println("큐가 비었습니다.");
//		return "None";
//	}
//	return queue[front + 1];
//}
//
//int main() {
//	input(SIZE, "큐 크기를 입력하세요 ==> ");
//	for (int i = 0; i < SIZE; i++)
//		queue.push_back("None");
//
//	char select;
//	input(select, "삽입(I)/추출(E)/확인(V)/종료(X) 중 하나를 선택 ==> ");
//
//	string data;
//	while (select != 'X' && select != 'x') {
//		switch (select) {
//		case 'I':
//		case 'i':
//			input(data, "입력할 데이터--> ");
//			enQueue(data);
//			print("큐 상태 : ");
//			printArray(queue);
//			break;
//		case 'E':
//		case 'e':
//			data = deQueue();
//			println("추출한 데이터-->" + data);
//			print("큐 상태 : ");
//			printArray(queue);
//			break;
//		case 'V':
//		case 'v':
//			data = peek();
//			println("다음에 나올 데이터 확인-->" + data);
//			printArray(queue);
//			break;
//		default:
//			println("입력이 잘못됨");
//		}
//		input(select, "삽입(I)/추출(E)/확인(V)/종료(X) 중 하나를 선택 ==> ");
//	}
//	println("프로그램 종료!");
//}
#include "..\CookHeader.h"

int SIZE;
Array <string> queue;
int front = 0, rear = 0;

bool isQueueFull() {
	if ((rear + 1) % SIZE == front)
		return true;
	else
		return false;
}

bool isQueueEmpty() {
	if (front == rear)
		return true;
	else
		return false;
}

void enQueue(string data) {
	if (isQueueFull()) {
		println("큐가 꽉 찼습니다.");
		return;
	}
	rear = (rear + 1) % SIZE;
	queue[rear] = data;
}

string deQueue() {
	if (isQueueEmpty()) {
		println("큐가 비었습니다.");
		return "None";
	}
	front = (front + 1) % SIZE;
	string data = queue[front];
	queue[front] = "None";
	return data;
}

string peek() {
	if (isQueueEmpty()) {
		println("큐가 비었습니다.");
		return "None";
	}
	return queue[(front + 1) % SIZE];
}

int main() {
	input(SIZE, "큐 크기를 입력하세요 ==> ");
	for (int i = 0; i < SIZE; i++)
		queue.push_back("None");

	char select;
	input(select, "삽입(I)/추출(E)/확인(V)/종료(X) 중 하나를 선택 ==> ");

	string data;
	while (select != 'X' && select != 'x') {
		switch (select) {
		case 'I':
		case 'i':
			input(data, "입력할 데이터--> ");
			enQueue(data);
			print("큐 상태 : ");
			printArray(queue);
			println("front : " + to_string(front) + ", rear : " + to_string(rear));
			break;
		case 'E':
		case 'e':
			data = deQueue();
			println("추출한 데이터-->" + data);
			print("큐 상태 : ");
			printArray(queue);
			println("front : " + to_string(front) + ", rear : " + to_string(rear));
			break;
		case 'V':
		case 'v':
			data = peek();
			println("다음에 나올 데이터 확인-->" + data);
			printArray(queue);
			println("front : " + to_string(front) + ", rear : " + to_string(rear));
			break;
		default:
			println("입력이 잘못됨");
		}
		input(select, "삽입(I)/추출(E)/확인(V)/종료(X) 중 하나를 선택 ==> ");
	}
	println("프로그램 종료!");
}