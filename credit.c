#include <stdio.h>

int luhn(long k); 

int main(void) {

//get the credit card number   
  long input; 
  printf("Enter a credit card number: "); 
  scanf("%li", &input);

//count the digits 
  int c = 1; 
  int z = input; 
  while(input > 9){
    z /= 10; 
    c++; 
  }

//get the first digit 
  int f = input; 
  while(f >= 10)
  {
    f = f / 10;
  }  

//check the credit card number 
  if(c==13 || c==15 || c==16){
    if (luhn(input) == 0){
      if(f==3){
        printf("American Express");
      }else if(f==5){
        printf("MasterCard"); 
      }else if(f==4){
        printf("Visa"); 
      }
  }
  }else{
    printf("Invalid"); 
  }
}

int luhn(long k){
  int e = 1; 
  int v = 0; 
  long count = 0; 
  int second = (count / 10) % 10;
  long u = k; 

// count the digits 
  int cc = 1; 
  int zz = k; 
  while(k > 9){
    zz /= 10; 
    cc++; 
  }

  while(u>0){
    u /= 10; 
    e++; 
    if (v == 0){
      count += u * 2;
      v = 1; 
    }else if(v == 1){
      count += u; 
      v = 0; 
    }
  }
  
  if (second == 0){
    return 0; 
  }else{
    return 1; 
  }
}