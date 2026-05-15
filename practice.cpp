#include <iostream>
#include <vector>
#include <Eigen/Dense>

int main(){
 Eigen::Matrix G(int 4,7);
  G <<  0, 1, 1, 1, 0, 0, 0,
        1, 0, 1, 0, 1, 0, 0,
        1, 1, 0, 0, 0, 1, 0,
        1, 1, 1, 0, 0, 0, 1;
  std::cout<<G<<std::endl;

  
}
