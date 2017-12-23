#ifndef SUBJECT_H
#define SUBJECT_H
class Subject {
public:
    virtual ~Subject() { }
    virtual void request(int num) = 0;
};
#endif // SUBJECT_H
