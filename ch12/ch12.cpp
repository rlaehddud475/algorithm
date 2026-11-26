#include "..\CookHeader.h"
Array<int> dataAry = {188,150,168,162,105,120,177,50};
void qSort(Array<int> &arr, int start, int end) {
	if (end <= start) return;
	int low = start;
	int high = end;
	int pivot = arr[(low + high) / 2];
	while (low<=high){
		while (arr[low]<pivot)
		{
			low++;
		}
		while (arr[high]>pivot)
		{
			high--;
		}
		if(low<=high)
		{
			int tmp = arr[low];
			arr[low] = arr[high];
			arr[high] = tmp;
			low++;
			high--;
		}
	}
	int mid = low;
	qSort(arr, start, mid-1);
	qSort(arr, mid, end);
}
void quickSort(Array<int> &arr) {
	qSort(arr, 0, len(arr)-1);
}
//Array<int> bubbleSort(Array<int> ary) {
//	int n = len(ary);
//	for (int end = n-1; end > 0; end--) {
//		bool changeYN = false;
//		print("#사이클-->");
//		printArray(ary);
//		for (int cur = 0; cur < end; cur++) {
//			if (ary[cur] > ary[cur + 1]) {
//				int tmp = ary[cur+1];
//				ary[cur + 1] = ary[cur];
//				ary[cur] = tmp;
//				changeYN = true;	
//			}
//		}
//		if (!changeYN) break;
//	}
//	return ary;
//}
//int main() {
//	print("정렬 전-->");
//	printArray(dataAry);
//	dataAry = bubbleSort(dataAry);
//	print("정렬 후-->");
//	printArray(dataAry);
//	
//
//
/*}	*/
int main() {
	print("정렬 전-->");
	printArray(dataAry);
	quickSort(dataAry);
	print("정렬 후-->");
	printArray(dataAry);
}