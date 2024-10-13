#include <stdio.h>
#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    const char str[50] = "www.baidu.com";
    char dest[50];
    memcpy(dest, str+1, 6);//代表实际的长度
    cout << dest << endl;
    return 0;

}
