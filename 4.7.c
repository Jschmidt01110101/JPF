#include<stdio.h>

int main(){

        int i;
        float temperature[12];
        //inputting the data
        for(i = 0;i<12;++i){
                printf("Enter average temperature for month %d : ",i+1);
                scanf("%f",&temperature[i]);
        }

        //displaying the data
        for(i = 0;i<12;++i){
                printf("The temperature for the  month %d is %f\n",i,temperature[i]);
        }

        return 0;
}



