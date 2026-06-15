#include<stdio.h>
int main(){
    int k=1, n;
    printf("enter the value : ");
    scanf("%d",&n);
    if(n>10){
        printf("Error: ");
    }
    else{
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            printf("%d ",k++);
        }
        printf("\n");
    }
    }
    return 0;
}
