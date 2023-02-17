//
// Created by Apple on 2023/2/17.
//
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROW 9
#define COL 9
#define ROWS ROW+2
#define COLS COL+2
#define EASY_COUNT 10
#define MID_COUNT 20
#define HARD_COUNT 30

//函数声明
void InitBoard(char board[ROWS][COLS],int rows,int cols,char set);
void DisplayBoard(char board[ROWS][COLS],int row,int col);
void SetMine(char mine[ROWS][COLS],int row,int col);
void FindMine(char mine[ROWS][COLS],char show[ROWS][COLS],int row, int col);

#ifndef MINESWEEPER_GAME_H
#define MINESWEEPER_GAME_H

#endif //MINESWEEPER_GAME_H
