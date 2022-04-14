#include <iostream>
#include <string>
#include <set>
#include <algorithm>
#include <vector>

using namespace std;

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

struct servo {  //  sets struct for servo data
    int srvo;   //  servo number
    int center; //  center postion
    int smax;   //  servo max postion
    int smin;   //  servo min postion
    char grp;   //  Gait group (A or B)
    bool wkng;  //  if the servo is working properly

    bool operator<(const servo&) const //not sure why this works but will look into it DO NOT REMOVE
    {
        return 0;
    }
};
int main() {

    struct servo FRH { 8, 1500, 2000, 750, 'A', true };
    struct servo FLH { 24, 1500, 2000, 750, 'B', true };
    struct servo FRT { 7, 1500, 2000, 750, 'A', true };
    struct servo FLT { 23, 1500, 2000, 750, 'B', true };
    struct servo FRFT { 6, 1500, 2000, 750, 'A', true };
    struct servo FLFT { 22, 1500, 2000, 750, 'B', true };
    struct servo CRH { 5, 1500, 2000, 750, 'B', true };
    struct servo CLH { 21, 1500, 2000, 750, 'A', true };
    struct servo CRT { 4, 1500, 2000, 750, 'B', true };
    struct servo CLT { 20, 1500, 2000, 750, 'A', true };
    struct servo CRFT { 3, 1500, 2000, 750, 'B', true };
    struct servo CLFT { 19, 1500, 2000, 750, 'A', true };
    struct servo BRH { 2, 1500, 2000, 750, 'A', true };
    struct servo BLH { 18, 1500, 2000, 750, 'B', true };
    struct servo BRT { 1, 1500, 2000, 750, 'A', true };
    struct servo BLT { 17, 1500, 2000, 750, 'B', true };
    struct servo BRFT { 0, 1500, 2000, 750, 'A', true };
    struct servo BLFT { 16, 1500, 2000, 750, 'B', true };

    set <struct servo> Hp{ FRH, FLH, CRH, CLH, BRH, BLH }; //Hip
    set <struct servo> Th{ FRT, FLT, CRT, CLT, BRT, BLT }; // Thighs
    set <struct servo> Ft{ FRFT, FLFT, CRFT, CLFT, BRFT, BLFT }; //Feet
    set <struct servo> Frt{ FRH, FLH, FRT, FLT, FRFT, FLFT }; //Front
    set <struct servo> Ctr{ CRH, CLH, CRT, CLT, CRFT, CLFT }; //Center
    set <struct servo> Bck{ BRH, BLH, BRT, BLT, BRFT, BLFT }; //Back
    set <struct servo> Lt{ FLH, FLT, FLFT, CLH, CLT, CLFT, BLH, BLT, BLFT }; //Left
    set <struct servo> Rt{ FRH, FRH, FRFT, CRH, CRT, CRFT, CRH, CRT, CRFT }; //Right
    set <struct servo> grpA{ FRH, FRT, FRFT, CLH, CLT, CLFT, BRH, BRT, BRFT }; //Group A
    set <struct servo> grpB{ FLH, FLT, FLFT, CRH, CRT, CRFT, BLH, BLT, BLFT }; //Group B

    vector <char> legset;

    set_intersection(grpA.begin(), grpA.end(), Hp.begin(), Hp.end(), legset);

    cout << 'legset';


    return 0;
}