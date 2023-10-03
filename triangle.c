#include<stdio.h>

int main(){

        float a1,a2,a3;
        float a;

        printf("Enter the three angle of the triangle \n");
        scanf("%f %f %f",&a1,&a2,&a3);

        a = a1 + a2 + a3;

        if(a == 180.0){

                printf("The angles belongs to a triangle \n");
        }
        else {
                printf("The angles are not acceptable for a triangle \n");
        }

        return 0;

}
