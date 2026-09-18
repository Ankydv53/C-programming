#include<stdio.h>
int main(){
    int count = 0;
    for(int i=1;i<=3;i++){
        for(int j=1;j<=i;j++){
            count += 1;
            printf(" %d",count);
        }
        printf("\n");
    }
    return 0;
}