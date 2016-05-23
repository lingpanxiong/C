//
//  main.c
//  cstr
//
//  Created by iront on 5/23/16.
//  Copyright © 2016 iront. All rights reserved.
//
#include <stdlib.h>
#include <stdio.h>
//#include <mm_malloc.h>
#define list_size 100
#define listincrement 20

//创建列表
typedef struct list{
    int *elem;
    int length;
    int listsize;
}seqlist;

//初始化列表
int init_seq(seqlist *l)
{
    l->elem=(int *)malloc(list_size * sizeof(int));
    if (!l->elem) {
        exit(1);
    }
    l->length=0;
    l->listsize = list_size;
    return 0;
}

//打印列表
void prf_seqlist(seqlist *l)
{
    int j;
    for(j=1;j <=l->length;j++)        //? is (*l).length?
    {
        printf("%d",*l->elem);          //must use '*l' not 'l'
        l->elem++;
    }
    printf("\n");
}
////
//列表插入数据
void listinsert(seqlist *l,int i,int e)
{
int *q,*newbase,*p;
    
if (i < 1 || i > l->length+1)
    //return 0;
    if (l->length >= l->listsize)
    {
        newbase = (int *)realloc(l->elem, (l->listsize + listincrement)*sizeof(int));
        if(!newbase) exit(1);
        l->elem = newbase;
        l->listsize += listincrement;
    }
    q = &(l->elem[i-1]);
    for (p = &(l->elem[l->length-1]) ; p >= q; --p)
        {
            *(p+1) = *p;
        }//插入点后面的数据往后面移动
    *q = e;
    ++l->length;
    //return 0;
}

int main()
{   seqlist *l;
    listinsert(l,5,5);
    prf_seqlist(l);
    //return 0;
}











