#include<iostream.h>
 

  
int isPrime(int num);
 
int main() {
  int num, i;
  cout << "Enter a positive number\n";
  cin >> num;
  for(i = 2; i <= num/2; i++){
      if(isPrime(i)){
          if(isPrime(num-i)){
         cout << num << " = " << i << " + " << num-i;
              return 0; 
          } 
      }
  }
   
  cout << "Not Possible";
        
  return 0;
}
 
// returns 1 if num is prime number otherwise 0
int isPrime(int num){
    int i;
    // Check whether num is divisible by any 
    // number between 2 to (num/2)
    for(i = 2; i <=(num/2); ++i) {
        if(num%i==0) {
            return 0;
        }
    }
    return 1;
}