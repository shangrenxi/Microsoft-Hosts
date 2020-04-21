#include <iostream>
#include <fstream>
using namespace std;
void backup()//将本机hosts备份成hosts.bak
{
    char buffer[256];
    ifstream file("C:\\Windows\\System32\\drivers\\etc\\hosts");
    ofstream backupfile("C:\\Windows\\System32\\drivers\\etc\\hosts.bak");
    while (!file.eof())
    {
        file.getline(buffer,256);
        backupfile << '\n' << buffer;
    }
    file.close();
    backupfile.close();
}
void reset()//用hosts.bak还原本机hosts
{
    char buffer[256];
    ifstream backupfile("C:\\Windows\\System32\\drivers\\etc\\hosts.bak");
    ofstream file("C:\\Windows\\System32\\drivers\\etc\\hosts");
    while (!backupfile.eof())
    {
        backupfile.getline(buffer,256);
        file << '\n' << buffer;
    }
    file.close();
    backupfile.close();
}
int main()
{
    char buffer[256];
    int option;
    ifstream New_hosts;
    cout << "***********************************************************************\n"
    << "****** \t\t\t添加哪一个hosts文件？\t\t\t*******\n"
    << "***********************************************************************\n";
    set_option:cout << "\t1.hosts(全部微软系hosts)\n\t2.hosts-testing(测试版本)\n\t3.onenote_hosts(仅onenote)\n\t4.恢复原hosts\n"
    << "****** \t\t\t仅输入项目序号即可 \t\t\t*******\n";
    cin >> option;
    switch (option)
    {
        case 1:
        {
            New_hosts.open("hosts");
            break;
        }
        case 2:
        {
            New_hosts.open("hosts-testing");
            break;
        }
        case 3:
        {
            New_hosts.open("onenote_hosts");
            break;
        }
        case 4:
        {
            reset();
            New_hosts.close();
            cout << "***** \t\t\t还原成功!按任意键退出\t\t\t *****" << '\n';
            system("pause");
            return 0;
        }
        default:
        {
            cout << "***** \t\t\t操作失败!请输入正确序号\t\t\t *****" << '\n';
            goto set_option;
            break;
        }
    }
    backup();
    ofstream Local_hosts("C:\\Windows\\System32\\drivers\\etc\\hosts",ios::app);
    while(!New_hosts.eof())
    {
        New_hosts.getline(buffer,256);
        Local_hosts << '\n' << buffer;
    }
    Local_hosts.close();
    New_hosts.close();
    cout << "***** \t\t\t写入成功!按任意键退出\t\t\t *****" << '\n';
    system("pause");
    return 0;
}