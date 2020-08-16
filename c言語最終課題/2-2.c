#include <stdio.h>
#include <time.h>
#include<stdlib.h>

int main (void){
int i,j,a,n,c,N,x,count=0;
    srand((unsigned)time(NULL));
    
    printf("自然数を入力してください. n:");
    scanf("%d",&n);

    a=(int)(rand()/(RAND_MAX+1.0)*n);
    
    for(i=2;i<=a;i++){
        c==0;
        for(j=2;j<=i;j++){
            if(i%j==0){
                break;
            }
            }
            if(j==i){
                printf("%d, ",i);
            }
        }
    
    printf("\n");

    for(;;){
        printf("乱数は%d以下の自然数です．乱数は何でしょう？\n",n);
        scanf("%d",&N);
    if(a==N){
        printf("正解です！");
        break;
    }else{
        printf("不正解です．");
        }  
    }
        return 0;
}