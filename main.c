#include <stdio.h>
#include "platform.h"
#include "xparameters.h"
#include "xil_io.h"
#include "xil_printf.h"
#include "Driver/cli_led.h"

int main()
{
    init_platform();
    
    char console_in = inbyte();
    int console_in_number = (int)console_in;
    if (console_in_number == 1) {
        // TODO: write the cli_led reg 0 with all 1.
    } else if(console_in_number == 0) {
        CLI_LED_mWriteReg(XPAR_CLI_LED_0_BASEADDR, CLI_LED_S00_AXI_SLV_REG0_OFFSET, 0x00000000);
    }

    cleanup_platform();
    return 0;
}
