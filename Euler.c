#include <stdio.h>

int firstProblem() {
  int i;
  int sum = 0;
  for (i=1; i<1000; i++){
    if (i%3==0 || i%5==0){
      sum += i;
    }
  }
  return sum;
}

int secondProblem() {
  int firstNum = 1;
  int secondNum = 2;
  int evenSum = 0;
  while (secondNum < 4000000){
    if (secondNum % 2 == 0){
      evenSum += secondNum;
    }
    int copyOfFirst = firstNum;
    firstNum = secondNum;
    secondNum = secondNum + copyOfFirst;
  }
  return evenSum;
}

int fifthProblem() {
  int finalNum = 1;
  int i;
  for (i=2; i<21; i++){
    if (finalNum%i!=0){
      int k;
      for (k=2; k<=i; k++){
        if (finalNum%i!=0 && i%k==0){
          finalNum*=k;
          k=2;
        }
      }
    }
  }
  return finalNum;
}

int sixthProblem() {
  int topNum = 100;
  int i;
  int sumOfSquare = 0;
  int squareOfSum = 0;
  for (i=0; i<=topNum; i++){
    sumOfSquare += i*i;
    squareOfSum += i;
  }
  squareOfSum = squareOfSum * squareOfSum;
  return squareOfSum - sumOfSquare;
}

int main() {
  printf("Problem 1: %d\n", firstProblem());
  printf("Problem 2: %d\n", secondProblem());
  printf("Problem 5: %d\n", fifthProblem());
  printf("Problem 6: %d\n", sixthProblem());
  return 0;
}
