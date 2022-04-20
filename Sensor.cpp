struct sensor {  //  sets struct for servo data
    int adr;    //  sensor address in hex or gpio
    char loc;    //  sensor location
    int typ;   //  sensor type 1: 2: 3: 4: 5: 6: 7: 8: 9: 10:
    int smin;   //  servo min postion
    char grp;   //  Gait group (A or B)
    bool wkng;  //  if the sensor is working properly
    }

struct sensor test {0x04, IMU, 1, 0, a, false};
if (snsr.wkng == false) {
    // TODO error handler;
}
else{
    switch (snsr) {
        case 1:
            //TODO;
            };
        break;
        case 2:
            //TODO;
        break;
        case 3:
            //TODO;
        break;
        case 4:
            //TODO;
        break;
        case 5:
            //TODO;
        break;
        case 6:
            //TODO;
        break;
        case 7:
           // TODO;
        break;
        case 8:
            //TODO;
        break;
        case 9:
            //TODO;
        break;
        case 10:
            //TODO;
        break;
        default:
            //error code;
    }
