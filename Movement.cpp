#include <iostream>
#include <string>
using namespace std
/*
   Abb. for naming 
  F- Front  H- Hip
  C- Center T- Thigh
  B- Back   FT- Foot
  L- LefT   R- Right
 
  Servo and Numbers
   FRH-8   FLH-24
   FRT-7   FLT-23
   FRFT-6  FLFT-22
   CRH-5   CLH-21
   CRT-4   CLT-20
   CRFT-3  CLFT-19
   BRH-2   BLH-18
   BRT-1   BLT-17
   BRFT-0  BLFT-16
   
      Leg Groups
A (8,7,6),(21,20,19),(2,1,0)
B (24,23,22),(5,4,3),(18,17,16) 
*/

/* class Movement
{
  int FRH = 8, FLH = 24, FRT = 7, FLT= 23, FRFT = 6, FLFT = 22, CRH = 5, CLH = 21, CRT = 4, CLT = 20, CRFT = 3, CLFT = 19, BRH = 2, BLH = 18, BRT = 1, BLT = 17, BRFT = 0, BLFT = 16; // all servo individual 
  int aspr[9] = {0, 1, 2, 3, 4, 5, 6, 7, 8};  // all servo positions right
  int aspl[9] = {16, 17, 18, 19, 20, 21, 22, 23, 24};  // all servo positions left
  int gah[3] = {2, 21, 8}; // Gait A Servo Hip
  int gat[3] = {1, 20, 7}; // Gait A Servo Thigh
  int gaf[3] = {0, 19, 6}; // Gait A Servo Feet
  int gbh[3] = {24, 5, 18}; // Gait B Servo Hip
  int gbt[3] = {23, 4, 17}; // Gait B Servo Thigh
  int gbf[3] = {22, 3, 16}; // Gait B Servo Feet
}; */

Struct name {
  int servo;
  int center;
  int smax;
  int smin;
  char grp;
}FRH, FLH, FRT, FLT, FRFT, FLFT, CRH, CLH, CRT, CLT, CRFT, CLFT, BRH, BLH, BRT, BLT, BRFT, BLFT;

FRH.servo = 8;
FLH.servo = 24;
FRT.servo = 7;
FLT.servo = 23;
FRFT.servo = 6;
FLFT.servo = 22;
CRH.servo = 5;
CLH.servo = 21;
CRT.servo = 4;
CLT.servo = 20;
CRFT.servo = 3;
CLFT.servo = 19;
BRH.servo = 2;
BLH.servo = 18;
BRT.servo = 1;
BLT.servo = 17;
BRFT.servo = 0;
BLFT.servo = 16;
