#include "RealTimeDS1307.h"

static RealTimeDS1307_t Real_TimeDs1307;
RealTimeDS1307_t RealTimeDS1307_Gen_Data(void){
Real_TimeDs1307.Seconds  = I2C1_Read(0x68,0x00,1);
Real_TimeDs1307.Minuties = I2C1_Read(0x68,0x01,1);
Real_TimeDs1307.Hours    = I2C1_Read(0x68,0x02,1);
Real_TimeDs1307.Days     = I2C1_Read(0x68,0x03,1);
Real_TimeDs1307.Monthes  = I2C1_Read(0x68,0x04,1);
Real_TimeDs1307.Years    = I2C1_Read(0x68,0x05,1);

return Real_TimeDs1307;
}