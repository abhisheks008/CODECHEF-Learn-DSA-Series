#include<stdio.h>
int printReverse(int i){
     int x=0;
     while(i % 10 != i){
         x += i % 10;
         x *= 10;
         i /= 10;
     }
     x += i;
     return x;
}
int main(){
    int i,n;
    scanf("%d",&i);
    while(i != 0){
        i--;
        scanf("%d",&n);
        printf("%d\n",printReverse(n));
    }
    return 0;
}


