#ifndef CONTROLLER_H
#define CONTROLLER_H

#include "Point.h"
class Controller
{
private:
    
    static unsigned int source; // 玩家得分
public:
    Controller();
    void startGame();   // 开始游戏循环
    void initGame();    // 初始化游戏: 重置玩家得分、初始化地图、初始化蛇
    Point generateRandomPosition(); // 生成随机位置
    ~Controller();
};





#endif // CONTROLLER_H
