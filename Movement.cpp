class Movement
{
  int FRR = 8, FLR = 24, FRT = 7, FLT= 23, FRFT = 6, FLFT = 22, CRR = 5, CLR = 21, CRT = 4, CLT = 20, CRFT = 3, CLFT = 19, BRR = 2, BLR = 18, BRT = 1, BLT = 17, BRFT = 0, BLFT = 16; // all servo individual 
  int aspr[9] = {0, 1, 2, 3, 4, 5, 6, 7, 8};  // all servo positions right
  int aspl[9] = {16, 17, 18, 19, 20, 21, 22, 23, 24};  // all servo positions left
  int gar[3] = {2, 21, 8}; // Gait A Servo Rotate
  int gat[3] = {1, 20, 7}; // Gait A Servo Thigh
  int gaf[3] = {0, 19, 6}; // Gait A Servo Feet
  int gbr[3] = {24, 5, 18}; // Gait B Servo Rotate
  int gbt[3] = {23, 4, 17}; // Gait B Servo Thigh
  int gbf[3] = {22, 3, 16}; // Gait B Servo Feet
};
