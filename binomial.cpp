#include "binomial.h"

Binomial::Binomial(float c1 = 1.0, float c2 = 1.0, int p1 = 1, int p2 = 1){
    coeff1 = c1;
    coeff2 = c2;
    if (p1<1)
      exp1 = 1;
    else
      exp1 = p1;
    if (p2<1)
      exp2 = 1;
    else
      exp2 = p2;
}

float Binomial::GetCoefficient(int index) {
    if (index == 1)
      return coeff1;
    else if (index == 2)
      return coeff2;
    else
      return -1;
}

int Binomial::GetPower(int index) {
    if (index == 1)
      return exp1;
    else if (index == 2)
      return exp2;
    else
      return -1;
}

void Binomial::SetPower(int index, int value){
    if (index == 1){
      if(value < 1)
        exp1 = 1;
      else
        exp1 = value;
      return 0;
    }
    else{
      return -1;
    }
}

int Binomial::Add(Binomial& b){
    if(exp1 == B.exp1 &&k exp2 == B.exp2){
      coeff1 += B.coeff1;
      coeff2 += B.coeff2;
      return 0;
    }
        
    else{
        return -1;
    }
      
}

void Binomial::Multiply(float num){
    coeff1 *= num;
    coeff2 *= num;
}

void Binomial::Multiply(float monoCoeff, int monoPow){
    coeff1 *= monoCoeff;
    exp1 += monoPow;
    coeff2 *= monoCoeff;
    exp2 += monoPow;
}
