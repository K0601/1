#include <stdio.h>
#include <math.h>

double average (int score[100],int n){
    int i,sum=0;
    double ave;

    for(i=0;i<n;i++){
        sum=sum+score[i];
    }

    ave=(double)sum/n;

    return ave;
}
double dis(double ave,int score[100],int n){
    int i;
    double sum=0,dispersion,p[100];
    
    for(i=0;i<n;i++){
        p[i]=pow(score[i]-ave,2);
        sum=sum+p[i];
    }
    dispersion=sum/n;
    return dispersion;
}


int main(void){
    int i,n,score[100];
    double ave,dispersion,stdiv,dev[100];

    printf("人数を入力してください : ");
    scanf("%d",&n);

    for(i=0;i<n;i++){
    printf("%d人目の点数を入力してください : ",i+1);
    scanf("%d",&score[i]);
    }
    
    ave=average(score,n);

    printf("\n");

    dispersion=dis(ave,score,n);

    stdiv=pow(dispersion,0.5);

    for(i=0;i<n;i++){
        dev[i]=(score[i]-ave)*10/stdiv;
        if(score[i]>ave){
            dev[i]=dev[i]+50;
        }else if(score[i]<ave){
            dev[i]=50-fabs(dev[i]);
        }else if(score[i]=ave){
            dev[i]=50;
        }
        printf("%d人目の偏差値は%f\n",i+1,dev[i]);
    }

    
    return 0;
}