#include <stdio.h>

double sol1(double x[0],int n){
    int i;
    double sx=0;
    for (i=0;i<n;i++){
        sx=sx+x[i];
    }
    printf("Σx = %f\n",sx);
    return sx;
}

double sol2(double y[0],int n){
    int i;
    double sy=0;
    for (i=0;i<n;i++){
        sy=sy+y[i];
    }
    printf("Σy = %f\n",sy);
    return sy;
}

double sol3(double x[0],int n){
    int i;
    double x_2=0;
    for (i=0;i<n;i++){
        x_2=x_2+x[i]*x[i];
    }
    printf("Σx^2 = %f\n",x_2);
    return x_2;
}

double sol4(double x[0],double y[0],int n){
    int i;
    double xy=0;
    for (i=0;i<n;i++){
        xy=xy+x[i]*y[i];
    }
    printf("Σxy = %f\n",xy);
    return xy;
}




int main (void){
    int i,j,n;
    double x[100],y[100],s[4],a,b;

    printf("データ数を入力してください n :");
    scanf("%d",&n);

    printf("xの値を入力してください\n");
    

    for(i=0;i<n;i++){
        printf("x%d=",i+1);
        scanf("%lf",&x[i]);
    }

    printf("\n");

    for(i=0;i<n;i++){
        printf("x%d = %f\n",i+1, x[i]);
    }

    printf("\n");
    printf("yのデータを入力してください\n");

    for(j=0;j<n;j++){
        printf("y%d=",j+1);
        scanf("%lf",&y[j]);
    }

    printf("\n");
    
    for(j=0;j<n;j++){
        printf("y%d = %f\n",j+1, y[j]);
    }

    printf("\n");

    s[0]=sol1(x,n);
    s[1]=sol2(y,n);
    s[2]=sol3(x,n);
    s[3]=sol4(x,y,n);

    a=(s[0]*s[1]-n*s[3])/(s[0]*s[0]-n*s[2]);
    b=(s[0]*s[3]-s[2]*s[1])/(s[0]*s[0]-n*s[2]);
    
    printf("\n");
    printf("最小二乗法結果\n");
    printf("傾き a = %f\n",a);
    printf("切片 b = %f\n",b);

    if(b>0){
        printf("y = %fx + %f",a,b);
    }else{
        printf("y = %fx %f",a,b);
    }

    return 0;
}