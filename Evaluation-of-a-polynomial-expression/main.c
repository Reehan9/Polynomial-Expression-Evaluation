#include <stdio.h>
#include <stdlib.h>
#include <math.h>
    struct node {
        int coeff;
        int power;
        struct node* link;
    };
        struct node* start = NULL , *temp;
       int deg = 0;
     void insert_deg() {
         printf("Enter the highest degree of the polynomial\n");
         scanf("%d" , &deg);
     }      
        int insert_val(){
            int temp_deg;
            temp_deg = deg;
            temp = (struct node *)malloc(deg*sizeof(int));
            int i = 0 ;
            while(i<=deg){
                printf("Enter the coefficient of the power %d\n" , temp_deg);
                scanf("%d" , &(temp[i].coeff));
                temp[i].power = temp_deg;
                 temp_deg--;
                 i++;
            }
            return 0;
        }
        void display() {
           printf("\n");
          printf("The entered expression is \n");
          for(int i = 0 ; i <=deg ; i++ ) {
              if(i==deg){
                  printf(" %d", temp[i].coeff);
              } else
          printf("%dX^%d +", temp[i].coeff , temp[i].power);
        }
        }
        int calculate() {
            int x , sum = 0;
            printf("\n");
            printf("Enter the value of x : \n");
            scanf("%d" ,&x);
            for(int i = 0 ; i <= deg ; i++){
                sum = sum + (temp[i].coeff*pow(x , temp[i].power));
            }
            return sum;
        }
        int main() {
            insert_deg();
            insert_val();
            display();
            printf("Result : %d" , calculate());
        }
