//
//  main.c
//  meikai_c1
//
//  Created by stan on 16/12/9.
//  Copyright © 2016年 stan. All rights reserved.
//

#include <stdio.h>

int main(void) {
    /*演習1-1*/
    printf("15から37を引いた値は%dです。\n", 15-37);
    /*演習1-2*/
    printf("風\n林\n火\n山\n");
    /*演習1-3*/
    printf("もしもし。\nこんにちは。\n\nそれでは。\n");
    
//    /*演習1-4*/
//    int no;
//    printf("正数を入力してください：");
//    scanf("%d", &no);
//    printf("その数に10を加えると%dです。\n", no + 10);
//    /*演習1-5*/
//    printf("その数から10を減じると%dです。\n", no - 10);
    
    /*演習1-6*/
    puts("風");
    puts("林");
    puts("火");
    puts("山");
    /*演習1-7*/
    int no1, no2, no3;
    int seki;
    int wa;
    puts("二つの正数を入力してください。");
    printf("整数１：");
    scanf("%d", &no1);
    printf("整数２：");
    scanf("%d", &no2);
    seki = no1 * no2;
    printf("それらの積は%dです。\n", seki);
    printf("整数３：");
    scanf("%d", &no3);
    wa = no1 + no2 + no3;
    printf("それらの和は%dです。\n", wa);
    return (0);
    

}
