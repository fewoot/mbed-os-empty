#include "mbed.h"

RawSerial pc(USBTX,USBRX);
Serial gravity(PB_10, PC_5,115200);

void gravity_callback(){

}

void waitMs(int ms){
    wait_us(ms*1000);
}

// main() runs in its own thread in the OS------------------------------↓
int main(){
//------------------------------------↓
//初始定义请添加在这里
uint8_t gravity_data[9];    //0-8

//------------------------------------↑
    while(true){
        //----------------------------------------↓
        //主循环
        // gravity.read(   &gravity_data[9],      //存放数组
        //                 9,                  //数组大小
        //                 &gravity_callback,    //回调函数
        //                 SERIAL_EVENT_RX_COMPLETE,
        //                 SERIAL_RESERVED_CHAR_MATCH
        //             );
        // if(gravity.readable()){
        //     int get_temp = gravity.getc();
        //     pc.printf("%x\n",get_temp);
        // }else{
        //     pc.printf("next\n");

        // }
        // // pc.printf("%x\n",gravity.getc());
        // // wait_us(1000000);
        // waitMs(1000);


    }   //----------------------------------------↑
}//---------------------------------------------------------------------↑

