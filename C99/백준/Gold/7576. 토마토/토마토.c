#include <stdio.h>
#include <stdlib.h>

#define MAX 1000

typedef struct {
    int x, y;
} Point;

int M, N;
int box[MAX][MAX];
int day[MAX][MAX]; // 익는 데 걸린 일수 저장
int dx[4] = {0, 0, -1, 1}; // 상하좌우
int dy[4] = {-1, 1, 0, 0};

Point queue[MAX * MAX];
int front = 0, rear = 0;

void enqueue(int x, int y) {
    queue[rear].x = x;
    queue[rear].y = y;
    rear++;
}

Point dequeue() {
    return queue[front++];
}

int isEmpty() {
    return front == rear;
}

void bfs() {
    while (!isEmpty()) {
        Point p = dequeue();
        for (int i = 0; i < 4; i++) {
            int nx = p.x + dx[i];
            int ny = p.y + dy[i];

            if (nx >= 0 && nx < N && ny >= 0 && ny < M) {
                if (box[nx][ny] == 0) {
                    box[nx][ny] = 1;  // 익음 처리
                    day[nx][ny] = day[p.x][p.y] + 1;
                    enqueue(nx, ny);
                }
            }
        }
    }
}

int main() {
    scanf("%d %d", &M, &N);

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            scanf("%d", &box[i][j]);
            if (box[i][j] == 1) {
                enqueue(i, j);  // 익은 토마토는 BFS 시작점
            }
        }
    }

    bfs();

    int result = 0;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            if (box[i][j] == 0) {
                printf("-1\n");
                return 0;
            }
            if (day[i][j] > result) {
                result = day[i][j];
            }
        }
    }

    printf("%d\n", result);
    return 0;
}
