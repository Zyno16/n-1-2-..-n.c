#include <stdio.h>
#include <stdlib.h>

int main()
{int n;
int f,i;
    printf("enter n:number");
    scanf("%d",&n);
    if(n<0){printf("enter positive number please");
    }
    if(n==0){printf("result is 1");}
    else
       {

        f=1;
        for(i=1;i<=n;i++)
         f=f*i;
        printf("%d",f);}




    return 0;
}
