//
//  main.c
//  meikai_c2
//
//  Created by stan on 16/12/10.
//  Copyright © 2016年 stan. All rights reserved.
//

#include <stdio.h>

int main(void) {
//    /*演習2-1*/
//    int no1, no2;
//    puts("二つの整数を入力してください。");
//    printf("整数A：");
//    scanf("%d", &no1);
//    printf("整数B：");
//    scanf("%d", &no2);
//    printf("Aの値はBの%d%%です。\n", 100 * no2 / no1);
//    /*演習2-2*/
//    printf("それらの和は%dで積は%dです。\n", no1 + no2, no1 * no2);
//    /*演習2-3*/
//    double vx;
//    printf("実数を入力してください：");
//    scanf("%lf", &vx);
//    printf("あなたは%fと入力しましたね。\n", vx);
    
//    /*演習2-4*/
//    int i = 20;
//    float p = 2.0;
//    printf("i+p=%f\n", i+p);
//    printf("i+2.2=%f\n", i+2.2);
//    printf("i/p=%f\n", i/p);
//    printf("i/2.2=%f\n", i/2.2);
    
//    /*演習2-5*/
//    int vx, vy;
//    puts("二つの整数を入力してください。");
//    printf("整数A: ");
//    scanf("%d", &vx);
//    printf("整数B: ");
//    scanf("%d", &vy);
//    printf("Aの値はBの%f%%です。\n", (float)vx/vy*100);
    
    /*演習2-6*/
    double length, weight;
    printf("身長を入力してください：");
    scanf("%lf", &length);
    weight = (length-100)*0.9;
    printf("標準体重は%.1fです。/n", weight);
    
    return (0);
    
    
}
