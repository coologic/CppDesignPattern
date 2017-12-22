#ifndef THREAD_SAFE_SINGLETON_H
#define THREAD_SAFE_SINGLETON_H
/**
 * @brief 线程安全单例，多线程时使用
 */
class ThreadSafeSingleton {
public:
    /**
     * @brief 单例模式，获取实例化对象
     * @param 无
     * @return 单例对象
     */
    static ThreadSafeSingleton* GetInstance();
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
    ThreadSafeSingleton();
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
    static ThreadSafeSingleton m_singleton_del;///程序结束时销毁
    static ThreadSafeSingleton *m_instance;       //单例对象指针
};
#endif // THREAD_SAFE_SINGLETON_H
