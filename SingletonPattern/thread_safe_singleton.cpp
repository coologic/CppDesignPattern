#include "thread_safe_singleton.h"
#include <QMutex>
#include <QMutexLocker>
namespace thread_safe_singleton_private {
    static QMutex mutex;
}
ThreadSafeSingleton* ThreadSafeSingleton::m_instance = nullptr;
ThreadSafeSingleton *ThreadSafeSingleton::GetInstance() {
    if (m_instance == nullptr) {
        QMutexLocker lock(&thread_safe_singleton_private::mutex);
        if (m_instance == nullptr) {
            m_instance = new ThreadSafeSingleton();
        }
    }
    return m_instance;
}

void ThreadSafeSingleton::DestoryInstance() {
    if (m_instance != nullptr) {
        delete m_instance;
        m_instance = nullptr;
    }
}

ThreadSafeSingleton::ThreadSafeSingleton() {

}
