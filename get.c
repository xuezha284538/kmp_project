#include <stdio.h>
#include "get.h"

/**
 * @brief 从标准输入读取字符串
 */
int get(char *p, int len)
{
    while (1)
    {
        if (len > 0)
        {
            if (p[len - 1] == '\n')
            {
                p[len - 1] = '\0';
                break;
            }
        }
        p[len++] = getchar();
    }
    return len - 1;
}
