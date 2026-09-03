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

Array <string> katok = {"다현", "정연", "쯔위", "사나", "지효"};
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
	printArray(katok);
	insert_data("솔라", 2);
	printArray(katok);
	insert_data("문별", 6);
	printArray(katok);
}
