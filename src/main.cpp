#include <iostream>
#include "usb_test.h"
#include "stop_mode_test.h"

int main() {

    int ret;
    ret = usb_TC_01();
    if (ret) {
        return 1;
    }


    ret = stop_mode_TC_01();
    if (ret) {
        return 1;
    }
    
    return 0;
}