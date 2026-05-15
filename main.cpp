#include <iostream>
#include <fstream>
#include <Eigen/Dense>
#include <vector>
#include "hamming.h"
/*

//std::Eigen Matrix(int,2,3)dMatrix; //stands for desiredMatrix


 data order: x1, x2, x3, x4
(7,4) order: p1, p2, x3, p4, x2, x1, x0

matrix rows: d1, d2, d4, p1
             d2, d3, d4, p2 
             d1, d3, d4, p3

   1 1 0 --> parity bit is a 0 to keep the evenness
   0 0 0 --> parity bit is a 0 to keep the evenness
   0 0 1 --> parity bit is a 1 to keep the evenness
   check for the error: find which data bits overlap between only the two incorrect bits,
   and not the correct one.
   (if all three parity bits were affected, the middle data bit is the issue).

*/

int main(){
  std::string file;
  int append;
  std::cout<<"please enter the name of the file from which you want the program to read."<<std::endl;
  std::cin>>file; 
  std::ifstream infile;    
  infile.open(file);       
  std::vector<int> in;
  if(infile.is_open())  
    {                 
      while (infile >> append)
	{in.push_back(append); }
      
      infile.close();
      
    } else { std::cout<<"ERROR: FILE NOT FOUND"<<std::endl;}  
  
    hamming h(in[0], in[1], in[2], in[3]);
    h.genParM();
  
 }
 
