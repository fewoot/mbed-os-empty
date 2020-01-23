#ifndef EDGE_H
#define EDGE_H 
#include "mbed.h"

#define EDGE_YES 1  //根据实际情况修改
#define EDGE_NO 0

/*
边缘传感器类
 */
class edge{
    public:
        PinName pin;                                        //所连接的信号引脚
        bool if_edge;                                       //是否检测到物体，true为还在台上，false为悬空
        bool function_detect(uint8_t times);                //进行检测
        bool function_detect(uint8_t times,uint8_t mode);   //进行检测
        edge(PinName pin);                                  //构造函数
        ~edge();                                            //析构函数
};


#endif//EDGE_H
