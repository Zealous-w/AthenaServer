#ifndef WORLD_H
#define WORLD_H
#include <map>
#include <thread>
#include <base/basic.h>
#include <base/common.h>
#include <player.h>

#define REGISTER_CMD_CALLBACK(cmdId, func) \
    command_[uint32(cmdId)]  = std::bind(&World::func, this, std::placeholders::_1)


class World {
public:
    typedef std::function<bool(struct PACKET&)> ServiceFunc;
    typedef std::map<uint64, player*>           MapUsers;
    static World& getInstance() {
        static World w;
        return w;
    }
private:
    World();
    ~World();

private:
    bool running_;
    std::thread thread_;
    MapUsers users_;
    std::map<uint32, ServiceFunc> command_;
public:
    void Start() { running_ = true; }
    void Stop() { running_ = false; }
    void Run();

    void RegisterCmd();
    void DispatcherCmd(struct PACKET& msg);

public:
    bool HandlerLogin(struct PACKET& str);

};

#define gWorld World::getInstance()

#endif