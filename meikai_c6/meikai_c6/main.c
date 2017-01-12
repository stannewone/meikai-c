//
//  main.c
//  meikai_c6
//
//  Created by stan on 16/12/14.
//  Copyright © 2016年 stan. All rights reserved.
//

#include <stdio.h>
#define NUMBER 5

/*演習6-1*/
int minof(int x, int y) {
    return ((x < y) ? x : y);
}
/*演習6-2*/
int min3(int x, int y, int z) {
    int min = x;
    if (y < min)
        min = y;
    if (z < min)
        min = z;
    return min;
}
/*演習6-3*/
int cube(int x) {
    return (x * x * x);
}
/*演習6-4*/
int sqr(int x) {
    return (x * x);
}
int pow4(int x) {
    return (sqr(x) * sqr(x));
}
/*演習6-5*/
void alert(int no) {
    while (no-- > 0) {
        printf("\a");
    }
}
/*演習6-6*/
void hello(void) {
    printf("こんにちは。\n");
}
/*演習6-7*/
int min_of(const int vc[], int no) {
    int i;
    int min = vc[0];
    for (i = 1; i < no; i++) {
        if (vc[i] < min) {
            min = vc[i];
        }
    }
    return min;
}
/*演習6-8*/
void rev_intary(int vc[], int no) {
    int i;
    int temp = 0;
    for (i = 0; i < no/2; i++) {
        temp = vc[i];
        vc[i] = vc[no-i-1];
        vc[no-i-1] = temp;
    }
    for (i = 0; i < no; i++) {
        printf("vc[%d]: %d\n", i, vc[i]);
    }
}
/*演習6-9*/
void intary_rcpy(int v1[], const int v2[], int no) {
    int i;
    for (i = 0; i < no; i++) {
        v1[i] = v2[no-i-1];
        printf("v1[%d]: %d\n", i, v1[i]);
    }
}
/*演習6-10*/
void mul(const int ma[2][3], const int mb[3][2], int mc[2][3]) {
    int i, j;
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            mc[i][j] = ma[i][j] * mb[j][i];
        }
    }
}
/*演習6-11*/
void max_tensu(int tensu[5][3]) {
    int i,j = 0;
    int max = 0;
    printf("国語、数学、英語の最高点は");
    for (; j < 3; j++) {
        max = tensu[0][j];
        for (; i < 5; i++) {
            if (max < tensu[i][j]) {
                max = tensu[i][j];
            }
        }
        printf("%d、", max);
    }
    puts("です。");
}
/*演習6-12*/
void heikin_tensu(int tensu[5][3]){
    int i = 0;
    int heikin = 0;
    for (; i < 5; i++) {
        heikin = (tensu[i][0] + tensu[i][1] + tensu[i][2]) / 3;
        printf("学生%dの３教科の平均点は%dです。\n",i,heikin);
    }
}

int main(void) {
//    /*演習6-1*/
//    int nx, ny;
//    printf("二つの整数を入力してください。\n");
//    printf("整数１：");
//    scanf("%d", &nx);
//    printf("整数２：");
//    scanf("%d", &ny);
//    printf("小さい方の値は%dです。\n", minof(nx, ny));
    
//    /*演習6-2*/
//    int nx, ny, nz;
//    printf("三つの整数を入力してください。\n");
//    printf("整数１：");
//    scanf("%d", &nx);
//    printf("整数２：");
//    scanf("%d", &ny);
//    printf("整数３：");
//    scanf("%d", &nz);
//    printf("最も小さい値は%dです。\n", min3(nx, ny, nz));
    
//    /*演習6-3*/
//    int vx;
//    printf("整数を入力してください。\n");
//    printf("整数：");
//    scanf("%d", &vx);
//    printf("vxの三乗値は%dです。\n", cube(vx));
    
//    /*演習6-4*/
//    int vx;
//    printf("整数を入力してください。\n");
//    printf("整数：");
//    scanf("%d", &vx);
//    printf("vxの四乗値%dはです。\n", pow4(vx));
    
//    /*演習6-5*/
//    int num;
//    printf("整数を入力してください：");
//    scanf("%d", &num);
//    alert(num);
    
//    /*演習6-6*/
//    hello();
    
//    /*演習6-7*/
//    int i;
//    int vc[NUMBER] = {0};
//    printf("%d個の整数を入力してください。\n", NUMBER);
//    for (i = 0; i < NUMBER; i++) {
//        printf("vc[%d]: ", i);
//        scanf("%d", &vc[i]);
//    }
//    printf("配列vcの要素の最小値は%dです。\n", min_of(vc, NUMBER));
    
//   /*演習6-8*/
//    int no, i;
//    printf("整数を入力してください：");
//    scanf("%d", &no);
//    int vc[no];
//    printf("%d個の整数を入力してください：\n", no);
//    for (i = 0; i < no; i++) {
//        printf("vc[%d]: ", i);
//        scanf("%d", &vc[i]);
//    }
//    printf("配列vcの並びを逆順にする。\n");
//    rev_intary(vc, no);
    
//    /*演習6-9*/
//    int i;
//    int v1[NUMBER] = {0};
//    int v2[NUMBER] = {0};
//    printf("%d個の整数を入力してください。\n", NUMBER);
//    for (i = 0; i < NUMBER; i++) {
//        printf("v2[%d]: ", i);
//        scanf("%d", &v2[i]);
//    }
//    printf("配列v2の並びを逆順したものを配列v1に格納する。\n");
//    intary_rcpy(v1, v2, NUMBER);
    
//    /*演習6-10*/
//    int i, j;
//    int ma[2][3] = {{1, 2, 3}, {4, 5, 6}};
//    int mb[3][2] = {{6, 3}, {4, 5}, {1, 2}};
//    int mc[2][3] = {0};
//    mul(ma, mb, mc);
//    for (i = 0; i < 2; i++) {
//        for (j = 0; j < 3; j++) {
//            printf("%3d", mc[i][j]);
//        }
//        putchar('\n');
//    }
    
//    /*演習6-11*/
//    int tensu[5][3] =
//    { {88, 90, 73}, {44, 79, 40}, {74, 63, 55}, {95, 89, 99}, {77, 24, 34} };
//    max_tensu(tensu);
    /*演習6-12*/
    int tensu[5][3] =
    { {88, 90, 73}, {44, 79, 40}, {74, 63, 55}, {95, 89, 99}, {77, 24, 34} };
    heikin_tensu(tensu);

    return (0);
    
}
