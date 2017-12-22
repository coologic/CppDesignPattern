#ifndef SIGLETON_H
#define SIGLETON_H
/**
 * @brief 非线程安全单例，无多线程时使用
 */
class Singleton {
public:
    /**
     * @brief 单例模式，获取实例化对象
     * @param 无
     * @return 单例对象
     */
    static Singleton *GetInstance();
    /**
     * @brief 单例模式，主动销毁实例化对象
     * @param 无
     * @return 无
     */
    static void DestoryInstance();
private:
    /**
     * @brief 构造函数
     */
    Singleton();
    /**
     * @brief 单例模式在程序结束时自动删除单例的方法
     */
    class SingletonDel {
    public:
        ~SingletonDel() {
            if (m_instance != nullptr) {
                delete m_instance;
                m_instance = nullptr;
            }
        }
    };
    static SingletonDel m_singleton_del;///程序结束时销毁
    static Singleton *m_instance;       //单例对象指针
};
#endif // SIGLETON_H
