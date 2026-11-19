#include "../CookHeader.h"

int findInsertyIdx(Array <int> ary, int data) {
	int findIdx = -1;
	for (int i = 0; i < len(ary); i++) {
		if (ary[i] > data) {
			findIdx = i;
			break;
		}
	}
	if (findIdx==-1)
	{
		return len(ary);
	}
	else
	{
		return findIdx;
	}

}
int main(){
	Array <int> testAry;
	int insPos;

	testAry = {};
	insPos = findInsertyIdx(testAry, 55);
	println("삽입할 위치 -->" + to_string(insPos));
	testAry = {33,77,88};
	insPos = findInsertyIdx(testAry, 55);
	println("삽입할 위치 -->" + to_string(insPos));	
	testAry = { 33,55,77,88 };
	insPos = findInsertyIdx(testAry, 100);
	println("삽입할 위치 -->" + to_string(insPos));
}
//Array <int> dataAry = { 188,162,168,120,50,150,177,105 };
//Array <int> selectionSort(Array <int> ary) {
//	int n = len(ary);
//	for (int cycle = 0; cycle < n-1; cycle++){
//		int minIdx = cycle;
//		for(int i = cycle + 1; i < n; i++){
//			if (ary[minIdx] > ary[i]){
//				minIdx = i;
//			}
//		}
//		int tmp = ary[cycle];
//		ary[cycle] = ary[minIdx];	
//		ary[minIdx] = tmp;
//	}
//	return ary;
//}
//int main() {
//	print("정렬 전 -->");
//	printArray(dataAry);
//	dataAry = selectionSort(dataAry);
//	print("정렬 후 -->");
//	printArray(dataAry);
//}
//Array <int> before = { 188,162,168,120,50,150,177,105 };
//Array <int> after;
//
//int findMinIdx(Array <int> ary) {
//	int minIdx = 0;
//	for (int i = 1; i < len(ary); i++) {
//		if (ary[minIdx] > ary[i]) {
//			minIdx = i;
//		}
//	}
//	return minIdx;
//}
//int main() {
//	print("정렬 전 -->");
//	printArray(before);
//	int arySize = len(before);
//	for (int i = 0; i < arySize; i++){
//		int minPos = findMinIdx(before);
//		after.push_back(before[minPos]);
//		del(before, minPos);
//	}
//	print("정렬 후 -->");
//	printArray(after);
//
//}