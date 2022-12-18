#include <stdio.h>

int main(){
void maxArrays(float[] ,float[] ,float[]);

float A1[] = {0.7, 3.3, 0.5, 10.3};
float A2[] = {4.1, 1.5, 0.5, 2.3};
float A3[4];
   
    printf("Array 1:\n");
    for (int i = 0; i < 4; i++) {
        printf("%lf\n",A1[i]);  
    }

    printf("\nArray 2:\n");
    for (int j = 0; j < 4; j++) {
        printf("%lf\n",A2[j]);
    }
   maxArrays(A1, A2, A3);

   printf("\nArray 3:\n");
    for (int j = 0; j < 4; j++) {
        printf("%lf\n",A3[j]);
    }
}


void maxArrays(float A1[] ,float A2[] , float A3[]){
  for (int i = 0; i < 4; i++) {
      if(A1[i]>A2[i]){
          A3[i] = A1[i];
        }
        else if(A2[i]>A1[i]){
          A3[i] = A2[i];
        }
        else{
            A3[i] = A1[i];
        }
    
    }  
}