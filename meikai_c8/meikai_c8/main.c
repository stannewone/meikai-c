//
//  main.c
//  meikai_c8
//
//  Created by stan on 17/1/16.
//  Copyright © 2017年 stan. All rights reserved.
//

#include <stdio.h>
/*演習8-1*/
#define diff(x, y) (((x) < (y)) ? (y-x):(x-y))
/*演習8-2*/
#define max(x, y) (((x) > (y)) ? (x) : (y))
/*演習8-3*/
#define swap(type, a, b) {type temp; temp = a; a = b; b = temp;}
/*演習8-5*/
int fact(int n) {
    int i;
    int temp = 1;
    for (i = 1; i <= n; i++) {
        temp *= i;
    }
    return (temp);
}
/*演習8-6*/
int combination(int n, int r) {
    if (n == r) {
        return (1);
    }
    else if (r == 0) {
        return (1);
    }
    else {
        return (combination(n-1, r-1)+combination(n-1, r));
    }
}

int main(void) {


//    /*演習8-1*/
//    int vx, vy;
//    printf("二つの整数を入力してください。\n");
//    printf("整数１：");
//    scanf("%d", &vx);
//    printf("整数２：");
//    scanf("%d", &vy);
//    printf("二つの値の差は%dです。\n", diff(vx, vy));
    
    /*演習8-2*/
    /*
     max(max(a,b), max(c,d))は以下のように展開される。
     ((((a) > (b)) ? (a) : (b)) > (((c) > (d)) ? (c) : (d))) ?
     (((a) > (b)) ? (a) : (b)) : (((c) > (d)) ? (c) : (d))
     max(max(max(a,b),c),d)は以下のように展開される。
     ((((((a) > (b)) ? (a) : (b)) > (c)) ? (((a) > (b)) ? (a) : (b)) : (c)) > (d)) ?
     (((((a) > (b)) ? (a) : (b)) > (c)) ? (((a) > (b)) ? (a) : (b)) : (c)) : (d)
     */
    
//    /*演習8-3*/
//    int a = 5, b = 10;
//    double c = 5.03 ,d = 9.8;
//    
//    printf("a = %d, b = %d\n", a, b);
//    swap(int, a, b);
//    printf("a = %d, b = %d\n", a, b);
//    
//    printf("c = %f, d = %f\n", c, d);
//    swap(double, c, d);
//    printf("c = %f, d = %f\n", c, d);
    
    /*演習8-4*/
    
//    /*演習8-5*/
//    int nx;
//    printf("非負の整数を入力してください：");
//    scanf("%d", &nx);
//    printf("%dの階乗は%dです。\n",nx, fact(nx));
    
//    /*演習8-6*/
//    int xn, xr;
//    puts("非負の二つの整数を入力してください：");
//    printf("n：");
//    scanf("%d", &xn);
//    printf("r：");
//    scanf("%d", &xr);
//    printf("%dC%d = %d\n", xn, xr, combination(xn, xr));
    
//    /*演習8-7 ctrl+Dを押す*/
//    int i, ch;
//    int cnt[10] = {0};
//    while (1) {
//        ch = getchar();
//        if (ch == EOF) {
//            break;
//        }
//        if (ch >= '0' && ch <= '9') {
//            cnt[ch - '0']++;
//        }
//    }
//    puts("数字文字の出現回数");
//    for (i = 0; i < 10; i++) {
//        printf("'%d' : ", i);
//        for (;cnt[i] >= 0; cnt[i]--) {
//            putchar('*');
//        }
//        putchar('\n');
//    }
    
    /*演習8-8*/
    //初期化は必要です！！
    int ch;
    int n = 0;
    while ((ch = getchar()) != EOF) {
        if (ch == '\n') {
            n++;
        }
    }
    printf("行数は%dです。\n", n);
  
    return 0;
}
