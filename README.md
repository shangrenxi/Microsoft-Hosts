# 最新Microsoft(微软)的Hosts和PAC

本hosts包括Microsoft服务最新的ip地址，部分支持ipv6，大ip均为anycast ip或者香港ip。
增加了相应的PAC，方便为微软服务提速

# 初步完成项目

 - OneDrive
 - OneDrive for Business
 - OneNote UWP
 - Microsoft Office 2016/2019/365
 
# 计划列表

 - 完善Windows 10同步、Microsoft Store、Microsoft Account
 - 增加批处理，方便导入(已实现)
## 已增加批处理（暂时仅windows可用）
 - 改用C++重写了导入脚本，大幅减小了脚本的大小，提高脚本启动速度。源代码在项目[AddHosts.cpp](https://github.com/MattMaBX/Microsoft-Hosts/blob/master/AddHosts.cpp)文件中。
 - 使用时必须用管理员权限打开[AddHosts.exe](https://github.com/MattMaBX/Microsoft-Hosts/blob/master/AddHosts.exe)(因为hosts文件的改动必须使用管理员权限)。
- **New！问题修复**：若运行AddHosts脚本出现了**缺失.dll文件**的异常，请尝试下载使用[AddHosts_fix.exe](https://github.com/MattMaBX/Microsoft-Hosts/blob/master/AddHosts_fix.exe)。初步估计是因为部分设备上的dll库不全导致的（因为在作者的设备上测试时未发现该问题）。已在新版本中使用静态编译编入了所有依赖，若问题复现，请再进行反馈。修复有些迟，请谅解！
 - 感谢[MattMaBX](https://github.com/MattMaBX)
  
# 注意事项

 - 仅为方便使用Office的商务人士和教育用户，请勿用于他用。
 - Hosts并不能解决全部问题，同时hosts也需要经常更新。
 
## 请搭配阅读

 - [Onedrive Hosts](https://www.zhangxuhu.com/archives/158.html)
