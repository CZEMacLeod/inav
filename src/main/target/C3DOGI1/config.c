/*
 */

#include <stdint.h>
#include "platform.h"

#include "config/config_master.h"
#include "config/feature.h"

#include "fc/fc_msp_box.h"

#include "io/piniobox.h"
#include "io/serial.h"
#include "io/frsky_osd.h"

void targetConfiguration(void)
{
    // pinioBoxConfigMutable()->permanentId[0] = BOX_PERMANENT_ID_USER1;
    // pinioBoxConfigMutable()->permanentId[1] = BOX_PERMANENT_ID_USER2;

    serialConfigMutable()->portConfigs[6].functionMask = FUNCTION_FRSKY_OSD;
}
