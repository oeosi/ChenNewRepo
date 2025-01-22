#include <stdio.h>
#define MAX_NUM 100
int main(void) 
{
    int nums[MAX_NUM];
    int numSize = 0;
    while(scanf("%d",nums+numSize)){
        numSize++;
        printf("numSize = %d\n", numSize);
    }
    for (int i = 0; i < numSize; i++) {
        printf("%d ", *(nums + i));
    }
    return 0;
}
