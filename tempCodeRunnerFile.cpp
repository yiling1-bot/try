#include <stdio.h>
#include <stdlib.h>

int main() {
    int num;
    printf("请输入一个整数：");
    scanf("%d", &num);

    // 将整数转换为二进制字符串
    char binary[33]; // 32位二进制数加上一个终止符
    itoa(num, binary, 2);

    printf("二进制表示：%s\n", binary);

    return 0;
}

