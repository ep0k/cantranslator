#ifndef __PLATFORM_H__
#define __PLATFORM_H__

#include "interface/pipeline.h"

namespace openxc {
namespace platform {

/* Public: Perform any one-time, up front initialization required fro the
 * platform the firmware is running on.
 */
void initialize();

/* Public: De-init and disable any peripherals, enable any neccessary wakeup
 * interrupts and finally suspend the microcontroller.
 */
void suspend(openxc::interface::Pipeline* pipeline);

} // namespace platform
} // namespace openxc

#endif // __PLATFORM_H__
