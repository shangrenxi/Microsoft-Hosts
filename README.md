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
 - 增加批处理，方便导入
## 已增加批处理（暂时仅windows可用）
 - 使用python编写了导入脚本，源代码在项目[addHosts.py](https://github.com/MattMaBX/Microsoft-Hosts/blob/master/addHosts.py)文件中
 - 使用时需用管理员权限打开[addHosts.exe](https://github.com/MattMaBX/Microsoft-Hosts/blob/master/addHosts.exe)(因为hosts文件的改动必须使用管理员权限)
  
# 注意事项

 - 仅为方便使用Office的商务人士和教育用户，请勿用于他用。
 - Hosts并不能解决全部问题，同时hosts也需要经常更新。
 
## 请搭配阅读

 - [Onedrive Hosts](https://www.zhangxuhu.com/archives/158.html)
