#include<stdio.h>
int main(){
    int n=5;
    int sum=0;
    for(int i=1;i<=(n*2)-1;i++){
        if(i%2!=0){
        sum=sum+i;
        printf("%d\n",i);
        }
    }
    printf("Sum:%d\n",sum);
   
}
