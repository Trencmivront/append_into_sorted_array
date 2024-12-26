#include <stdio.h>

int main(){

    int a[4]={1,3,10}, append;

    printf("Please enter the number you would like to append into the array;\n");

    scanf(" %d", &append);

    for(int i=2;i>=0;i--){

        if(a[i]>append){

            a[i+1]=a[i];
            a[i]=append;

        }

    }

    for(int i=0;i<4;i++){

        printf("%d, ", a[i]);

    }

}
