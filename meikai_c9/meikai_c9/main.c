//
//  main.c
//  meikai_c9
//
//  Created by stan on 17/2/14.
//  Copyright © 2017年 stan. All rights reserved.
//

#include <stdio.h>

/*演習9-3*/
int str_char(const char str[], int c) {
    unsigned len = 0;
    while (str[len]) {
        if (str[len] == c) {
            return len;
            break;
        }
        len++;
    }
    return (-1);
}
/*演習9-4*/
int str_chnum(const char str[], int c) {
    unsigned len = 0;
    int count = 0;
    while (str[len]) {
        if (str[len] == c) {
            count++;
        }
        len++;
    }
    return count;
}
/*演習9-5*/
void put_string(const char str[]) {
    unsigned i = 0;
    while (str[i]) {
        printf("%c", str[i++]);
    }
}
/*演習9-6*/
void put_stringn(const char str[], int no) {
    while (no--) {
        printf("%s\n", str);
    }
}
/*演習9-7*/
void put_rstring(const char str[]) {
    
    unsigned len = 0;
    while (str[len]) {
        len++;
    }
    while(len > 0) {
        putchar(str[len-1]);
        len--;
    }
    putchar('\n');
}
/*演習9-8*/
void rev_string(char str[]) {
    int i = 0;
    char temp;
    unsigned len = 0;
    while (str[len]) {
        len++;
    }
    while(i < (len/2)) {
        temp = str[i];
        str[i] = str[len-1-i];
        str[len-1-i] = temp;
        i++;
    }
    str[len] = '\0';//配列の末尾はナル文字\0
    printf("%s\n", str);
    
}
/*演習9-9*/
void null_string(char str[]) {
    str[0] = '\0';
}
/*演習9-10*/
void del_digit(char str[]) {
    unsigned i = 0;
    unsigned count = 0;
    while (str[i]) {
        if (str[i] >= '0' && str[i] <= '9') {
            count++;
        } else {
            str[i - count] = str[i];
        }
        i++;
    }
    str[i - count] = '\0';
    printf("%s\n", str);
}

int main(void) {
//    /*演習9-1*/
//    char str[] = "ABC\0DEF";
//    printf("文字列strは%sです。\n", str);
//    printf("sizeof(\"ABC\\0def\") = %u\n",(unsigned)sizeof(str));
    
//    /*演習9-2*/
//    char str[] = "ABC";
//    printf("初期化の値は%sです\n", str);
//    str[0] = '\0';
//    printf("空文字列にした値は%sです。\n", str);
    
//    /*演習9-3*/
//    char str[100];
//    char ch;
//    printf("文字列を入力してください：");
//    scanf("%s", str);
//    printf("検索したい文字を入力してください：");
//    scanf(" %c", &ch);//"spacekey %c"??
//    printf("文字%cが含まれている添字は%dです。\n", ch, str_char(str, ch));
    
//    /*演習9-4*/
//    char str[100];
//    char c;
//    int count;
//    printf("文字列を入力してください：");
//    scanf("%s", str);
//    printf("検索したい文字を入力してください：");
//    scanf(" %c", &c);
//    count = str_chnum(str, c);
//    printf("%cは%d個見つかりました。\n", c,count);
    
//    /*演習9-5*/
//    char str[100];
//    int num;
//    printf("文字列を入力してください：");
//    scanf("%s", str);
//    put_string(str);
//    putchar('\n');
    
//    /*演習9-6*/
//    char str[100];
//    int num;
//    printf("文字列を入力してください：");
//    scanf("%s", str);
//    printf("繰り返した数を入力してください：");
//    scanf("%d", &num);
//    put_stringn(str, num);
//    putchar('\n');
    
//    /*演習9-7*/
//    char str[100];
//    printf("文字列を入力してください：");
//    scanf("%s", str);
//    put_rstring(str);
    
//    /*演習9-8*/
//    char str[100];
//    printf("文字列を入力してください：");
//    scanf("%s", str);
//    rev_string(str);
//    
//    /*演習9-9*/
//    char str[100];
//    printf("文字列を入力してください：");
//    scanf("%s", str);
//    null_string(str);
//    printf("%s\n", str);
    
    
    /*演習9-10*/
    char str[100];
    printf("文字列を入力してください：");
    scanf("%s", str);
    del_digit(str);
    printf("%s\n", str);
    
    return (0);
}


