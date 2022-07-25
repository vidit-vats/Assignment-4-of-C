#include <stdio.h>

int main (int argc, char *argv[]) {

    int i,n;
    printf("Upto how many times you want your table to get printed: ");
    scanf("%d",&n);

    for (i=1;i<=n;i++)
        printf("5*%d=%d\n",i,(5*i));
    
    return 0;
}