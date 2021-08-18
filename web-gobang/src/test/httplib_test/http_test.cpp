#include<stdio.h>
#include<unistd.h>
#include<iostream>
#include "httplib.h"

using namespace httplib;

//回调函数
void CallBack(const Request& res,Response& resp)
{
    (void)res;
    resp.set_content("Hello World!","text/plain");
}

int main()
{
    Server http_svr;
    http_svr.Get("/abc",CallBack);

    //定义一个逻辑根目录
    http_svr.set_mount_point("/","./www.");
    http_svr.listen("0.0.0.0",29988);
    return 0;
}
