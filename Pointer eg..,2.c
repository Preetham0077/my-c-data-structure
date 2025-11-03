#include<stdio.h>
int main(){
    int a=10;
    int*p;
    printf("value of a=%d\n",a);
    printf("adress of a=%p\n",&a);
    printf("value using pointer=%d\n",*p);
}


output
value of a=10
adress of a=0x7fffcd152ba4
value using pointer=-862388224
