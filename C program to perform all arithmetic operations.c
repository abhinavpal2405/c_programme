#include<stdio.h>
int main()
{
    int  m;
    int n;
    int i;
     printf("\nENTER THE FIRST NUMBER:");
    scanf("%d",&m);
    printf("\nENTER THE SECOND NUMBER:");
    scanf("%d",&n);
    printf("ENTER WHAT YOU WANT TO PERFORM:\n");
    printf("1. ADDITION\n2. SUBTRACTON\n3. MULTIPLICATIOM\n4. DIVISION\n ");
    scanf("%d",&i);
    switch(i){
        case 1:{
            printf("RESULT%d",m+n);
            break;
        }
        case 2:{
            printf("RESULT%d",m-n);
            break;
        }
        case 3:{
            printf("RESULT%d",m*n);
            break;
        }
        case 4:{
            printf("RESULT%d",m/n);
            break;
        }
    }
    return 0;
}


