#include <stdio.h>
#include <math.h>

struct data{
    int score[100];
    char name[10][100];
    double dev[100]; 
};

struct data double average (struct data score,int n){
    int i,sum=0;
    double ave;

    for(i=0;i<n;i++){
        sum=sum+data.score[i];
    }

    ave=(double)sum/n;

    return ave;
}
struct data double dis(double ave,struct data score,int n){
    int i;
    double sum=0,dispersion,p[100];
    
    for(i=0;i<n;i++){
        p[i]=pow(data.score-ave,2);
        sum=sum+p[i];
    }
    dispersion=sum/n;
    return dispersion;
}


int main(void){
    struct data a;
    int i,n;
    double ave,dispersion,stdiv;

    printf("人数を入力してください : ");
    scanf("%d",&n);

    for(i=0;i<n;i++){
    printf("氏名:%s  点数:%d");
    scanf("%s,%d",&a.name[i],&score[i]);
    }
    
    ave=average(a.score,n);

    printf("\n");

    dispersion=dis(ave,a.score[i],n);

    stdiv=pow(dispersion,0.5);

    for(i=0;i<n;i++){
        a.dev=(a.score-ave)*10/stdiv;
        if(a.score>ave){
            a.dev=a.dev+50;
        }else if(a.score<ave){
            a.dev=50-fabs(a.dev);
        }else if(a.score=ave){
            a.dev=50;
        }
        printf("%s 偏差値:%f\n",a.name,a.dev);
    }

    
    return 0;
}