#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    for( int i=1;i<=n;i++){
        for( int j=1;j<=n-1;j++){
        printf(" \n");
        }
        {
        for( int k=1;k<=i*2-1;k++)
        printf("*");
        }
        }
    }
