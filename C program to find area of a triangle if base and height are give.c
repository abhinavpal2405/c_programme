#include<stdio.h>
int main()
{
    int b;
    int h;
    int a;
    printf("ENTER THE BASE OF A TRIANGLE :");
    scanf("%d",&b);
    printf("\nENTER THE HEIGHT OF A TRIANGLE:");
    scanf("%d",&h);
    a=b*h;
    float g=0.5*a;
    printf("\nAREA OF A TRIANGLE:%f",g);
    return 0;
}
