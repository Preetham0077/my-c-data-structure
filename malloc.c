#include<stdio.h>
#include<stdlib.h>
int main(){
    int*arr;
    arr=(int*)malloc(5*sizeof(int));
    if(arr==NULL){
        printf("memory not allocated\n");
    }
    printf("memory allocated\n");
}
