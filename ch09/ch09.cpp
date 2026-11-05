#include "..\CookHeader.h"
typedef Array<Array<int>> Graph;
Graph initGraph(int size) {
	Graph g;
	Array<int> tmpary;
	for (int i = 0; i < size; i++) {
		tmpary.clear();
		for (int k = 0; k < size; k++)
		{
			tmpary.push_back(0);
		}
		g.push_back(tmpary);
	}
	return g;
}

Graph G1;
Array<int> stack;
Array<int> visitedAry;

int main() {
    Graph G1 = initGraph(4);
    G1[0][2] = 1; G1[0][3] = 1;
    G1[1][2] = 1;
    G1[2][0] = 1; G1[2][1] = 1; G1[2][3] = 1;
    G1[3][0] = 1; G1[3][2] = 1;

    println("## G1 무방향 그래프 ##");
    for (int row = 0; row < 4; row++) {
        for (int col = 0; col < 4; col++) {
            print(G1[row][col]);
        }
        println("");
    }

    int current = 0;
    stack.push_back(current);
    visitedAry.push_back(current);

    while (len(stack) != 0) {
        int next = -1;
        for (int vertex = 0; vertex < 4; vertex++) {
            if (G1[current][vertex] == 1) {
                if (isInArray(visitedAry, vertex))
                {
                }
                else {
                    next = vertex;
                    break;
                }
            }
        }
        if (next != -1) {
            current = next;
            stack.push_back(current);
            visitedAry.push_back(current);
        }
        else {
            current = stack[len(stack) - 1];
            stack.pop_back();
        }
    }

    print("방문 순서-->");
    for (int i = 0; i < len(visitedAry); i++)
        print((char)('A' + visitedAry[i]));

}