# LearningDataStructure
数据结构学习笔记
这是一个数据结构学习笔记 里面是一些基于C或C++的实例

<a href="https://www.douban.com/note/332510501/">about push error</a>

这是新添加的部分:
mkdir LearningDtaStructure//创建LearningDataStructure文件夹
cd LearningDataStructure//进入XX文件夹
pwd//显示当前文件夹路径
ls//查看本文件夹下的文件目录
vi README.md//打开README文件，如果没有将会被创建
i(inster)//进入编辑模式
ESC//进入命令模式
dd//（在命令模式下执行）会删除光标所在行
ZZ//（）保存并退出vi
wq//保存并退出，底行模式下
q!//强制退出vi不保存修改，底行
e!//清除修改不退出，底行 vi if you want to know more about vi edit please click <a href="https://www.cnblogs.com/yc8930143/p/5410734.html">more</a>
git status//查看状态
git log//查看修改日志（按ZZ退出日志）
git reset --hard sadfdsad12232(commit string)//回到历史版本commit string由git log得到
git reflog//查看历史版本号
git reset --hard sdfsa//把历史版本带回到现在（慕课网版本管理工具介绍-Git篇）
git add README.md//添加文件到本地仓库
git commit -m "updata 11/23/2017"//添加描述
git remote add origin git@github.com:huangyebiaoke/LearningDataStructure.git//关联远程库please click <a href="http://blog.madeai.cn/2017/11/17/p10/#more">more</a>
git remote remove origin//取消关联远程库
git push -u origin master//推送到远程库,后加-f是强制推送 git push是推送到当前工作分支（不一定是master分支）
git branch hexo  //新建hexo分支
git checkout hexo  //切换到hexo分支上
git push origin hexo  //push到Github项目的hexo分支上 please click<a href="http://blog.csdn.net/Monkey_LZL/article/details/60870891">more</a>
git pull//拉取远程库的项目与本地项目融合
关于merge和release请自行百度，git有太多命令行，作为一个工具，不应该投入过多学习成本，你也可以用github桌面版来完成版本管理工作
！！！以上命令都是基于liunx环境
