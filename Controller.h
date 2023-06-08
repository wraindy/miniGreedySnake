#ifndef CONTROLLER_H
#define CONTROLLER_H


class Controller
{
private:
    
    static unsigned int source; // 玩家得分
public:
    Controller();
    void initGame();    // 初始化游戏: 重置玩家得分、初始化地图、初始化蛇
    ~Controller();
};





#endif CONTROLLER_H
