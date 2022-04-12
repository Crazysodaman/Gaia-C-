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

Struct servo {
  int srvo;
  int center;
  int smax;
  int smin;
  char grp;
  bool wkng;
};

struct servo FRH {8, 1500, 2000, 750, "A", true};
struct servo FLH {24, 1500, 2000, 750, "B", true};
struct servo FRT {7, 1500, 2000, 750, "A", true};
struct servo FLT {23, 1500, 2000, 750, "B", true};
struct servo FRFT {6, 1500, 2000, 750, "A", true};
struct servo FLFT {22, 1500, 2000, 750, "B", true};
struct servo CRH {5, 1500, 2000, 750, "B", true};
struct servo CLH {21, 1500, 2000, 750, "A", true};
struct servo CRT {4, 1500, 2000, 750, "B", true};
struct servo CLT {20, 1500, 2000, 750, "A", true};
struct servo CRFT {3, 1500, 2000, 750, "B", true};
struct servo CLFT {19, 1500, 2000, 750, "A", true};
struct servo BRH {2, 1500, 2000, 750, "A", true};
struct servo BLH {18, 1500, 2000, 750, "B", true};
struct servo BRT {1, 1500, 2000, 750, "A", true};
struct servo BLT {17, 1500, 2000, 750, "B", true};
struct servo BRFT {0, 1500, 2000, 750, "A", true};
struct servo BLFT {16, 1500, 2000, 750, "B", true};
