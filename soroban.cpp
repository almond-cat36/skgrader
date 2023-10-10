#include<stdio.h>
int main(){
    int n,temp;
    scanf("%d",&n);
    if(n==0)printf("O-|-OOOO");
    else for(int i=1;n%i!=n;i*=10){
        temp=n%(i*10)/i;
        if(temp>=5){
            printf("-O|");
            for(int i=0;i<temp-5;i++)printf("O");
            printf("-");
            for(int i=0;i<9-temp;i++)printf("O");
            }
        else{
        printf("O-|");
        for(int i=0;i<temp;i++)printf("O");
        printf("-");
        for(int i=0;i<4-temp;i++)printf("O");        
        }
        printf("\n");
    }
}