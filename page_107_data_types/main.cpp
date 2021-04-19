/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: zhelezkin.m
 *
 * Created on 17 января 2020 г., 9:51
 */

#include <iostream>

/*
 * main() - точка входа в программу.
 */
int main(int argc, char** argv)
{
  char c;
  unsigned char cu;
  int i;
  unsigned int iu;
  short int is;
  short iis; // Like short int.
  unsigned short int isu;
  unsigned short iisu;
  long int il;
  long iil; // Like long int.
  unsigned long int ilu;
  unsigned long iilu;
  float f;
  double d;
  long double ld;
  
  char *pc;
  unsigned char *pcu;
  int *pi;
  unsigned int *piu;
  short int *pis;
  short *piis; // Like short int.
  unsigned short int *pisu;
  unsigned short *piisu;
  long int *pil;
  long *piil; // Like long int.
  unsigned long int *pilu;
  unsigned long *piilu;
  float *pf;
  double *pd;
  long double *pld;

  std::cout <<  "char =\t\t\t" << sizeof(c) <<
                "\nunsigned char =\t\t" << sizeof(cu) <<
                "\nint =\t\t\t" << sizeof(i) <<
                "\nunsigned int =\t\t" << sizeof(iu) <<
                "\nshort int =\t\t" << sizeof(is) <<
                "\nshort =\t\t\t" << sizeof(iis) <<
                "\nunsigned short int =\t" << sizeof(isu) <<
                "\nunsigned short  =\t" << sizeof(iisu) <<
                "\nlong int =\t\t" << sizeof(il) <<
                "\nlong =\t\t\t" << sizeof(iil) <<
                "\nunsigned long int =\t" << sizeof(ilu) <<
                "\nunsigned long =\t\t" << sizeof(iilu) <<
                "\nfloat =\t\t\t" << sizeof(f) <<
                "\ndouble d =\t\t" << sizeof(d) <<
                "\nlong double =\t\t" << sizeof(ld) << std::endl;
				
	std::cout <<  "*char =\t\t\t" << sizeof(pc) <<
                "\n*unsigned char =\t\t" << sizeof(pcu) <<
                "\n*int =\t\t\t" << sizeof(pi) <<
                "\n*unsigned int =\t\t" << sizeof(piu) <<
                "\n*short int =\t\t" << sizeof(pis) <<
                "\n*short =\t\t\t" << sizeof(piis) <<
                "\n*unsigned short int =\t" << sizeof(pisu) <<
                "\n*unsigned short  =\t" << sizeof(piisu) <<
                "\n*long int =\t\t" << sizeof(pil) <<
                "\n*long =\t\t\t" << sizeof(piil) <<
                "\n*unsigned long int =\t" << sizeof(pilu) <<
                "\n*unsigned long =\t\t" << sizeof(piilu) <<
                "\n*float =\t\t\t" << sizeof(pf) <<
                "\n*double d =\t\t" << sizeof(pd) <<
                "\n*long double =\t\t" << sizeof(pld) << std::endl;

  exit(0);
}

