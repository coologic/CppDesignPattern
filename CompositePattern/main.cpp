#include "composite.h"
#include "leaf.h"
int main(int argc, char *argv[]) {
    Composite *root = new Composite();
    root->doSomething();
    //创建一个树枝构件
    Composite *branch = new Composite();
    //创建一个叶子节点
    Leaf *leaf = new Leaf();
    //建立整体
    root->add(branch);
    branch->add(leaf);
    //父节点析构会删除子节点
    delete root;
}
