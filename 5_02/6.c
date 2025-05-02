#include<stdio.h>
int main(void){

    int n,s=0, i;
    scanf("%d",&n);
    for(i=2;i<=n;i+=2){
        s=s+i;
    }
        printf("合計は%dです。\n",s);
    
    return 0;
}