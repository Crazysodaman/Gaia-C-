struct sensor {  //  sets struct for servo data
    int adr;    //  sensor address in hex or gpio
    int loc;    //  sensor location
    int smax;   //  servo max postion
    int smin;   //  servo min postion
    char grp;   //  Gait group (A or B)
    bool wkng;  //  if the sensor is working properly
    }

struct sensor 
