//
// Created by amiba on 2023/3/14.
//

#ifndef SIMPLE_BOOK_MANAGEMENT_PROGRAM_DATAMANAGEMENT_H
#define SIMPLE_BOOK_MANAGEMENT_PROGRAM_DATAMANAGEMENT_H

#include "stdio.h"

extern FILE *fp;    //文件指针
extern char fileName[100]; //文件名

//书籍信息结构体
typedef struct dateBook{
    char bookName[80];  //书名
    char bookNumber[10];    //图书编号

}DATEU;

#endif //SIMPLE_BOOK_MANAGEMENT_PROGRAM_DATAMANAGEMENT_H
