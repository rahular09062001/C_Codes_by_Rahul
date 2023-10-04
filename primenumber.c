#include<stdio.h>

int main(){

        int n;

        printf("Enter the number you want to check for prime number \n");
        scanf("%d",&n);

        for(int i=1;i<=n;i++){


                if(n==1){

                        printf("%d is a prime number \n",n);

                }
                else if((n%i)==0 && (i!=n && i != 1)){

                        printf("%d is not a prime number \n",n);
                        break;
                }
                else if((n%i)==0 && (i==n && i!=1)){

                        printf("%d is a prime number \n",n);
                }

        }


        return 0;
}
