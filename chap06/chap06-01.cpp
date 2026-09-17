#include "..\CookHeader.h"
//
//Array <string> stack = { "None", "None", "None", "None", "None" };
//int top = -1;
//
//int main() {
//    top++;
//    stack[top] = "커피";
//    top++;
//    stack[top] = "녹차";
//    top++;
//    stack[top] = "꿀물";
//
//    println("-------- 스택 상태 --------");
//    for (int i = len(stack) - 1; i > -1; i--)
//        println(stack[i]);
//}



//Array <string> stack = { "커피", "녹차", "꿀물", "None", "None" };
//int top = 2;
//
//int main() {
//    println("-------- 스택 상태 --------");
//    for (int i = len(stack) - 1; i > -1; i--)
//        println(stack[i]);
//
//    string data;
//    println("-------------------");
//    data = stack[top];
//    stack[top] = "None";
//    top--;
//    println("pop-->" + data);
//
//    data = stack[top];
//    stack[top] = "None";
//    top--;
//    println("pop-->" + data);
//
//    data = stack[top];
//    stack[top] = "None";
//    top--;
//    println("pop-->" + data);
//    println("-------------------");
//
//    println("-------- 스택 상태 --------");
//    for (int i = len(stack) - 1; i > -1; i--)
//        println(stack[i]);
//}

//
//int SIZE = 5;
//Array <string> stack = { "커피", "녹차", "꿀물", "콜라", "환타" };
//int top = 4;
//
//bool isStackFull() {
//    if (top >= SIZE - 1)
//        return true;
//    else
//        return false;
//}
//
//int main() {
//    print("스택이 꽉 찼는지 여부-->");
//    println((isStackFull() ? "true" : "false")); // 0: false, 1: true
//}
//


int SIZE = 5;
Array <string> stack = { "커피", "녹차", "꿀물", "콜라", "None" };
int top = 3;

bool isStackFull() {
    if (top >= SIZE - 1)
        return true;
    else
        return false;
}

void push(string data) {
    if (isStackFull()) {
        println("스택이 꽉 찼습니다.");
        return;
    }
    top++;
    stack[top] = data;
}

int main() {
    printArray(stack);
    push("환타");
    printArray(stack);
    push("게토레이");
}