#include "..\CookHeader.h"

Array<string> katok;
void add_data(string data) {
	katok.push_back("None");
	int kLen = len(katok);
	katok[kLen - 1] = data;

}
int main() {
	add_data("다현");
	add_data("정연");
	add_data("쯔위");
	add_data("사나");
	add_data("지효");
	printArray(katok);
	
}