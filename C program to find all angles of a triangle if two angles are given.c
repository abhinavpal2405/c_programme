#include<stdio.h>
int main()
{
    int a;
    int b;
    printf("ENTER THE TWO ANGLE OFB A TRIANGLE:\n");
    scanf("%d\n%d",&a,&b);
    printf("\nTHIRD ANGLE OF A TRIANGLE IS:%d",180-a-b);
    return 0;
}
