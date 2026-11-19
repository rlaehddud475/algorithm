#include "../CookHeader.h"
Array <int> before = { 188,162,168,120,50,150,177,105 };
Array <int> after;

int findMinIdx(Array <int> ary) {
	int minIdx = 0;
	for (int i = 1; i < len(ary); i++) {
		if (ary[minIdx] > ary[i]) {
			minIdx = i;
		}
	}
	return minIdx;
}
int main() {
	print("정렬 전 -->");
	printArray(before);
	int arySize = len(before);
	for (int i = 0; i < arySize; i++){
		int minPos = findMinIdx(before);
		after.push_back(before[minPos]);
		del(before, minPos);
	}
	print("정렬 후 -->");
	printArray(after);

}