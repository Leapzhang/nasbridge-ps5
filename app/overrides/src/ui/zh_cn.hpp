// NASBridge Simplified Chinese labels used by the shared renderer.
// SPDX-License-Identifier: GPL-3.0-or-later
#pragma once

#include <string_view>

namespace hui::ui
{

inline std::string_view zh_cn(std::string_view value)
{
    struct Entry { std::string_view english, chinese; };
    static constexpr Entry labels[] = {
        {"Library", "游戏库"}, {"Settings", "设置"}, {"Connection", "连接"},
        {"Queue", "队列"}, {"All", "全部"}, {"Installed", "已安装"},
        {"Not installed", "未安装"}, {"On PS5", "PS5 上"},
        {"On this PS5", "此 PS5 上"}, {"ON PS5", "PS5 上"},
        {"Back", "返回"}, {"Open", "打开"}, {"Close", "关闭"},
        {"Select", "选择"}, {"Cancel", "取消"}, {"Change", "更改"},
        {"Edit", "编辑"}, {"Browse", "浏览"}, {"Use this folder", "使用此文件夹"},
        {"Up", "上一级"}, {"Folder", "文件夹"}, {"Game folder", "游戏文件夹"},
        {"exFAT image", "exFAT 镜像"}, {"Download to PS5", "下载到 PS5"},
        {"Add to queue", "加入队列"}, {"Destination", "目标位置"},
        {"Internal", "内置存储"}, {"Copied", "已复制"},
        {"Copying", "复制中"}, {"Paused", "已暂停"},
        {"Pause", "暂停"}, {"Resume", "继续"}, {"Move", "移动"},
        {"Remove", "移除"}, {"Remove from queue", "从队列移除"},
        {"Remove (pause first)", "移除（请先暂停）"},
        {"Delete", "删除"}, {"Delete from PS5", "从 PS5 删除"},
        {"Delete the rest", "删除剩余文件"}, {"Deleting", "删除中"},
        {"Deleted", "已删除"}, {"Done", "完成"}, {"Stopped", "已停止"},
        {"Starting", "启动中"}, {"Speed", "速度"},
        {"Not enough space", "空间不足"}, {"Free space unknown", "可用空间未知"},
        {"Drive not connected", "存储设备未连接"},
        {"Nothing queued", "队列为空"}, {"Nothing is queued", "队列为空"},
        {"No games here yet", "这里还没有游戏"},
        {"No folders in here", "这里没有文件夹"},
        {"No shares to show", "没有可显示的共享"},
        {"Reading your NAS", "正在读取 NAS"},
        {"Reading your NAS...", "正在读取 NAS…"},
        {"Reading...", "读取中…"},
        {"Getting your library ready", "正在准备游戏库"},
        {"Measuring size...", "正在计算大小…"},
        {"Set up NAS", "设置 NAS"}, {"Set up your NAS", "设置 NAS"},
        {"Connection type", "连接类型"},
        {"Server address", "服务器地址"}, {"Port", "端口"},
        {"User name", "用户名"}, {"Password", "密码"},
        {"Test connection", "测试连接"}, {"Testing...", "测试中…"},
        {"Not tested yet", "尚未测试"}, {"Choose the games folder", "选择游戏文件夹"},
        {"Where NASBridge finds your games", "NASBridge 查找游戏的位置"},
        {"How NASBridge copies games from the NAS", "NASBridge 如何从 NAS 复制游戏"},
        {"Connections per file", "每个文件的连接数"},
        {"Files at once", "同时复制的文件数"},
        {"Keep the PS5 awake", "保持 PS5 唤醒"},
        {"While copying", "复制期间"}, {"Sounds", "声音"},
        {"Sound", "声音"}, {"Show debug info", "显示调试信息"},
        {"Debug", "调试"}, {"Connection test", "连接测试"},
        {"Copying to", "复制到"}, {"Copy stopped", "复制已停止"},
        {"Checking drive...", "正在检查存储设备…"},
        {"Checking free space", "正在检查可用空间"},
        {"Counting games...", "正在统计游戏…"},
        {"Update", "更新"}, {"Updating", "更新中"},
    };
    for (const Entry &entry : labels)
        if (value == entry.english)
            return entry.chinese;
    return value;
}

} // namespace hui::ui
