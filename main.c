#include "game.h"
void menu(){
    printf("************************\n");
    printf("**** 1.play  0.exit ****\n");
    printf("************************\n");
}

void game(){
    //test-----printf("扫雷\n");
    //雷的信息存储
    //1. 布置好的雷的信息
    char mine[ROWS][COLS] = {0};
    //2. 排查出的雷的信息
    char show[ROWS][COLS] = {0};
    //设置时间戳
    srand((unsigned int)time(NULL));
    //初始化
    InitBoard(mine,ROWS,COLS,'0');
    InitBoard(show,ROWS,COLS,'*');
    //打印棋盘
    //DisplayBoard(mine,ROW,COL);
    DisplayBoard(show,ROW,COL);
    //布置雷
    SetMine(mine,ROW,COL);
    //DisplayBoard(mine,ROW,COL);
    //扫雷
    FindMine(mine,show,ROW,COL);

}

void test(){
    int input;
    do {
        menu();
        printf("请选择:>");
        scanf("%d",&input);
        switch (input) {
            case 1:
                game();
                break;
            case 0:
                printf("退出游戏");
                break;
            default:
                printf("选择错误，请重新选择");
                break;
        }

    } while (input);
}

int main() {
    test();
    return 0;
}
