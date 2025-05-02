#include<stdio.h>
    int main(){
        int score;
        scanf("%d",&score);
        if(score>=80){
            printf("正解です。");
        }else{
            printf("不正解です。");
            return 0;
        }
    }


