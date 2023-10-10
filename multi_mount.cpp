#include<stdio.h>
int main(){
    int n,a[5],m[210]={0},indx=0,Mc=0;
    bool e=false;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        if(a[i]>Mc)Mc=a[i];
    }
    for(int y=0;y<n;y++){
        for(int c=1;c<=a[y];c++){
            m[indx]=c;
            indx++;
        }
        for(int d=a[y];d>=1;d--){
            m[indx]=d;
            indx++;
        }
    }
    for(int g=Mc;g>=1;g--){
        for(int f=0;f<indx;f++){
            if(m[f]==g){
                if(m[f]==1)e=!e;
                if(m[f]==1&&e==true) printf("/");
                else if(m[f]==1&&e==false) printf("\\");
                else if(m[f]<=m[f+1]) printf("/");
                else printf("\\");
            }
            else printf(".");
        }
        printf("\n");
    }
}