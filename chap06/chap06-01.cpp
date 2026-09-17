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


//int SIZE = 5;
//Array <string> stack = { "커피", "녹차", "꿀물", "콜라", "None" };
//int top = 3;
//
//bool isStackFull() {
//    if (top >= SIZE - 1)
//        return true;
//    else
//        return false;
//}
//
//void push(string data) {
//    if (isStackFull()) {
//        println("스택이 꽉 찼습니다.");
//        return;
//    }
//    top++;
//    stack[top] = data;
//}
//
//int main() {
//    printArray(stack);
//    push("환타");
//    printArray(stack);
//    push("게토레이");
//}

int SIZE = 5;
Array <string> stack = { "None", "None", "None", "None", "None" };
int top = -1;

bool isStackEmpty() {
    if (top == -1)
        return true;
    else
        return false;
}

int main() {
    for (int i = 0; i < SIZE; i++)
        stack.push_back("None");

    print("스택이 비었는지 여부-->");
    println((isStackEmpty() ? "true" : "false"));
}

int SIZE = 5;
Array <string> stack = { "커피", "None", "None", "None", "None" };
int top = 0;

bool isStackEmpty() {
    if (top == -1)
        return true;
    else
        return false;
}

string pop() {
    if (isStackEmpty()) {
        println("스택이 비었습니다.");
        return "None";
    }
    string data = stack[top];
    stack[top] = "None";
    top--;
    return data;
}

int main() {
    string retData;
    printArray(stack);
    retData = pop();
    println("추출한 데이터-->" + retData);
    printArray(stack);
    retData = pop();
}

int SIZE = 5;
Array <string> stack = { "커피", "녹차", "꿀물", "None", "None" };
int top = 2;

bool isStackEmpty() {
    if (top == -1)
        return true;
    else
        return false;
}

string peek() {
    if (isStackEmpty()) {
        println("스택이 비었습니다.");
        return "None";
    }
    return stack[top];
}

int main() {
    printArray(stack);

    string retData;
    retData = peek();
    println("top의 데이터 확인-->" + retData);

    printArray(stack);
}

int SIZE;
Array <string> stack;
int top = -1;

bool isStackFull() {
    if (top >= SIZE - 1)
        return true;
    else
        return false;
}

bool isStackEmpty() {
    if (top == -1)
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

string pop() {
    if (isStackEmpty()) {
        println("스택이 비었습니다.");
        return "None";
    }
    string data = stack[top];
    stack[top] = "None";
    top--;
    return data;
}

string peek() {
    if (isStackEmpty()) {
        println("스택이 비었습니다.");
        return "None";
    }
    return stack[top];
}

int main() {
    input(SIZE, "스택 크기를 입력하세요 => ");
    for (int i = 0; i < SIZE; i++)
        stack.push_back("None");

    char select;
    input(select, "삽입(I)/추출(E)/확인(V)/종료(X) 중 하나를 선택 => ");

    string data;
    while (select != 'X' && select != 'x') {
        switch (select) {
        case 'I':
        case 'i':
            input(data, "입력할 데이터 => ");
            push(data);
            print("스택 상태 : ");
            printArray(stack);
            break;
        case 'E':
        case 'e':
            data = pop();
            println("추출한 데이터 => " + data);
            print("스택 상태 : ");
            printArray(stack);
            break;
        case 'V':
        case 'v':
            data = peek();
            println("top의 데이터 확인 => " + data);
            printArray(stack);
            break;
        default:
            println("입력이 잘못됨");
        }
        input(select, "삽입(I)/추출(E)/확인(V)/종료(X) 중 하나를 선택 => ");
    }
    println("프로그램 종료!");
}