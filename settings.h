/*
 * Settings
 *
 * created on 2012-5-14 by fgb (derived from or_const.h by apullin)
 */

#ifndef __SETTINGS_H
#define __SETTINGS_H

#define IDENT_STR "BIOMIMETICS-ROACH;AMS-ENC;"

/////// Radio settings ///////
/////// Radio settings ///////
#define RADIO_CHANNEL       0x19
#define RADIO_PAN_ID        0x2050
#define RADIO_SRC_ADDR      0x2052

#define RADIO_TXPQ_MAX_SIZE   10
#define RADIO_RXPQ_MAX_SIZE   10

//Telemetry type setup
#define TELEM_TYPE vrTelemStruct_t
#define TELEM_INCLUDE "vr_telem.h"
#define TELEMPACKFUNC(x) vrTelemGetData(x)

#define SALTO_1P_SANTA 1
#define SALTO_1P_RUDOLPH 2
#define SALTO_1P_DASHER 3

#define ROBOT_NAME SALTO_1P_DASHER

// Robot-specific parameters (like encoder offsets)
#if ROBOT_NAME == SALTO_1P_RUDOLPH // Rudolph
// Encoder offsets
#define AMS_ENC_OFFSET_0        0 // tail encoder
#define AMS_ENC_OFFSET_1        10545 // femur encoder
								// pre-reguling: 17445

#define BLDC_MOTOR_OFFSET       1500 // motor offset from zero position
#define BLDC_CALIB              2240 // AMS encoder commutation offset

#define FULL_EXTENSION          11700 // motor radians at full extension

// Physical parameters
#define FULL_MASS               26 // 103g, 2^8 ticks/kg
#define LEG_FRICTION            130 // 0.13 Nm/Nm coefficient
#define SPRING_LINEAR           0.3836493898315605 // Nm/rad
#define SPRING_QUADRATIC        0.029279712493158 // Nm/rad^2

#elif ROBOT_NAME == SALTO_1P_SANTA // Santa
// Encoder offsets
#define AMS_ENC_OFFSET_0        0 // tail encoder
#define AMS_ENC_OFFSET_1        8675
                                //10848 // (offset in rad)/(2*pi)*2^14. Must be positive (2^14 - ans if neg.)
                                //18957//17862//18592//19288//2904//16030 //16019 // femur 9.97 deg from reference
                                //18592: 2/21, 1928: 2/21, 16019 earliest jumps in Vicon room
                                //18957: Salto-1P final configuration before breaking

#define BLDC_MOTOR_OFFSET       2500
#define BLDC_CALIB              1060 // AMS encoder commutation offset

#define FULL_EXTENSION          14500 // motor radians at full extension

// Physical parameters
#define FULL_MASS               25 // 98g, 2^8 ticks/kg
#define LEG_FRICTION            130 // 0.13 Nm/Nm coefficient
#define SPRING_LINEAR           0.3836493898315605 // Nm/rad
#define SPRING_QUADRATIC        0.029279712493158 // Nm/rad^2

#elif ROBOT_NAME == SALTO_1P_DASHER // Dasher
// Encoder offsets
#define AMS_ENC_OFFSET_0        0 // tail encoder
#define AMS_ENC_OFFSET_1        17668 // 18101-433 = 17668. femur encoder (offset in rad)/(2*pi)*2^14
								//18101 (pre 6/25/18) //17921 //19094 // femur encoder

#define BLDC_MOTOR_OFFSET       1000 // motor offset from zero position
								// 3000 (pre 6/25/18) 
#define BLDC_CALIB              135//2080 // AMS encoder commutation offset

#define FULL_EXTENSION          13400 // motor radians at full extension

// Physical parameters
#define FULL_MASS               26 // 103g, 2^8 ticks/kg
#define LEG_FRICTION            180 // 0.18 Nm/Nm coefficient
#define SPRING_LINEAR           0.3759274976416161 // Nm/rad
#define SPRING_QUADRATIC        0.04275050419811049 // Nm/rad^2

#endif // ROBOT_NAME



#endif //_SETTINGS_H
