#ifndef MANAGE_H
#define MANAGE_H
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include <conio.h>
typedef struct yuangong {
	char name[20];
	char zhigonghao[20];
	char kahao[20];
	int month;
	float yingfa;
	float shuidian;
	float shui;
	float zashu;
	float shiji;

}Ren;
Ren yuangong[1000],du[1000];
void shuru(Ren* p);
void save(Ren* p, int n);
void denglumenu();
void OPmenu();
void chOPmi();
int duqu(Ren *p);//∑µªÿ»À ˝
void nameRead();
void kaRead();
void lookMenu();
void chaxunmenu1();
void nameSeek();
void chaxunmenu();
void kaSeek();
void yuanMenu();
void yuancount();
void kaSeek1();
void nameSeek1();
void dcMenu();
void opgai();
void opshan();
void processMenu();
void opcount();
void countliulan();
void opsort();
void writepai();
void readpai();
#endif