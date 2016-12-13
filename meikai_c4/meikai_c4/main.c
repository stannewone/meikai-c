//
//  main.c
//  meikai_c4
//
//  Created by stan on 16/12/12.
//  Copyright © 2016年 stan. All rights reserved.
//

#include <stdio.h>

int main(void) {
//    /*演習4-1*/
//    int num;
//    do {
//        printf("非負の整数を入力してください：");
//        scanf("%d", &num);
//        if (num < 0)
//            printf("負の数を入力しないでください。\n");
//        
//    } while (num < 0);
//    printf("%dを逆から読むと", num);
//    do {
//        printf("%d", num % 10);
//        num = num / 10;
//    } while (num > 0);
//    printf("です。\n");
    
//    /*演習4-2*/
//    int num;
//    int dig = 0;
//    do {
//        printf("非負の整数を入力してください：");
//        scanf("%d", &num);
//        if (num < 0)
//            printf("負の数を入力しないでください。\n");
//    } while (num < 0);
//    printf("%dは", num);
//    do {
//        num = num / 10;
//        dig = dig + 1;
//    } while (num > 0);
//    printf("%d桁です。\n", dig);

    
//    /*演習4-3*/
//    int no1, no2;
//    int min, max, sum = 0;
//    printf("二つの整数を入力してください。\n");
//    printf("整数１：");
//    scanf("%d", &no1);
//    printf("整数２：");
//    scanf("%d", &no2);
//    if (no1 < no2) {
//        min = no1;
//        max = no2;
//    }
//    else {
//        min = no2;
//        max = no1;
//    }
//    printf("%d以下%d以上の全整数の和は", min, max);
//    do {
//        sum = sum + min;
//        min = min + 1;
//    } while (min <= max);
//    printf("%dです。\n", sum);
    
//    /*演習4-4*/
//    int num;
//    do {
//        printf("非負の整数を入力してください：");
//        scanf("%d", &num);
//        if (num < 0)
//            printf("負の数を入力しないでください。\n");
//    } while (num < 0);
//    printf("その数を逆から読むと");
//    do {
//        printf("%d", num % 10);
//        num /= 10;
//    } while (num > 0);
//    printf("です。\n");
    
//    /*演習4-5*/
//    int num;
//    int dig = 0;
//    do {
//        printf("非負の整数を入力してください：");
//        scanf("%d", &num);
//        if (num < 0)
//            printf("負の数を入力しないでください。");
//    } while (num < 0);
//    do {
//        num /= 10;
//        dig++;
//    } while (num > 0);
//    printf("その数は%d桁です。\n", dig);

//    /*演習4-6*/
//    int num;
//    printf("整数を入力してください：");
//    scanf("%d", &num);
//    if (num < 0)
//        putchar('\n');
//    else {
//        while (num >= 0) {
//            printf("%d ", num);
//            num--;
//        }
//        putchar('\n');
//    }
    
//    /*演習4-7*/
//    int num;
//    printf("正の数を入力してください：");
//    scanf("%d", &num);
//    while (num > 0)
//        printf("%d ", num--);
//    putchar('\n');
    
//    /*演習4-8*/
//    int num;
//    int i = 1;
//    printf("正の整数を入力してください：");
//    scanf("%d", &num);
//    if (num >= 0) {
//        while (i <= num) {
//            printf("%d ", i);
//            i++;
//        }
//        putchar('\n');
//    }
    
//    /*演習4-9*/
//    int num;
//    printf("整数を入力してください：");
//    scanf("%d", &num);
//    int i = 0;
//    while (i*2 <= num) {
//        printf("%d ", i*2);
//        i++;
//    }
//    putchar('\n');
    
//    /*演習4-10*/
//    int num;
//    int i = 2;
//    printf("整数を入力してください：");
//    scanf("%d", &num);
//    while (i <= num) {
//        printf("%d ", i);
//        i *= 2;
//    }
//    putchar('\n');
    
//    /*演習4-11*/
//    int num;
//    printf("正の整数を入力してください：");
//    scanf("%d", &num);
//    if (num > 0) {
//        while (num-- > 0) {
//            printf("*\n");
//        }
//    }
    
//    /*演習4-12*/
//    int sum = 0;
//    for (int i = 1; i <= 5; i++) {
//        sum += i;
//    }
//    printf("1から5までを足した値は%dです。\n", sum);
    
//    /*演習4-13*/
//    int num;
//    printf("整数を入力してください：");
//    scanf("%d", &num);
//    for (int i = 1; i <= num; i++) {
//        printf("%d", i % 10);
//    }
//    putchar('\n');

    
//    /*演習4-14*/
//    int min, max, itvl;
//    printf("何cmから：");
//    scanf("%d", &min);
//    printf("何cmまで：");
//    scanf("%d", &max);
//    printf("何cmごと：");
//    scanf("%d", &itvl);
//    for (; min <= max; min += itvl) {
//        printf("%dcm  %.2fkg\n", min, (double)((min - 100) * 0.9));
//    }
    
//    /*演習4-15*/
//    int i, j;
//    printf("  |");
//    for (i = 1; i <= 9; i++) {
//        printf("%3d", i);
//    }
//    putchar('\n');
//    printf("----");
//    for (i = 0; i < 9; i++) {
//        printf("---");
//    }
//    putchar('\n');
//    for (i = 1; i <= 9; i++) {
//        printf("%d |", i);
//        for (j = 1; j <= 9; j++) {
//            printf("%3d", i * j);
//        }
//        putchar('\n');
//    }
    
//    /*演習4-16*/
//    printf("長方形を作りましょう。\n");
//    int width, height, a, b;
//    int i, j;
//    printf("一辺（その１）：");
//    scanf("%d", &a);
//    printf("一辺（その２）：");
//    scanf("%d", &b);
//    if (a > b) {
//        width = a;
//        height = b;
//    } else {
//        width = b;
//        height = a;
//    }
//    for (i = 0; i < height; i++) {
//        for (j = 0; j < width; j++) {
//            putchar('*');
//        }
//        putchar('\n');
//    }
    
//    /*演習4-17*/
//    int i, j, ln;
//    printf("何段ですか：");
//    scanf("%d", &ln);
//    for (i = 0; i < ln; i++) {
//        for (j = 0; j < i; j++) {
//            putchar(' ');
//        }
//        for (j = 0; j < ln-i; j++) {
//            putchar('*');
//        }
//        putchar('\n');
//    }
    /*演習4-18*/
    int i, j, ln;
    printf("何段ですか：");
    scanf("%d", &ln);
    for (i = 1; i <= ln; i++) {
        for (j = 1; j <= ln-i; j++) {
            putchar('$');
        }
        for (j = 1; j <= i; j++) {
            putchar('*');
        }
        for (j = 1; j <= i-1; j++) {
            putchar('*');
        }
        putchar('\n');
    }
//    
//    int ln;
//    printf("奇数：");
//    scanf("%d", &ln);
//    int half = ln/2 + 1;
//    for (int i = 1; i <= half; i++) {
//        for (int j = 1; j <= ln; j++) {
//            if (j == half + (i-1) || j == half - (i - 1)) {
//                putchar('*');
//            }
//            else {
//                putchar(' ');
//            }
//        }
//        putchar('\n');
//    }
//    for (int i = half-1; i >= 1; i--) {
//        for (int j = 1; j <= ln; j++) {
//            if (j == half + (i-1) || j == half - (i - 1)) {
//                putchar('*');
//            }
//            else {
//                putchar(' ');
//            }
//        }
//        putchar('\n');
//    }
    return (0);
    
}
