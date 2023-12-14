/* 
 * File:   RealTimeDS1307.h
 * Author: DELL
 *
 * Created on December 14, 2023, 9:40 PM
 */
#include "../mcc_generated_files/system/system.h"
#ifndef REALTIMEDS1307_H
#define	REALTIMEDS1307_H

typedef struct{
 uint16_t Hours;
 uint16_t Minuties;
 uint16_t Seconds;
 uint16_t Days;
 uint16_t Monthes;
 uint16_t Years;
}RealTimeDS1307_t;


RealTimeDS1307_t RealTimeDS1307_Gen_Data(void);

#endif	/* REALTIMEDS1307_H */

