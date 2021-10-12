#include <stdio.h>

int main()
{
    int count1, count2;
    scanf("%d %d", &count1, &count2);
    int def = count1 - count2;
    for (int i = 0; i < count1; i++) {
        for (int j = 0; j < count1; j++) {
            if (((i < count2) && (j + i < count2)) || ((j >= def) && (j - i >= def)) || ((i >= def) && (i - j >= def)) || ((j >= count1 - 1 - (i - def)) && (i >= def) && (j >= def))) 
            {
                printf("-");
            }
            else {
                printf("*");
            }
        }        printf("\n");
    }
}