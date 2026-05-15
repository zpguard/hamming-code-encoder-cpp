#include <iostream>
#include <vector>
#include <Eigen/Dense>
#include "hamming.h"

//hamming::hamming(){}
hamming::hamming(int d1,int d2, int d3, int d4 ){

H <<  1,	0,	0,	0,	1,	1,	1,
      0,	1,	0,	1,	0,	1,	1,
      0,	0,	1,	1,	1,	0,	1;

G<< 0, 1, 1, 1, 0, 0, 0,
   1, 0, 1, 0, 1, 0, 0,
   1, 1, 0, 0, 0, 1, 0,
   1, 1, 1, 0, 0, 0, 1;
 data <<  d1, d2, d3, d4;

 
}

Eigen::Matrix<int,7,1> hamming::genParM(){
  Eigen::Matrix<int, 7,1> one;
  one = data*G; // multiplying the matrix
  for (int i =0;i<7;i++){
    if (one[i]%2==0){
      one[i]=0;}}
  
  std::cout<<"The data bits encode to: \n"<<one<<std::endl;
  return one;
  
  
}





