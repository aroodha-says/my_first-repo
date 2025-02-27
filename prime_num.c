#include<stdio.h>
int a;
int main(){
    printf("Enter a number:");
    scanf("%d",&a);
    int count=0;
    for(int i=1;i<=a/2;i++){
        if(a%i==0){
       count=1;
        }
    }
   if(count==0){
    printf("Prime");
   }else{
    printf("Non-prime");
   }
   return 0;
}
