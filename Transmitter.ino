#include <VirtualWire.h>
#undef round

void setup()
{
    vw_setup(2000); // Bits per sec
}
void loop()
{
    const char *msg = "Hello my friends, this is earth calling.  We hope you are all well :)";
    vw_send((uint8_t *)msg, strlen(msg));
    delay(400);
}