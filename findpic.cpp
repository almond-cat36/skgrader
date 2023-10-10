#include<stdio.h>
#include<math.h>
int main(){
    int n,a,c,cnt=0,b,srt,sum,idx,ndx,ans[2000],dgr;
    char arr[110];
    scanf("%d",&n);
    scanf("%s",arr);
    for(a=0;arr[a];a++)cnt++;
    int length=cnt/n;
    idx=length*4;
    for(a=0;a<n;a++){
        srt=a*length;
        sum=0;
        ndx=idx;
        dgr=0;
        for(b=srt+length-1;b>=srt;b--){
            if(arr[b]>=65)sum+=(arr[b]-55)*pow(16,dgr);
            else sum+=(arr[b]-48)*pow(16,dgr);
            dgr++;
            }
        while(sum>0){
            ans[ndx]=sum%2;
            ndx--;
            sum/=2;
        }
        for(c=ndx;c>0;c--)ans[c]=0;
        //
        for(c=1;c<=length*4;c++){
            if(ans[c]==1)printf("*");
            else printf(".");
        }
        printf("\n");
    }
}
