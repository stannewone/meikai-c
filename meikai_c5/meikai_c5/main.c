//
//  main.c
//  meikai_c5
//
//  Created by stan on 16/12/13.
//  Copyright © 2016年 stan. All rights reserved.
//

#include <stdio.h>
int main(void) {
//    /*演習5-1*/
//    int i;
//    int vc[5];
//    for (i = 0; i < 5; i++) {
//        vc[i] = i;
//    }
//    for (i = 0; i < 5; i++) {
//        printf("vc[%d] = %d\n", i, vc[i]);
//    }
    
//    /*演習5-2*/
//    int i;
//    int vc[5];
//    for (i = 0; i < 5; i++) {
//        vc[i] = 5 - i;
//    }
//    for (i = 0; i < 5; i++) {
//        printf("vc[%d] = %d\n", i, vc[i]);
//    }
    
//    /*演習5-3*/
//    int i;
//    int vc[5] = {5,4,3,2,1};
//    for (i = 0; i < 5; i++) {
//        printf("vc[%d]: %d\n", i, vc[i]);
//    }
    
//    /*演習5-4*/
//    int i;
//    int va[5] = {15, 20, 30};
//    int vb[5];
//    
//    for (i = 0; i < 5; i++) {
//        vb[i] = va[5-i-1];
//    }
//    puts(" va  vb");
//    puts("-------");
//    for (i = 0; i < 5; i++) {
//        printf("%3d %3d\n", va[i], vb[i]);
//    }
    
//    /*演習5-5*/
//    int i;
//    int vx[8];
//    for (i = 0; i < 8; i++) {
//        printf("vx[%d]: ", i);
//        scanf("%d", &vx[i]);
//    }
//    for (i = 0; i < 4; i++) {
//        int temp = vx[i];
//        vx[i] = vx[7-i];
//        vx[7-i] = temp;
//    }
//    for (i = 0; i < 8; i++) {
//        printf("vx[%d]=%d\n", i, vx[i]);
//    }
    
    /*演習5-6*/
    double a;
    int b;
    a = b = 1.5;
    printf("aの値は：%f、bの値は：%d\n", a, b);
    printf("代入式b=1.5を評価した値は、aに代入される。\nbはint型なので、bの値は整数1である。\n整数1をdouble型のaに代入する場合に、結果は1.000000である。\n");
    
    /*演習5-7*/
    int i, j;
    int ma[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int mb[3][2] = {{1, 5}, {5, 3}, {8, 1}};
    int mc[2][3] = {0};
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            mc[i][j] = ma[i][j] * mb[j][i];
        }
    }
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            printf("%3d", mc[i][j]);
        }
        putchar('\n');
    }
    return (0);
}
