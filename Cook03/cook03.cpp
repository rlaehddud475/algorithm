#include "..\CookHeader.h"

//Array<string> katok;
//void add_data(string data) {
//	katok.push_back("None");
//	int kLen = len(katok);
//	katok[kLen - 1] = data;
//
//}
//int main() {
//	add_data("다현");
//	add_data("정연");
//	add_data("쯔위");
//	add_data("사나");
//	add_data("지효");
//	printArray(katok);
//	
//}

Array <string> katok /*= {"다현", "정연", "쯔위", "사나", "지효"}*/;
int sel_num = -1;
void add_data(string data) {
	katok.push_back("None");
	int kLen = len(katok);
	katok[kLen - 1] = data;
}
void delete_data(int position) {
	if ((position < 0) || (position > len(katok))) {
		print("데이터를 삭제할 범위를 벗어났습니다.");
		return;
	}

	int kLen = len(katok);
	katok[position] = "None";
	for (int i = position+1; i < kLen; i++) {
		katok[i-1] = katok[i];
		katok[i] = "None";
	}
	del(katok,kLen - 1);
}
	
void insert_data(string data, int position) {
	if ((position <  0) || (position > len(katok))) {
		print("데이터를 삽입할 범위를 벗어났습니다.");
		return;
	}

	katok.push_back("None");
	int kLen = len(katok);
	


	for (int i = kLen - 1; i > position; i--) {
		katok[i] = katok[i - 1];
		katok[i - 1] = "None";
	}
	katok[position] = data;

	}
int main() {
	string data;
	int pos;

	while (sel_num != 4) {
		input(sel_num," 선택하세요(1.추가 2.삽입 3.삭제 4.종료)--> ");
		switch (sel_num) {
			case 1:
			input(data, "추가할 데이터 --> ");
			add_data(data);
			printArray(katok);
			break;
			case 2:
				input(pos, "삽입할 위치 --> ");
				input(data, "삽입할 데이터 --> ");
				insert_data(data, pos);
				printArray(katok);
				break;
			case 3:
				input(pos, "삭제할 위치 --> ");
				delete_data(pos);
				printArray(katok);
				break;
			case 4:
				printArray(katok);
				break;
		default:
			println("1~4 중 하나를 입력하세요");
			continue;
		}
	}
	/*printArray(katok);
	insert_data("솔라", 2);
	printArray(katok);
	insert_data("문별", 6);
	printArray(katok);*/
	//delete_data(1);
	//printArray(katok);
	//delete_data(3);
	//printArray(katok);
}
