#coding:utf-8
#备份原hosts
Local_hosts = open("C:\\Windows\\System32\\drivers\\etc\\hosts",mode='a+',encoding='utf-8')
Local_hosts.seek(0,0)
Local_backup = open("C:\\Windows\\System32\\drivers\\etc\\hosts.bak",mode='w+',encoding='utf-8')
for line in Local_hosts.readlines():
    Local_backup.write(line)
Local_hosts.seek(0,2)
Local_backup.close()
#选择想要写入的文件
print(\
"***********************************************************************\n\
****** \t\t\t添加哪一个hosts文件？\t\t\t*******\n\
***********************************************************************\n")
while True:
    Option = input("1.hosts(全部微软系hosts) 2.hosts-testing(测试版本) 3.onenote_hosts(仅onenote)\n")
    if Option == '1' or Option == 'hosts':
        New_hosts = open('hosts',encoding='utf-8')
        break
    elif Option == '2' or Option == 'hosts-testing':
        New_hosts = open('hosts-testing',encoding='utf-8')
        break
    elif Option == '3' or Option == 'onenote_hosts':
        New_hosts = open('onenote_hosts',encoding='utf-8')
        break
    else:
        print("输入有误 请输入序号或hosts文件名\n")
#写入文件
Local_hosts.write('\n\n')
for line in New_hosts.readlines():
    Local_hosts.write(line)
New_hosts.close()
Local_hosts.close()
input("***** \t\t\t写入成功!按任意键退出\t\t\t *****")