#include <iostream>
#include <vector>
#include <Eigen/Dense>

class hamming {
  
 private:
  int d1, d2, d3, d4;
  int p1, p2, p3;
 
 public:
  Eigen::Matrix<int,1,4> data;
  Eigen::Matrix<int,3,7> H;
  Eigen::Matrix<int, 4, 7> G;
  Eigen::Matrix<int, 7,1> genParM();
  hamming(int cd1,int cd2, int cd3, int cd4);
  
  //bool check(std::Eigen Matrix(int, 4, 7)); 
};
