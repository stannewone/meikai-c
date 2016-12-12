//
//  main.c
//  meikai_c3
//
//  Created by stan on 16/12/10.
//  Copyright © 2016年 stan. All rights reserved.
//

#include <stdio.h>

int main(void) {
//    /*演習3-1*/
//    int vx, vy;
//    puts("二つの整数を入力してください。");
//    printf("整数A: ");
//    scanf("%d", &vx);
//    printf("整数B: ");
//    scanf("%d", &vy);
//    if (vx%vy)
//        puts("BはAの約数ではありません。");
//    else
//        puts("BはAの約数です。");
    
//    /*演習3-2*/
//    printf("%d\n", 2==2);
//    printf("%d\n", 2==3);
//    printf("%d\n", 2!=2);
//    printf("%d\n", 2!=3);
//    printf("%d\n", 2>3);
//    printf("%d\n", 2<3);
    
//    /*演習3-3*/
//    printf("整数を入力してください：");
//    int vx;
//    scanf("%d", &vx);
//    if (vx>=0)
//        printf("絶対値は%dです。", vx);
//    else
//        printf("絶対値は%dです。\n", -vx);
    
//    /*演習3-4*/
//    int vx, vy;
//    puts("二つの整数を入力してください。");
//    printf("整数A: ");
//    scanf("%d", &vx);
//    printf("整数B: ");
//    scanf("%d", &vy);
//    if (vx == vy)
//        printf("AとBは等しいです。\n");
//    else if (vx > vy)
//        printf("AはBより大きいです。\n");
//    else
//        printf("AはBより小さいです。\n");

//    /*演習3-5*/
//    int n1, n2, n3, min;
//    puts("三つの整数を入力してください。");
//    printf("整数1: ");
//    scanf("%d", &n1);
//    printf("整数2: ");
//    scanf("%d", &n2);
//    printf("整数3: ");
//    scanf("%d", &n3);
//    min = n1;
//    if (n2 < min)
//        min = n2;
//    if (n3 < min)
//        min = n3;
//    printf("最小値は%dです。\n", min);
    
//    /*演習3-6*/
//    int n1, n2, n3, n4, max;
//    puts("三つの整数を入力してください。");
//    printf("整数1: ");
//    scanf("%d", &n1);
//    printf("整数2: ");
//    scanf("%d", &n2);
//    printf("整数3: ");
//    scanf("%d", &n3);
//    printf("整数3: ");
//    scanf("%d", &n4);
//    max = n1;
//    if (n2 > max)
//        max = n2;
//    if (n3 > max)
//        max = n3;
//    if (n4 > max)
//        max = n4;
//    printf("最大値は%dです。\n", max);
    
//    /*演習3-7*/
//    int n1, n2;
//    puts("二つの整数を入力してください。");
//    printf("整数１：");
//    scanf("%d", &n1);
//    printf("整数２：");
//    scanf("%d", &n2);
//    if (n1 > n2)
//        printf("それらの差は%dです。\n", n1 - n2);
//    else
//        printf("それらの差は%dです。\n", n2 - n1);
    
//     /*演習3-8*/
//    int n1, n2, n3, min;
//    puts("三つの整数を入力してください。");
//    printf("整数1: ");
//    scanf("%d", &n1);
//    printf("整数2: ");
//    scanf("%d", &n2);
//    printf("整数3: ");
//    scanf("%d", &n3);
//    min = n1;
//    min = (n2 < min) ? n2 : min;
//    min = (n3 < min) ? n3 : min;
//    printf("最小値は%dです。\n", min);
    
//    /*演習3-9*/
//    int n1, n2, n3;
//    puts("三つの整数を入力してください。");
//    printf("整数A: ");
//    scanf("%d", &n1);
//    printf("整数B: ");
//    scanf("%d", &n2);
//    printf("整数C: ");
//    scanf("%d", &n3);
//    if(n1 == n2 && n1 == n3 && n2 == n3)
//        printf("三つの値は等しいです。");
//    else if(n1 == n2 || n1 == n3 || n2 == n3)
//        printf("二つの値は等しいです。\n");
//    else
//        printf("三つの値は異なります。\n");
    
//    /*演習3-10*/
//    int n1, n2;
//    puts("二つの整数を入力してください。");
//    printf("整数A: ");
//    scanf("%d", &n1);
//    printf("整数B: ");
//    scanf("%d", &n2);
//    if(n1 - n2 < 10 || n1 - n2 > -10)
//        printf("それらの差は10以下です。\n");
//    else
//        printf("それらの差は11以上です。\n");
    
//    /*演習3-11*/
//    int no;
//    printf("整数を入力してください：");
//    scanf("%d", &no);
//    switch (no) {
//        case 0: printf("その数は偶数です。\n"); break;
//        default: printf("その数は奇数です。\n"); break;
//    }
    /*演習3-12*/
    int month;
    printf("何月ですか：");
    scanf("%d", &month);
    switch(month) {
        case 3 :
        case 4 :
        case 5 : printf("春です。\n"); break;
        case 6 :
        case 7 :
        case 8 : printf("夏です。\n"); break;
        case 9 :
        case 10 :
        case 11 : printf("秋です。\n"); break;
        case 12 :
        case 1 :
        case 2 : printf("冬です。\n"); break;
        default: printf("そんな月はありませんよ！！\n"); break;
    }
    
    return (0);
   
}
