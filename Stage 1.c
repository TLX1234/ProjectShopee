#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    // cart storage variables
    int qty[100],i=0,j;
    float price[100],grandTotal=0;
    char prodName[100][50];
    int item;
    char opt,search[20];

    // title and promotions
    printf("\t\t\t\t\t\tSHOPEE\t\t\t\t\t\t");
    printf("\n\t\t\t\t\tSUPER PROMO THIS WEEK!!!\t\t\t\t\t\t");
    printf("\n\t\t\t\t\tOnly On 30.9.25 - 9.10.25\t\t\t\t\t\t");

    // main loop for user interaction
    while(1){
        printf("\nEnter item number to add to cart, 'S' to stop, 'O' to search, or 'C' to open cart: ");
        if(scanf(" %c",&opt)!=1)break;

        if(opt=='S'||opt=='s'){
            printf("Stopping item selection...\n");
            break;
        }
    }
    return 0;
}

