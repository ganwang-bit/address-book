#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<windows.h>
#define MAX 1000
#define NAME 20
#define SEX 5
#define TELE 12
#define ADDR 30
#define AGE 4
typedef struct friend
{
    char name[NAME];
    char age[AGE];
    char sex[SEX];
    char tele[TELE];
    char addr[ADDR];
}F;
void add(F*,int);
void dell(F*,int);
void change(F*,int);
void del(F*,int);
void print(F*,int);
void search(F*,int);
