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
#define list_size 100           //size of list
#define listincrement 20        //increment of list

//创建列表
typedef struct seq{
    int *elem;
    int length;
    int listsize;
}seqlist;

//初始化列表
void init_seq(seqlist l)
{
    l.elem=NULL;
    l.elem=(int *)malloc(list_size * sizeof(int));
    if (!l.elem) {
        exit(1);
    }
    
    l.length=0;
    l.listsize = list_size;
    
}

//打印列表
void prf_seqlist(seqlist l)
{
    int j;
    for(j=1;j <=l.length;j++)        //? is (*l).length?
    {
        printf("%d",*l.elem);          //must use '*l' not 'l'
        l.elem++;
    }
    printf("\n");
}
////
//列表插入数据
void listinsert(seqlist l,int i,int e)
{
int *q,*newbase,*p;
    
if (i < 1 || i > l.length+1)                 //out of size

    if (l.length >= l.listsize)
    {
        newbase = (int *)realloc(l.elem, (l.listsize + listincrement)*sizeof(int));                   //space of new list
        if(!newbase) exit(1);
        l.elem = newbase;
        l.listsize += listincrement;       //listsize increat
    }
    
    q = &(l.elem[i-1]);                                    // i is a position where insert
    for (p = &(l.elem[l.length-1]) ; p >= q; --p)
        {
            *(p+1) = *p;
        }//插入点后面的数据往后面移动
    *q = e;                                 //insert data
    ++l.length;
}


int main()
{   seqlist *l;
    
    // prf_seqlist(*l);
    init_seq(*l);
    // prf_seqlist(*l);
    listinsert(*l,5,5);                      //listinsert(seqlist *l,int i,int e)
    prf_seqlist(*l);
}











