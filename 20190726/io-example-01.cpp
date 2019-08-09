//
// Created by jaco.ryu on 2019-07-26.
//
#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main() {
    FILE *fp = nullptr;
    fp = fopen("/Users/jaco.ryu/CLionProjects/effective-cpp-example/sample1.txt", "w");

    //printf("%d\n", fp);

    if(fp == NULL) printf("파일 읽기 실패");
    else {
        printf("파일 읽기 성공");
        fprintf(fp, "dsfdsf");
        fclose(fp);
    }

    printf("\n");

    fp = fopen("/Users/jaco.ryu/CLionProjects/effective-cpp-example/sample1.txt", "r");
    int c;
    while((c = fgetc(fp)) != EOF) {
        putchar(c);
    }
    fclose(fp);

}

