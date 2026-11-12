#include"..\CookHeader.h"

//int boxCount = 3;
//void openBox() {
//	println("종이 상자를 엽니다. ^^");
//	boxCount--;
//	if (boxCount == 0) {
//		println("** 반지를 넣고 반환합니다. **");
//		return;
//	}
//	openBox();
//	println("종이 상자를 닫습니다. ^^");
//}
//int main() {
//	openBox();
//}


//void gugu(int dan, int num) {
//	println(to_string(dan) + " * " + to_string(num) + " = " + to_string(dan * num));
//	if (num < 9)
//		gugu(dan, num + 1);
//}
//int main() {
//	for (int dan = 2; dan < 10; dan++) 
//	{println("## " + to_string(dan) + "단 ##");
//	gugu(dan, 1);
//
//	}
//}
//string tab = "";
//int pow(int x, int n) {
//	
//	tab += "  ";
//	if (n == 0) {
//		
//		return 1;
//	}
//	println(tab + to_string(x) + "^" + to_string(x)+"^("+to_string(n)+"-1)");
//	return x * pow(x, n - 1);
//	
//	
//}
//int main() {
//	println("2^4");
//	println("답-->" + to_string(pow(2,4)));
//}

int fibo(int n) {
	if (n == 0) {
		return 0;
	}else if(n==1) {
		return 1;
	}
	else
	{
		return fibo(n - 1) + fibo(n - 2);
	}

}
int main() {
	print("피보나치 수--> 0 1");
	for (int i = 2; i < 20; i++)
	{
		print(fibo(i));
	}
}