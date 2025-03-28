#ifndef CHATSERVER_H
#define CHATSERVER_H

#include <muduo/net/EventLoop.h>
#include <muduo/net/TcpServer.h>
using namespace muduo;
using namespace muduo::net;
// 聊天服务器类
class ChatServer
{
public:
    // 初始化聊天服务器对象
    ChatServer(EventLoop *loop,
               const InetAddress &listenAddr,
               const string &nameArg);
    void start(); // 注册服务
private:
    // 上报链接相关信息的回调函数
    void onConnection(const TcpConnectionPtr &);
    // 上报读写事件相关信息的回调函数
    void onMessage(const TcpConnectionPtr &conn,
                   Buffer *buffer,
                   Timestamp receiveTime);
    TcpServer _server; // 组合的muduo库，实现服务器功能的类对象
    EventLoop *_loop;  // 指向事件循环对象的指针
};
#endif
