#include<stdio.h>

int main(){
        
        int n;

        printf("Enter the value of n \n");
        scanf("%d",&n);

        for(int i=1;i<=25;i++){
        
                printf("%d x %d = %d \n",i,n,(i*n));
        }

        return 0;

}
