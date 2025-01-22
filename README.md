## 初次使用git时
1. 新建github仓库
2. 安装git，所有配置都默认即可，除了下载位置
3. 选择要上传的文件夹，按住shift右键鼠标，选择git bush here
4. `git init`
5. `git config --global http.proxy http://127.0.0.1:使用VPN后端口号`
6. `git config --global https.proxy http://127.0.0.1:使用VPN后端口号`
7. `git config --global user.email chenyang3u3@163.com`
8. `git config --global user.name yourgithubname`
9. `git add .`
10. `git commit -m "chenyang commit xixixi"`
11. `git branch -M main`
12. `git remote add origin https://github.com/oeosi/testRepo.git`
13. `git push -u origin main`
## 后续更改提交时
1. `git add .`
2. `git commit -m "chenyang commit xixixi"`
3. `git push -u origin main`
## 参考资料
查看端口号：[在windows中如何查看代理的地址和端口_怎么查看自己电脑的代理地址-CSDN博客](https://blog.csdn.net/qq_55888300/article/details/131498092)

git配置端口：[Git 配置代理，解决 "Failed to connect to github.com port 443" 及 "Recv failure: Connection was reset" 等问题 - 知乎](https://zhuanlan.zhihu.com/p/648164862)
