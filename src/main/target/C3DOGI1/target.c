/*

*/

#include <stdint.h>

#include "platform.h"

#include "drivers/bus.h"
#include "drivers/io.h"
#include "drivers/pwm_mapping.h"
#include "drivers/timer.h"

const timerHardware_t timerHardware[] = {
#if defined(C3DOGI1)
    DEF_TIM(TIM3, CH1,  PA6,    TIM_USE_MC_MOTOR | TIM_USE_FW_MOTOR,    0, 0),  // M1
    DEF_TIM(TIM8, CH1N, PA7,    TIM_USE_MC_MOTOR | TIM_USE_FW_SERVO,    0, 0),  // M2
    DEF_TIM(TIM3, CH3,  PB0,    TIM_USE_MC_MOTOR | TIM_USE_FW_SERVO,    0, 0),  // M3
    DEF_TIM(TIM3, CH4,  PB1,    TIM_USE_MC_MOTOR | TIM_USE_FW_SERVO,    0, 0),  // M4
    DEF_TIM(TIM2, CH1,  PA15,   TIM_USE_MC_MOTOR | TIM_USE_FW_SERVO,    0, 0),  // M5
    DEF_TIM(TIM2, CH2,  PB3,    TIM_USE_MC_MOTOR | TIM_USE_FW_SERVO,    0, 0),  // M6
    DEF_TIM(TIM2, CH3,  PB10,   TIM_USE_MC_MOTOR | TIM_USE_FW_SERVO,    0, 0),  // M7
    DEF_TIM(TIM2, CH4,  PB11,   TIM_USE_MC_MOTOR | TIM_USE_FW_SERVO,    0, 0),  // M8
#elif defined(C3DOGI1O)
    DEF_TIM(TIM3, CH1,  PA6,    TIM_USE_MC_MOTOR | TIM_USE_FW_MOTOR,    0, 0),  // M1
    DEF_TIM(TIM8, CH1N, PA7,    TIM_USE_MC_MOTOR | TIM_USE_FW_SERVO,    0, 0),  // M2
    DEF_TIM(TIM3, CH3,  PB0,    TIM_USE_MC_MOTOR | TIM_USE_FW_SERVO,    0, 0),  // M3
    DEF_TIM(TIM3, CH4,  PB1,    TIM_USE_MC_MOTOR | TIM_USE_FW_SERVO,    0, 0),  // M4
    DEF_TIM(TIM2, CH1,  PA15,   TIM_USE_MC_MOTOR | TIM_USE_FW_SERVO,    0, 0),  // M5
    DEF_TIM(TIM8, CH3,  PC8,    TIM_USE_MC_MOTOR | TIM_USE_FW_SERVO,    0, 0),  // M6
    DEF_TIM(TIM2, CH3,  PB10,   TIM_USE_MC_MOTOR | TIM_USE_FW_SERVO,    0, 0),  // M7
    DEF_TIM(TIM2, CH4,  PB11,   TIM_USE_MC_MOTOR | TIM_USE_FW_SERVO,    0, 0),  // M8
#elif defined(C3DOGI1Q)
    DEF_TIM(TIM3, CH1,  PA6,    TIM_USE_MC_MOTOR | TIM_USE_FW_MOTOR,    0, 0),  // M1
    DEF_TIM(TIM8, CH1N, PA7,    TIM_USE_MC_MOTOR | TIM_USE_FW_SERVO,    0, 0),  // M2
    DEF_TIM(TIM3, CH3,  PB0,    TIM_USE_MC_MOTOR | TIM_USE_FW_SERVO,    0, 0),  // M3
    DEF_TIM(TIM3, CH4,  PB1,    TIM_USE_MC_MOTOR | TIM_USE_FW_SERVO,    0, 0),  // M4    
#elif defined(C3DOGI1H)
    DEF_TIM(TIM3, CH1,  PA6,    TIM_USE_MC_MOTOR | TIM_USE_FW_MOTOR,    0, 0),  // M1
    DEF_TIM(TIM8, CH1N, PA7,    TIM_USE_MC_MOTOR | TIM_USE_FW_SERVO,    0, 0),  // M2
    DEF_TIM(TIM3, CH3,  PB0,    TIM_USE_MC_MOTOR | TIM_USE_FW_SERVO,    0, 0),  // M3
    DEF_TIM(TIM3, CH4,  PB1,    TIM_USE_MC_MOTOR | TIM_USE_FW_SERVO,    0, 0),  // M4
    DEF_TIM(TIM2, CH3,  PB10,   TIM_USE_MC_MOTOR | TIM_USE_FW_SERVO,    0, 0),  // M7
    DEF_TIM(TIM2, CH4,  PB11,   TIM_USE_MC_MOTOR | TIM_USE_FW_SERVO,    0, 0),  // M8
#elif defined(C3DOGI11)
    DEF_TIM(TIM3, CH1,  PA6,    TIM_USE_MC_MOTOR | TIM_USE_FW_MOTOR,    0, 0),  // M1
    DEF_TIM(TIM3, CH2,  PA7,    TIM_USE_MC_MOTOR | TIM_USE_FW_SERVO,    0, 0),  // M2
    DEF_TIM(TIM3, CH3,  PB0,    TIM_USE_MC_MOTOR | TIM_USE_FW_SERVO,    0, 0),  // M3
    DEF_TIM(TIM3, CH4,  PB1,    TIM_USE_MC_MOTOR | TIM_USE_FW_SERVO,    0, 0),  // M4
    DEF_TIM(TIM2, CH1,  PA15,   TIM_USE_MC_MOTOR | TIM_USE_FW_SERVO,    0, 0),  // M5
    DEF_TIM(TIM2, CH2,  PB3,    TIM_USE_MC_MOTOR | TIM_USE_FW_SERVO,    0, 0),  // M6
    DEF_TIM(TIM2, CH3,  PB10,   TIM_USE_MC_MOTOR | TIM_USE_FW_SERVO,    0, 0),  // M7
    DEF_TIM(TIM2, CH4,  PB11,   TIM_USE_MC_MOTOR | TIM_USE_FW_SERVO,    0, 0),  // M8
#endif
    DEF_TIM(TIM1, CH1,  PA8,    TIM_USE_LED,							0, 0),  // WS2811
    DEF_TIM(TIM12, CH1, PB14,   TIM_USE_BEEPER,							0, 0),  // Buzzer
};

const int timerHardwareCount = sizeof(timerHardware) / sizeof(timerHardware[0]);
